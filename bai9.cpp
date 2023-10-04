#include <stdio.h>
#include <math.h>

int main(void){
    int a[100], n, k = 0;
    do {
        printf ("Nhap n = ");
        scanf ("%d", &n);
    }while(n < 1);
    
    for (int i = 0; i < n; i++){
            printf ("Nhap a[%d] = ", i);
            scanf ("%d", &a[i]);
        }
    printf ("Cac Phan tu bang tong cac phan tu trc : ");
    for (int i = 0; i < n; i++)
    {
        int Tong = 0;
        for (int j = 0; j < i; j++)
        {
            Tong += a[j];
        }
        if ( Tong == a[i])
        {
            printf (" a[%d] ", i);
            k +=1;
        }
    }
    if ( k == 0)
        printf ("khong co");
    printf ("\n");
    return 0;
}
