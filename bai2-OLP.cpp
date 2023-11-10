#include <stdio.h>


void Input(int a[][11], int n);
void Output(int a[][11], int n);


int main(void)
{
    int a[100][11], n;
    printf ("Nhap so sinh vien tham gia : ");
    scanf ("%d", &n);
    Input(a,n);
    printf ("so diem cua cac SV la : \n");
    Output(a,n);
  
    printf ("\n\n\n");
    // tim doi co kha nang dat ket qua cao nhat
    int KetQuaCao = 0;
    for ( int i = 1; i <= n; i++){
        for (int j = i + 1; j <= n; j++){
            for ( int k = j + 1; k <= n; k++){
                int DiemKhaNang = 0;
                    // tim diem cua 1 doi
                    for (int p = 1; p <=11; p++){
                        int max = a[i][p];
                        if (a[j][p] >= max)
                            max = a[j][p];
                        if (a[k][p] >= max)
                            max = a[k][p];
                           DiemKhaNang += max;
                    }
                // so sanh cac doi
                if (DiemKhaNang >= KetQuaCao)
                    KetQuaCao = DiemKhaNang;
            }
        }
    }
    
    printf ("Ket Qua  %d", KetQuaCao);
    
    printf ("\n\n\n");
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

