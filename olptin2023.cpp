 //bai 2
//#include <stdio.h>
//
//
//int main(void){
//    int M, N, K;
//    do {
//        scanf ("%d", &M);
//    } while (M < 0|| M > 100);
//    do {
//        scanf ("%d",&N);
//    } while (N < 0|| N > 100);
//    do {
//        scanf ("%d", &K);
//    } while (K < 0|| K > M+N);
//    
//    
//    int tmp = (M+N-K)/3;
//    if ( tmp*2 > M){
//        tmp = M/2;
//    }
//    if ( tmp > N)
//        tmp = N;
//    printf ("%d", tmp);
//    
//    
//    
//    printf ("\n\n\n");
//    return 0;
//}


//// bai 1
//
//#include <stdio.h>
//#include <math.h>
//
//int main (void){
//    int Xa1, Ya1, Xa2, Ya2;
//    int Xb1, Yb1, Xb2, Yb2;
//
//
//    scanf ("%d%d%d%d", &Xa1, &Ya1, &Xa2, &Ya2);
//    scanf ("%d%d%d%d", &Xb1, &Yb1, &Xb2, &Yb2);
//
//    int S1, S2, St, kq;
//    S1 = sqrt ( pow((Ya2-Ya1),2)*pow((Xa2 -Xa1),2) );
//    S2 = sqrt ( pow((Yb2-Yb1),2)*pow((Xb2 -Xb1),2) );
//    St = sqrt ( pow((Ya2-Yb1),2)*pow((Xa2 -Xb1),2) );
//    kq = S1+S2-2*St;
//    if(Xa1 <= Xb1 && Ya1 <= Ya2 && Xb2 <= Xa2 && Yb2 <= Ya2){
//        printf ("%d", S1-S2);
//    }
//    else
//        printf ("%d", kq);
//
//    printf ("\n\n\n");
//    return 0;
//}


//bai3.
//#include <stdio.h>
//
//
//int main (void){
//    int n, a[100][2];
//    do{
//        scanf ("%d", &n);
//    }while (n<3);
//    
//    for (int i = 0; i < n; i++){
//        for (int j = 0; j < 2; j++){
//            scanf ("%d", &a[i][j]);
//        }
//    }
//    int maxX;
//    int maxY;
//    // tim max cua x
//    
//    int max = a[0][0];
//    for (int i = 0; i < n; i++){
//        if ( max < a[i][0])
//            max = a[i][0];
//        }
//        maxX = max;
//    
//    
//    // tim max cua y
//        
//    int max1 = a[0][1];
//    for (int i = 0; i < n; i++){
//        if ( max1 < a[i][1])
//            max1 = a[i][1];
//            }
//        maxY = max1;
//    
//    
//    int minX, minY;
//    // tim min cua x
//    
//    int min = a[0][0];
//    for (int i = 0; i < n; i++){
//        if ( min > a[i][0])
//            min = a[i][0];
//    }
//        minX = min;
//        
//        
//    // tim min cua y
//        
//    int min1 = a[0][1];
//    for (int i = 0; i < n; i++){
//        if ( min1 > a[i][1])
//            min1 = a[i][1];
//    }
//    minY = min1;
//
//    int S = (maxX -minX)*(maxY-minY);
//    printf ("%d", S);
//        
//
//        
//    
//    printf ("\n\n");^
//    return 0;
//}

//bai 4
#include <stdio.h>
int a[200];
int n, m;
int X[2] = {-1, 0};
int Y[2] = {0, 1};

void inkq(void) {
    
    for(int i = 0; i <= n + m - 1; i++) {
        printf("%d  ",a[i]);
    }
    printf("\n");
}

void dichuyen(int x, int y, int cnt) {
    for(int i = 0; i <= 1; i++) {
        if (x == 0 && y == m) {
            inkq();
            return;
        }
        int u = x + X[i];
        int v = y + Y[i];
        a[cnt] = i;
        if (u >= 0 && v <= m) dichuyen(u,v,cnt + 1);
    }
}

int main(void) {
    scanf("%d %d",&n,&m);
    dichuyen(n,0,0);
    return 0;
}
