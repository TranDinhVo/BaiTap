
#include <stdio.h>


int main(void){
    int arr[2*10*10*10*10*10], N;
    do {
        printf ("Nhap :  ");
        scanf ("%d", &N);
    } while ( N < 2 || N > 2*10*10*10*10*10);
    
    for (int i = 1; i <= N; i++){
        scanf ("%d", &arr[i]);
    }
    
        int dem = 0;
        for ( int i = 1; i <= N; i++)
        {
            for ( int a = 1; a < N; a++){
                int b = a;
                while (b < i){
                    if ( b == i)
                       dem++;
                    else
                        b = b + arr[b];
            }
          
            }
            arr[i] = dem;
            dem = 0;
            
        }
        
    
    for ( int i = 1; i <= N; i++){
        printf ("%d ", arr[i]);
    }
    printf ("\n\n----------------------------------");
    printf ("\n\n\n");
    return 0;
}
