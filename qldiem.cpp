#include <iostream>
using namespace std;
#include <stdlib.h>

char dsten[1000][100];
char dsdiem1[100][100], dsdiem2[100][100], dsdtb[100][100];
int N = 0;

#include "diem.h"

int main()
{
	DocFile();
    int chon;
    do
    {
        system("cls");
        chon = ThucDon();
        if (chon == 1)
        {
            ThemLienHe();
        }
        else if (chon == 2)
        {
            HienThiThongTin();
            cin.ignore();
        }
        else if (chon ==3)
        {
        	SuaFile();
        }
        else if (chon == 4)
        {
        	XoaFile();
        }
        else if (chon == 0)
        {
        	GhiFile();
            cin.ignore();
            cout<<"Cam on ban da su dung chuong trinh\n";
        }
        cout<<"Nhan phim ENTER de tro ve\n";
        cin.get();
    } while (chon != 0);
    return 0;
}
