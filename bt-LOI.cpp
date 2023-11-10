#include <stdio.h>


int main(void){
    int a[2][100], n;
    printf ("Nhap So ngay theo doi : ");
    scanf ("%d", &n);
    for (int i = 1; i <=2; i++){
        for (int j = 1; j <= n; j++){
            scanf ("%d", &a[i][j]);
        }
    }
    int ss = 0;
    int dem = 0;
    for (int j = 1; j <= n; j++){
        for (int i = 1; i <= 2 ; i++ ){
            
            if ( a[i][j] >= a[i+1][j] )
                dem += 1;
            
            else
            {
                if ( dem > ss ){
                    ss = dem;
                    dem = 0;
                }
                else dem = 0;
            }
            
        }
    }
    
    printf ("KQ : %d ", ss);
    return 0;
}

