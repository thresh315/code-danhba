#include <iostream>
using namespace std;
#include <stdlib.h>

char dsrau[100][100], dsthucan[100][100], dsanvat[100][100];
int N=0;
#include "qlch.h"

int main()
{
	DocFile();
	int chon;
	do
	{
		system ("cls");
		chon = ThucDon();
		if (chon == 1)
		{
			RauCuQua();
		}
		/*else if (chon == 2)
		{
			ThucAn();
		}
		else if (chon == 3)
		{
			DoAnVat();
		}*/
		else if (chon == 4)
		{
			HienThiMatHang();
			cin.ignore();
		}
		else if (chon == 0)
		{
			GhiFile();
			cin.ignore();
			cout<<"Cam on da dung ung dung. \n";
		}
		cout<<" An Enter de tro ve."<<endl;
		cin.get();
	}
	while(chon != 0);
	return 0;
}
