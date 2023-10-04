#include <stdio.h>
#include <math.h>

int main(void){
    int a[100], n, i = 0;
    do {
        printf ("Nhap n = ");
        scanf("%d", &n);
    }while (n < 0);
    printf ("Bieu dien nhi phan la: ");
    
    while (n > 0)
    {
        a[i] = n % 2;
        n=n/2;
        i++;
    }
    for (int j = i - 1; j >= 0; j-- ){
        printf ("%d", a[j]);
    }
     
      

    printf ("\n");
    return 0;
}
