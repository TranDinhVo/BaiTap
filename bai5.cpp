#include <stdio.h>
#include <math.h>

int main(void){
    float a, b, c, delta, x1, x2;
    do {
        printf ("Nhap a = ");
        scanf ("%f", &a);
    }while(a == 0);
    printf ("Nhap b = ");
    scanf ("%f", &b);
    printf ("Nhap c = ");
    scanf ("%f", &c);
    delta = b*b - 4*a*c;
    if (delta < 0)
        printf ("PT Vo Nghiem");
    else if (delta == 0)
        printf (" PT co mot Nghiem Kep x1 = x2 = %.2f", x1 = -b/2*a);
    else {
        x1 = (-b - sqrt(delta))/2*a;
        x2 = (-b + sqrt(delta))/2*a;
        printf (" PT có 2 Ngiệm la: \n x1 = %.2f \n x2 = %.2f", x1, x2);
    }
    printf ("\n");
    return 0;
}
