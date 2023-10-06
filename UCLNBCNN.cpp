#include <stdio.h>
#include <math.h>

int UCLN(int a, int b);
int BCNN(int a, int b);
int main(void){
    int a, b;
    printf ("Nhap a va b :");
    scanf ("%d%d", &a, &b );
    int n = UCLN(a,b);
    printf ("Uoc chung lon nhat cua %d va %d la : %d", a, b, n);
    int d = BCNN (a,b);
    printf ("\nBCNN cua %d va %d la : %d", a, b, d);
    
    
   
    printf ("\n");
    return 0;
}

int UCLN(int a, int b){
    if ( a == 0 || b == 0)
        return a+b;
    else {
         if (a > b)
             a = a - b;
         else
            b = b - a;
    }
    return a;
}
int BCNN(int a, int b){
    if ( a == 0 || b == 0)
        return 0;
    else {
        if ( b > a ){
                for ( int i = a; i <= a*b ; i++)
                    if ( i % b == 0 && i % a == 0)
                        return i;
            }
        else {
            for ( int i = a; i <= a*b ; i++)
                if ( i % b == 0 && i % b == 0)
                    return i;
            }
        }
    return 0;
}
    




