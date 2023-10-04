#include <stdio.h>
#include <math.h>

int main(void){
    int n;
    float x, s = 0;
    do {
        printf ("Nhap n = ");
        scanf ("%d", &n);
       }while (n < 1);
    
    do {
        printf ("Nhap x = ");
        scanf ("%f", &x);
       }while (x < 0);
    for (int i = n; i > 0; i--)
    {
        s = sqrt(pow(x,i)+s);
    }
    printf ("KQ = %.2f", s);
    
    printf ("\n");
    return 0;
}
