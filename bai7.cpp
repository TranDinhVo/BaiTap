#include <stdio.h>
#include <math.h>

int main(void){
    float x[100], y[100], DoDai = 0;
    int n, i;
    
    do{
        printf (" Nhap n = ");
        scanf ("%d", &n);
    }while ( n < 2);
    
    for (i = 1; i <= n; i++)
    {
        printf ("Nhap Toa Diem M%d : ", i);
        scanf ("%f%f", &x[i], &y[i]);
    }
    for (i = 2; i <= n; i++)
    {
        DoDai = DoDai + sqrt (pow (x[i]-x[i-1],2) + pow(y[i]-y[i-1],2));
    }
    
    printf (" Do Dai Duong Gap Khuc = %.2f ", DoDai);
    
    printf ("\n");
    return 0;
}
