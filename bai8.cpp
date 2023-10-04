#include <stdio.h>
#include <math.h>
// viet chuong trinh sap xep day theo tu tu giam dan
int main(void){
    int n, a[100];
    do {
        printf ("Nhap n = ");
        scanf ("%d", &n);
    }while(n < 1);
    
    for (int i = 0; i< n; i++)
    {
        printf ("NHap a[%d] = ", i);
        scanf ("%d", &a[i]);
    }
    for (int i = n -1 ; i > 0; i--)
    {
        for (int j=0 ; j < i; j++ )
        {
            if (a[j] < a[j+1])
            {
                int k=a[j];
                a[j] = a[j+1];
                a[j+1] = k;
            }
        }
    }
    printf ("day sau khi sap xep la :");
    for ( int i = 0; i < n; i++)
    {
        printf ("%d ", a[i]);
    }
    
    printf ("\n");
    return 0;
}
