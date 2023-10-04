#include <stdio.h>
#include <math.h>

int main(void){
    int n, a[100], j = 0, Tong = 0, TBC;
    do {
        printf ("Nhap n = ");
        scanf ("%d", &n);
    }while(n < 1);
    
    for (int i = 0; i< n; i++)
    {
        printf ("NHap a[%d] = ", i);
        scanf ("%d", &a[i]);
    }
    for ( int i = 0; i < n; i++)
    {
        int k = sqrt(a[i]);
        if ( pow (k, 2) == a[i] )
        {
            Tong += a[i];
            j++;
        }
    }
    TBC = Tong*1.00/j;
    printf ("Trung Binh Cong cac So Chinh Phuong = %d ", TBC);
    printf ("\n");
    return 0;
}
