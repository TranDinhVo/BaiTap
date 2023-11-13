#include <stdio.h>


int main(void){
    int arr[2*10*10*10*10*10], N;
    int    arr2[100];
    do {
        printf ("Nhap :  ");
        scanf ("%d", &N);
    } while ( N < 2 || N > 2*10*10*10*10*10);
    
    for (int i = 1; i <= N; i++){
        scanf ("%d", &arr[i]);
    }
    
        int dem = 0;
        for ( int i = 2; i <= N; i++)
        {
            for ( int a = 1; a < i; a++){
                    int b = a + arr[a];
                    while (b < i){
                    	b = b + arr[b];
					}
					if ( b == i )
					   dem++;		
            }
            arr2[i] = dem;
            dem = 0;
        }
        
    
    for ( int i = 1; i <= N; i++){
        printf ("%d ", arr2[i]);
    }
    printf ("\n\n----------------------------------");
    printf ("\n\n\n");
    return 0;
}
