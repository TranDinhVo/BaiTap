#include <stdio.h>
#include <math.h>

int KTSNT(int x);

int main(void){
    int n;
        printf (" Nhap n : ");
        scanf ("%d", &n);

    if (KTSNT(n) == 1)
        printf ("La so nguyen to  ");
    else
        printf ("khong phai La so nguyen to  ");
   
    printf ("\n");
    return 0;
}
int KTSNT( int x ){
    if ( x < 2)
        return 0;
    else {
        for ( int i = 2; i <=sqrt(x); i++ ){
            if ( x % i == 0 )
                return 0;
        }
    }
    return 1;
}
