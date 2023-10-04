#include <stdio.h>
#include <math.h>

int main(void){
    int a[100], n, x, dem = 0;
    do {
        printf ("Nhap n = ");
        scanf ("%d", &n);
    }while(n < 1);
    printf ("Nhap x = ");
    scanf ("%d", &x);
    for (int i = 0; i < n; i++)
    {
        printf ("Nhap a[%d] = ", i);
        scanf ("%d", &a[i]);
    }
    
    for ( int i = 0; i < n; i++)
    {
        for (int j = i +1 ; j < n; j++)
        {
            if ( a[i] + a[j] == x)
                dem +=1;
        }
    }
    printf ("so cap TM la : %d", dem);
    printf ("\n");
    return 0;
}
