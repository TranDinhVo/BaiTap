#include <stdio.h>
#include <math.h>
// viet chuong trinh tim va in ra cac so nguyen to tu a1, a2, a3 ,.... an

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
    printf (" Cac So Nguyen To Trong day la : ");
    
    for (int i = 0; i < n; i++)
    {
        int dem = 0;
        
        for (int j = 2; j <= sqrt (a[i]); j++)
        {
            if ( a[i] % j == 0)
                dem +=1;
        }
        if (dem == 0 && a[i] > 1)
            printf ("%d ", a[i]);
    }
    
    
    printf ("\n");
    return 0;
}
