#include <stdio.h>


int main(void){
    int arr[2*10*10*10*10*10], N, a, b;
    do {
        printf ("Nhap :  ");
        scanf ("%d%d%d", &N, &a, &b);
    } while ( N < 2 || N > 2*10*10*10*10*10);
    
    for (int i = 1; i <= N; i++){
        scanf ("%d", &arr[i]);
    }
    int dem = 0;
    for ( a = a; a <= N;){
        a = a + arr[a];
        if (a == b)
            dem = dem +1;
    }
    if (dem != 0)
        printf ("YES");
    else
        printf ("NO");
    printf ("\n\n----------------------------------");
    printf ("\n\n\n");
    return 0;
}

