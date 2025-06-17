#include <iostream>
#include <conio.h>
using namespace std;
int main()
{        int a[20], n, i, kol = 0, s = 0;
	   cout << "\t Input N (<=20) ";
	   cin >> n;
	   cout <<"\n\t Massiv A" << endl;
	   for(i = 0; i < n; i++) {
				cout << "\t a[ " << i+1 << " ] = ";
				cin >> a[i];
		}
        for(i=0; i<n;i++)
				if(a[i] <0){
						kol++;
						s += a[i];
				}
		cout << "\n Kol—vo = " << kol << "\t Summa = " << s << endl;
		cout << "\n Press any key ... " << endl;
		getch();}