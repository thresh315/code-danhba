#include <string.h>
#include <fstream>
#include <iostream>
using namespace std;
int ThucDon()
{
    cout<<"CHUONG TRINH QUAN LY DANH BA\n";
    cout<<"1. Them lien he\n";
    cout<<"2. Hien thi danh sach lien he\n";
    cout<<"3. Sua lien lac\n";
    cout<<"4. Xoa lien lac\n";
    cout<<"0. Thoat\n";
    int c;
    cout<<"Chon 1 chuc nang: ";
    cin>>c;
    return c;
}

void ThemLienHe()
{
    char ten[100], sdt[11], email[50];
    cout<<"Nhap ten: ";
    cin.ignore();
    cin.getline(ten, 100);
    
    cout<<"Nhap so dien thoai: ";
    cin.getline(sdt, 11);
    
    cout<<"Nhap email: ";
    cin.getline(email, 50);
    
    strcpy(dsten[N], ten);
    strcpy(dssdt[N], sdt);
    strcpy(dsemail[N], email);
    
    N++;
    
}

void HienThiDanhSachLienHe()
{
    cout<<"Co "<<N<<" lien he\n";
    cout<<"STT\t Ten\tSo dien thoai\tEmail\n";
    for(int i = 0; i<N; i++)
    {
        cout<<i+1<<"."<<"\t"<<dsten[i]<<"\t"<<dssdt[i]<<"\t"<<dsemail[i]<<endl;
    }    

}

void GhiFile()
{
	ofstream fout("danhba.hung");
	fout<<N<<endl;
	for(int i=0; i<N;i++)
	{
		fout<<dsten[i]<<endl;
		fout<<dssdt[i]<<endl;
		fout<<dsemail[i]<<endl;
	}
	fout.close();
}

void DocFile()
{
	ifstream fin("danhba.hung");
	fin>>N;
	char t[100];
	fin.getline(t, 100);
	for(int i = 0 ; i < N ; i++)
	{
		fin>>dsten[i];
		fin>>dssdt[i];
		fin>>dsemail[i];
	}
	fin.close();
}

void SuaFile()
{
	cout<<"STT\t Ten\tSo dien thoai\tEmail\n";
    for(int i = 0; i<N; i++)
    {
        cout<<i+1<<"."<<"\t"<<dsten[i]<<"\t"<<dssdt[i]<<"\t"<<dsemail[i]<<endl;
    }
    int a;
    cout<<"Moi ban nhap thu tu ten can sua: ";
    cin>>a;
    if(a>0)
    {
		char ten[100], sdt[11], email[50];
		cout<<"Nhap ten moi: ";
		cin.ignore();
		cin.getline(ten, 100);
		
		cout<<"Nhap so dien thoai moi: ";
		cin.getline(sdt, 11);
		
		cout<<"Nhap email moi: ";
		cin.getline(email, 50);
		
		strcpy(dsten[a-1], ten);
		strcpy(dssdt[a-1], sdt);
		strcpy(dsemail[a-1], email);
     }  
}
void XoaFile()
{
	cout<<"STT\t Ten\tSo dien thoai\tEmail\n";
    for(int i = 0; i<N; i++)
    {
        cout<<i+1<<"."<<"\t"<<dsten[i]<<"\t"<<dssdt[i]<<"\t"<<dsemail[i]<<endl;
    }
    int b;
    cout<<"Nhap so can xoa: ";
    cin>>b;
    for(int j = b-1; j<N-1;j++)
    {
    	strcpy(dsten[j], dsten[j+1]);
		strcpy(dssdt[j], dssdt[j+1]);
		strcpy(dsemail[j], dsemail[j+1]);
    } 
	N--;
}
