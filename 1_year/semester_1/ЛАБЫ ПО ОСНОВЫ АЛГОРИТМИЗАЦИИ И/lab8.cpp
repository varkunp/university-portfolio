#include <iostream>
#include <string.h>
#include <conio.h>
#include <string>
#include <stdio.h>
using namespace std;
int main ()

{int flag=0;
string type;
struct  st{
char imya[40];
char tip[10];
double cena; int kol;
} abut[100];
int n, i, j, v;
cout << "Vvedite kol—vo detaley" << endl;   cin >> n;
for (i=0; i < n; i++)
{ cout << "Vvedite imya ";
cin >> abut[i].imya;
cout << "Vvedite tip ";
cin >> abut[i].tip;
cout << "Vvedite ceny za shtuku " << endl;
cin >> abut[i].cena;
cout << "Vvedite kol-vo"<< endl;
cin >> abut[i].kol;
}
cout << "Vvedite tip,kotorii bydem iskat\n";
cin >> type;
cout << "Ceni tovarov:\n";
for (i=0; i<n; i++){
if (string(abut[i].tip)==type) {
cout << "\n Stoimostb     "<<abut[i].cena*abut[i].kol<<"     name =   "<<abut[i].imya;
flag=1;}
else
{flag=-1;}
}


if (flag<0){
cout << "Takogo tipa nety";}



getch();
return 0;
}
