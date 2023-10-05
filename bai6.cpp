#include <stdio.h>
#include <math.h>

int main(void){
    int a[100][100], b[100][100], c[100][100], i, j, m, n,p;
    do {
        printf ("Nhap hang m = ");
        scanf ("%d", &m);
        printf ("Nhap n = ");
        scanf ("%d", &n);
        printf ("Nhap cot p = ");
        scanf ("%d", &p);
    } while ( m < 1 && n < 1 && p < 1);

    printf (" Nhap Ma Tran A = ");
    for (i = 0; i < m; i ++)
    {
        for (j = 0; j < n; j++)
        {
            scanf ("%d", &a[i][j]);
        }
    }

    printf (" Nhap Ma Tran B = ");
    for (i = 0; i < n; i ++)
    {
        for (j = 0; j < p; j++)
        {
            scanf ("%d", &b[i][j]);
        }
    }
// nhan
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                c[i][j] = c[i][j] + a[i][k]*b[k][j];
            }
        }
    }
// xuat mang sau khi nhan
    printf (" A*B = \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf ("%d ", c[i][j]);
        }
        printf ("\n");
    }
    
    
    printf ("\n");
    return 0;
}
