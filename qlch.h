#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
int ThucDon()
{
	cout<<"Chao mung ban toi cua hang chung toi \n";
	cout<<"1. Rau Cu Qua. \n";
	cout<<"2. Thuc An. \n";
	cout<<"3. Do An Vat. \n";
	cout<<"4. Hien Thi Mat Hang Da Chon. \n";
	cout<<"0. Tro ve man hinh chinh. \n";
	int a;
	cout<<"Moi chon danh muc : ";
	cin>>a;
	return a;
}
void DocFile()
{
	ifstream fin("mathang.hung");
	fin>>N;
	char t[100];
	fin.getline(t,100);
	for(int i=0; i <N;i++)
	{
		fin>>dsrau[i];
		fin>>dsthucan[i];
		fin>>dsanvat[i];
	}
	fin.close();
}
void GhiFile()
{
	ofstream fout("mathang.hung");
	fout<<N<<endl;
	for (int i =0 ; i < N; i++)
	{
		fout<<dsrau[i]<<endl;
		fout<<dsthucan[i]<<endl;
		fout<<dsanvat[i]<<endl;
	}
	fout.close();
}
void RauCuQua()
{
	char rau[100], soluong[100];
    cout<<"Loai rau: ";
    char t[100];
    cin>>t;
    cout<<"So luong: ";
    int b;
    cin>>b;
    cin.ignore();
    cin.getline(rau, 100);
    
    strcpy(dsrau[N], rau);
    N++;
}
void HienThiMatHang()
{
	cout<<"Co"<<N<<"danh muc\n";
	cout<<"STT\tRau\t\tSoLuong\t\tThucAn\t\tSoLuong\t\tDoAnVat\t\tSoLuong\n";
	for(int i=0; i<N; i++)
	{
		cout<<i+1<<"."<<"\t"<<dsrau[i]<<"\t"<<dsthucan[i]<<"\t"<<dsanvat[i]<<endl;
	}
}
