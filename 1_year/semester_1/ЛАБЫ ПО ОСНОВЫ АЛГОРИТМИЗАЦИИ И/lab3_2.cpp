Программа:
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <math.h>
using namespace std;
char bufRus[256];
char* RUS(const char*text)
{ CharToOem(text,bufRus);
return bufRus;}
int main()
{  double  x,y,h,a,b;
cout << RUS("Введите значение концов отрезка\n");
cin >> a >> b;
cout << RUS("Введите шаг\n");  cin >> h;
cout << ("----------------\n");
cout << RUS("    X     |   Y    \n");
cout << ("----------------\n");
x=a;    while (x<=b)
{y=0.7*sin(3*x-1)  ;
 cout <<"\n    "<< x <<"   |  " << y << endl;
  x=x+h; }  cout << ("----------------\n"); getch(); }