Программа:
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
double a, b, y, x, h, m, s;
int n, k;
puts("Input a,b,h,n");
scanf("%lf%lf%lf%d", &a, &b, &h, &n);
for(x = a; x<=b; x+=h) {
m = s = 1;
for(k = 1; k<=n; k++) {
m=pow(-1,k+1)*pow(x,2*k+1)/(4*pow(k,2)-1);
s+=m;
}
y=(1+pow(x,2))/2*atan(x)-x/2;
printf("\n x= %8.2lf   sum= %8.5lf", x,s);
}
puts("\nPress any key ... ");
getch();
}