#include <stdio.h>


void Input(int a[][11], int n);
void Output(int a[][11], int n);
void ss (int a[][11], int n);

int main(void)
{
    int a[100][11], n;
    printf ("Nhap so sinh vien tham gia : ");
    scanf ("%d", &n);
    printf ("Nhap so diem cua cac SV qua cac chu de : \n");
    Input(a,n);
    printf ("so diem cua cac SV la : \n");
    Output(a,n);
  
    printf ("\n\n\n");
    ss(a,n);
    
    
    
    return 0;
}
void Input(int a[][11], int n){
    for ( int i = 1; i<= n; i++){
        for (int j = 1;j <= 11; j++){
            scanf ("%d", &a[i][j]);
        }
    }
}
void Output(int a[][11], int n){
    for ( int i = 1; i<= n; i++){
        for (int j = 1;j <= 11; j++){
            printf ("%d ",a[i][j]);
        }
        printf ("\n");
    }
}
void ss (int a[][11], int n){
    
    for (int j = 1;j <= 11; j++){
        int max = a[1][j];
        for ( int i = 1; i<= n; i++){
           
            if (a[i+1][j] > max )
                max = a[i+1][j];
            }
        printf ("%d ", max);
        
    }
}
