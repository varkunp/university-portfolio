программа:
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int n,s=1,i=0,a=10 ;
cout << "Input n"<<endl;
cin>>n;
do
{if (!(a%3!=0)and(a%5)) {;s=s*a;cout<<a<<" ";i++;}a++;}
while((i<n)&&(a<=99));
cout<<"\n n="<<n<<" sum="<<s;
cout<<"\nPress any key..."<<endl;
getch();
}