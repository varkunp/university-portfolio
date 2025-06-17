программа:
#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main()
{ double x,y,f,a,s; int k;
cout << "Vvedite x "; cin >> x;
cout << "Vvedite y "; cin >> y;
cout << "Viberite f: 1 - cos(x), 2 – pow(x,3) , 3 –exp(x) "; cin >> k;
switch(k)
{
case 1: f=cos(x); break;
case 2: f=pow(x,3); break;
case 3: f=exp(x); break;
default: cout<<"Ne vuibrana funkciya"; return 1;
}
a=x+y;
if (a>2) {s=exp(x+y)+pow(f,3);cout<<"a>2"<<endl;}
else
if (a<0&&a>-1) { s=pow(2*pow(x,3)+f,2)+log(fabs(y)) ;cout << "-1<a<0" << endl;}
else
{s=tan(y)+5*f;}
cout<<"RESULT = "<<s<<endl;
getch();
return 0;
}