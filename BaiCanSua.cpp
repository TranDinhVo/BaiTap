#include <stdio.h>
#include <math.h>
void NhapMaTran (int a[100][100], int m, int n);
void XuatMaTran ( int a[100][100], int m, int n);
int KTSNT (int n);
int TongMaTran ( int a[100][100], int m, int n);

int main (void){
    int a[100][100], h, c, dem = 0;
    
    NhapMaTran (a, h, c);
    XuatMaTran (a, h, c);
    
    for (int i = 1; i <= h; i++){
        for (int j = 1; j <= c; j++){
            
            if(KTSNT(a[i][j]))
                dem = dem + 1;
        }
    }
    printf (" Trong MaTran co %d STN \n", dem);
    
    printf ("Tong Phan Tu Trong MaTran = %d ", TongMaTran (a, h, c) );
    
    return 0;
}
void NhapMaTran (int a[100][100], int m, int n){
        printf ("Nhap Hang m va Cot n :");
        scanf ("%d%d", &m, &n);
  
        
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf ("a[%d][%d] :  ", i, j);
            scanf ("%d ", &a[i][j]);
        }
    }
}
void XuatMaTran ( int a[100][100], int m, int n){
    printf (" Mang Vua Nhap la :");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf ("%d ", a[i][j] );
        }
        printf ("\n");
    }
}
int KTSNT (int n){
    if (n < 2 )
        return 0;
    for ( int i = 2 ; i <= sqrt (n); i++){
            if ( n % i == 0 )
                return 0;
        }
    return 1;
}
int TongMaTran ( int a[100][100], int m, int n){
    int Tong = 0;
    for (int i = 0; i < m; i++){
        for ( int j = 0; j < n; j++){
            Tong = Tong + a[i][j];
        }
    }
    return Tong;
}


