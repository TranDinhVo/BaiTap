#include <stdio.h>
#include <math.h>

struct PhanSo
{
    int tuso;
    int mauso;
};
int UCLN ( int a, int b);
void NhapPS ( struct PhanSo *ps);
void XuatPS ( struct PhanSo ps);
void NhapDay ( struct PhanSo a[], int n);
void XuatDay ( struct PhanSo a[], int n);
void RutGon ( struct PhanSo *RutGon);
struct PhanSo Tong (  struct PhanSo a[], int n);
struct PhanSo Hieu ( struct PhanSo a[], int n);
struct PhanSo Tich ( struct PhanSo a[], int n);
struct PhanSo Thuong ( struct PhanSo a[], int n);

int main (void){
    int n;
    struct PhanSo a[100];
    do {
        printf (" Nhap N = ");
        scanf ("%d", &n);
    }while ( n < 1);
    NhapDay (a, n);
    printf (" Day so Vua Nhap la : \n");
    
    XuatDay (a, n);
// Tong Day so
    Tong (a, n);
    
// Hieu Day so
   Hieu (a, n);
    
// Tich day so
    Tich (a, n);
    
// Thuong day so
    Thuong (a, n);
    
    printf ("\n");

}

void NhapPS ( struct PhanSo *ps){
    printf ("Nhap Tu So = ");
    scanf ("%d", &ps -> tuso);
    do {
        printf ("Nhap Mau So = ");
        scanf ("%d", &ps -> mauso);
        if ( ps -> mauso == 0)
            printf (" Nhap lai Mau So Khac 0 !");
    } while ( ps -> mauso == 0);
}

void XuatPS ( struct PhanSo ps){
// 1/-a ==> -1/a
    if (ps.mauso < 0){
        ps.tuso *=-1;
        ps.mauso *=-1;
    }
        RutGon(&ps);
    if (ps.tuso == 0 || ps.mauso == 1)
        printf ("%d", ps.tuso);
    else
        printf ("%d/%d ", ps.tuso, ps.mauso);
        
}
// Nhap day so
void NhapDay ( struct PhanSo a[], int n){
    for ( int i = 0; i < n; i++){
        printf ("a[%d] : \n", i);
        NhapPS (&a[i]);
    }
}
// Xuat day so
void XuatDay ( struct PhanSo a[], int n){
    for ( int i = 0; i < n; i++){
        printf ("a[%d] = ", i);
        XuatPS(a[i]);
        printf ("\n");
    }
         
}
int UCLN ( int a, int b){
//    a = abs (a);
//    b = abs (b);  lỗi
    a = sqrt (pow (a,2));
    b = sqrt (pow (b,2));
    if ( a == 0 || b == 0)
        return a+b;
    else {
        while (a != b){
            if ( a > b )
                a = a - b;
            else
                b = b - a;
        }
    }
    return a;
}
// Rut Gon Phan So
void RutGon ( struct PhanSo *RutGon){
    int a = RutGon -> tuso;
    int b = RutGon -> mauso;
    int k = UCLN (a,b);
    RutGon -> tuso /=k;
    RutGon -> mauso /=k;
    
}
// tinh tong cac phan so
struct PhanSo Tong (  struct PhanSo a[], int n){
    struct PhanSo T;
    T.tuso = a[0].tuso;
    T.mauso = a[0].mauso;
    for ( int i = 1; i < n; i++){
        T.tuso = T.tuso*a[i].mauso + a[i].tuso*T.mauso;
        T.mauso = T.mauso*a[i].mauso;
    }
    RutGon(&T);
    if (T.tuso == 0 || T.mauso == 1)
        printf ("\nTong day so = %d", T.tuso);
    else
    printf ("\nTong day so = %d/%d ", T.tuso, T.mauso);
    return T;
}
// tinh hieu cac phan tu
struct PhanSo Hieu ( struct PhanSo a[], int n){
    struct PhanSo h;
    h.tuso = a[0].tuso;
    h.mauso = a[0].mauso;
    for (int i = 1; i < n ; i++){
        h.tuso = h.tuso*a[i].mauso - a[i].tuso*h.mauso;
        h.mauso = h.mauso*a[i].mauso;
    }
    RutGon(&h);
    if (h.tuso == 0 || h.mauso == 1)
        printf ("\nHieu day so = %d", h.tuso);
    else
        printf ("\nHieu day so = %d/%d", h.tuso, h.mauso);
    return h;
}
// tinh Tich cac phan tu
struct PhanSo Tich ( struct PhanSo a[], int n){
    struct PhanSo Tic;
    Tic.tuso = a[0].tuso;
    Tic.mauso = a[0].mauso;
    for (int i = 1; i < n; i++){
        Tic.tuso = Tic.tuso*a[i].tuso;
        Tic.mauso = Tic.mauso*a[i].mauso;
    }
    RutGon(&Tic);
    if (Tic.tuso == 0 || Tic.mauso == 1)
        printf ("\nTich day so = %d", Tic.tuso);
    else
        printf("\nTich day so = %d/%d", Tic.tuso, Tic.mauso);
    return Tic;
}
// tinh Thuong cac phan tu
struct PhanSo Thuong ( struct PhanSo a[], int n){
    struct PhanSo Thw;
    Thw.tuso = a[0].tuso;
    Thw.mauso = a[0].mauso;
    for (int i = 1; i < n; i++){
        Thw.tuso = Thw.tuso*a[i].mauso;
        Thw.mauso = Thw.mauso*a[i].tuso;
    }
    RutGon(&Thw);
    if (Thw.mauso == 0)
        printf ("\nDay So Khong The Tinh THUONG ! ");
    else if (Thw.tuso == 0 || Thw.mauso == 1)
        printf ("\nThuong day so = %d", Thw.tuso);
    else
        printf("\nThuong day so = %d/%d", Thw.tuso, Thw.mauso);
    return Thw;
}

