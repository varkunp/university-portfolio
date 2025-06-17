#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
    double x, y, z, a, b, c, rez;

    puts("\n\t x,y,z=");
    scanf("%lf%lf%lf", &x, &y, &z);  //

    a = fabs(pow(x, y / x) - pow(y / x, 1. / 3));
    b = (y - x);
    c = cos(y - z) / (y - x) / (1 + pow(y - x, 2));
    rez = a + b * c;

    printf("\n x = %7.3lf\n y = %7.3lf\n z = %7.3lf\nRezult = %lf\n", x, y, z, rez);
    puts("Press any key ...");

    getch();
    return 0;
}
1.825e2      // x = 182.5
18.225       // y
-3.298e-2    // z = -0.03298