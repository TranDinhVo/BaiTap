//bai2
#include <stdio.h>


int main(void){
    int M, N, K;
    do {
        scanf ("%d", &M);
    } while (M < 0|| M > 100);
    do {
        scanf ("%d",&N);
    } while (N < 0|| N > 100);
    do {
        scanf ("%d", &K);
    } while (K < 0|| K > M+N);
    
    
    int tmp = (M+N-K)/3;
    if ( tmp*2 > M){
        tmp = M/2;
    }
    if ( tmp > N)
        tmp = N;
    printf ("%d", tmp);
    
    
    
    printf ("\n\n\n");
    return 0;
}
