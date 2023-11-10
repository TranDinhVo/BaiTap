#include <stdio.h>


int main(void){
    int M, N, K;
    
    do {
        printf ("Nhap so Nu tham gia : ");
        scanf("%d", &M);
    }while ( M < 0 || M > 100);
    do {
        printf ("Nhap so Nam tham gia : ");
        scanf("%d", &N);
    }while ( N < 0 || N > 100);
    do {
        printf ("Nhap so Nguoi tham gia vao BTC : ");
        scanf("%d", &K);
    }while ( K < 0 || K > M + N);
  
    int tmp = (M+N-K)/3;
    if (tmp*2>M)
        tmp = M/2;
    if (tmp > N)
        tmp = N;
    printf ("Kq la :%d ", tmp);
    
    printf ("\n\n\n");
    return 0;
}

