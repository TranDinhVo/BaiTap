#include <stdio.h>
#include <math.h>

int KTSNT (int x);
int main (void){
    int a[100][100], m, n;
    printf ("Nhap Hang va Cot cua MaTran : ");
    scanf ("%d%d", &m, &n);
    for (int i = 1; i <= m; i++){
        for ( int j = 1; j <= n; j++){
            printf ("a[%d][%d] = " , i, j);
            scanf ("%d ", &a[i][j]);
        }
    }
    int demsnt = 0;
    for (int i = 1; i <= m; i++){
        for ( int j = 1; j <= n; j++){
            int snt = KTSNT (a[i][j]);
            if ( snt )
                demsnt = demsnt + 1;
        }
    }
        
    printf ("Trong MaTran co %d SNT !\n", demsnt);
    int Tong = 0;
    for (int i = 1; i <= m; i++){
        for ( int j = 1; j <= n; j++){
            Tong = Tong + a[i][j];
        }
    }
    printf (" Tong cua Matran = %d", Tong);
    
    
}
int KTSNT (int x){
    if (x < 2 )
        return 0;
    for (int i = 2; i <= sqrt(x); i++){
        if ( x % 2 == 0)
            return 0;
    }
 
    return 1;
}
