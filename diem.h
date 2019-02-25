#include <string.h>
#include <fstream>
#include <iostream>
using namespace std;
int ThucDon()
{
    cout<<"CHUONG TRINH QUAN LY DANH BA\n";
    cout<<"1. Them lien he\n";
    cout<<"2. Hien thi danh sach \n";
    cout<<"3. Sua thong tin\n";
    cout<<"4. Xoa thong tin\n";
    cout<<"0. Thoat\n";
    int c;
    cout<<"Chon 1 chuc nang: ";
    cin>>c;
    return c;
}

void ThemLienHe()
{
    char ten[100];
	char diem1[100], diem2[100];
    cout<<"Nhap ten: ";
    cin.ignore();
    cin.getline(ten, 100);
    
    cout<<"Nhap diem1: ";
	cin.getline(diem1, 100);
    
    cout<<"Nhap diem2: ";
    cin.getline(diem2, 100);
    
    strcpy(dsten[N], ten);
    strcpy(dsdiem1[N], diem1);
    strcpy(dsdiem2[N], diem2);
    
    N++;
    
}

void HienThiThongTin()
{
    cout<<"Co "<<N<<" lien he\n";
    cout<<"STT\t Ten\tSo Diem1\tSo Diem2\n";
    for(int i = 0; i<N; i++)
    {
        cout<<i+1<<"."<<"\t"<<dsten[i]<<"\t"<<dsdiem1[i]<<"\t\t"<<dsdiem2[i]<<endl;
    }    
}

void GhiFile()
{
	ofstream fout("diem.hung");
	fout<<N<<endl;
	for(int i=0; i<N;i++)
	{
		fout<<dsten[i]<<endl;
		fout<<dsdiem1[i]<<endl;
		fout<<dsdiem2[i]<<endl;
	}
	fout.close();
}

void DocFile()
{
	ifstream fin("diem.hung");
	fin>>N;
	char t[100];
	fin.getline(t, 100);
	for(int i = 0 ; i < N ; i++)
	{
		fin>>dsten[i];
		fin>>dsdiem1[i];
		fin>>dsdiem2[i];
	}
	fin.close();
}

void SuaFile()
{
	cout<<"STT\t Ten\tSo Diem1\tSo Diem2\n";
    for(int i = 0; i<N; i++)
    {
        cout<<i+1<<"."<<"\t"<<dsten[i]<<"\t"<<dsdiem1[i]<<"\t\t"<<dsdiem2[i]<<endl;
    }
    int a;
    cout<<"Moi ban nhap thu tu thong tin can sua: ";
    cin>>a;
    if(a>0)
    {
		char ten[100], diem1[100], diem2[100];
		cout<<"Nhap ten moi: ";
		cin.ignore();
		cin.getline(ten, 100);
		
		cout<<"Nhap so diem1 moi: ";
		cin.getline(diem1, 100);
		
		cout<<"Nhap so diem2 moi: ";
		cin.getline(diem2, 100);
		
		strcpy(dsten[a-1], ten);
		strcpy(dsdiem1[a-1], diem1);
		strcpy(dsdiem1[a-1], diem2);
     }  
}
void XoaFile()
{
	cout<<"STT\t Ten\tSo diem1\tSo diem2\n";
    for(int i = 0; i<N; i++)
    {
        cout<<i+1<<"."<<"\t"<<dsten[i]<<"\t"<<dsdiem1[i]<<"\t\t"<<dsdiem2[i]<<endl;
    }
    int b;
    cout<<"Nhap so can xoa: ";
    cin>>b;
    for(int j = b-1; j<N-1;j++)
    {
    	strcpy(dsten[j], dsten[j+1]);
		strcpy(dsdiem1[j], dsdiem1[j+1]);
		strcpy(dsdiem2[j], dsdiem2[j+1]);
    } 
	N--;
}
