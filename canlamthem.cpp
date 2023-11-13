// Viết chương trình tìm số lớn nhất trong 3 số thực a, b, c nhập từ người dùng.
//#include <stdio.h>
//#include <string.h>
//
//int main(void){
//    int a, b, c;
//
//    printf ("Nhap a = ");
//    scanf ("%d", &a);
//    printf ("Nhap b = ");
//    scanf ("%d", &b);
//    printf ("Nhap c = ");
//    scanf ("%d", &c);
//
//    int max = a;
//    if ( max < b )
//        max = b;
//    if ( max < c)
//        max = c;
//    printf ("so lon nhat la : %d ", max);
//    printf ("\n");
//    return 0;
//}


// Nhập vào tháng của 1 năm. Cho biết tháng thuộc quý mấy trong năm.
//#include <stdio.h>
//#include <string.h>
//
//int main(void){
//    int t;
//    do {
//        printf (" Nhap Thang trong nam : ");
//        scanf ("%d", &t);
//    }while ( t < 1 || t > 12);
//    
//    if (t <= 3 )
//        printf (" Thang %d trong nam la quy 1", t);
//    else if (t <= 6)
//        printf (" Thang %d trong nam la quy 2", t);
//    else if (t <= 9)
//        printf (" Thang %d trong nam la quy 3", t);
//    else
//        printf (" Thang %d trong nam la quy 4", t);
//    
//    printf ("\n");
//    return 0;
//}

// Tính S(n) = 1^3 + 2^3 + … + n^3 với giá trị n nguyên nhập từ bàn phím.
//#include <stdio.h>
//#include <string.h>
//
//int main(void){
//    int n, s = 0;
//    printf (" Nhap n = ");
//    scanf ("%d", &n);
//    for (int i = 1; i <= n; i++){
//        s = s + i*i*i;
//    }
//    printf (" S(n) = %d ", s);
//    
//    printf ("\n");
//    return 0;
//}



// Tìm số nguyên dương n nhỏ nhất sao cho 1 + 2 + … + n > 10000.
//#include <stdio.h>
//#include <string.h>
//
//int main(void){
//    int n = 1, s = 0;
//    scanf ("%d", &n);
//    while ( s < 10000){
//        n++;
//        s = s + n;
//    }
//    
//    printf (" so nguyen n nho nhat la : %d ", n);
//    
//    printf ("\n");
//    return 0;
//}


// Hãy sử dụng vòng lặp for để xuất tất cả các ký tự từ A đến Z
//#include <stdio.h>
//#include <string.h>
//
//int main(void){
//    printf ("Tu A den Z : ");
//    for (char i = 'a'; i <= 'z'; i++ ){
//        printf ("%c ", i);
//    }
//    
//    
//    printf ("\n");
//    return 0;
//}


// Viết chương trình tính tổng các giá trị lẻ nguyên dương nhỏ hơn N.
//#include <stdio.h>
//#include <string.h>
//
//int main(void){
//    int n;
//    int s = 0;
//    printf (" Nhap so n = ");
//    scanf ("%d", &n);
//    
//    for (int i = 1; i < n; i++){
//        if (i % 2 == 1)
//            s = s + i;
//    }
//    printf ("Tong cac gia tri le la s = %d ", s);
//    
//    
//    printf ("\n");
//    return 0;
//}


// In tất cả các số nguyên dương lẻ nhỏ hơn 100
//#include <stdio.h>
//#include <string.h>
//
//int main(void){
// 
//    
//    printf ("Cac so le be hon 100 la : ");
//    for (int i = 1; i < 100; i++){
//            if (i % 2 == 1)
//                printf ("%d ", i);
//    }
//    
//        
//        
//    
//    printf ("\n");
//    return 0;
//}


// Tìm ước số chung lớn nhất của 2 số nguyên dương
//#include <stdio.h>
//#include <string.h>
//
//int main(void){
//    int a, b, UCLN;
//    
//    printf ("Nhap a = ");
//    scanf ("%d", &a);
//    printf ("Nhap b = ");
//    scanf ("%d", &b);
//    while ( a != b ){
//        if ( a > b )
//            a = a - b;
//        else
//            b = b - a;
//    }
//    UCLN = a;
//    printf ("UCLN cua 2 so nguyen la : %d" ,UCLN);
//        
//    
//    printf ("\n");
//    return 0;
//}


// Viết chương trình kiểm tra 1 số có phải là số nguyên tố hay không
//#include <stdio.h>
//#include <math.h>
//int main(void){
//    int n;
//    
//    printf ("Nhap n = ");
//    scanf ("%d", &n);
//    for (int i = 2; i <= sqrt(n); i++)
//    {
//        if ( n % i == 0)
//            printf ("%d la khong phai la so nguyen to ! ", n);
//        else
//            printf ("%d la so nguyen to ! ", n);
//    }
//    
//    
//    
//    printf ("\n");
//    return 0;
//}



// Viết chương trình in ra tất cả các số lẻ nhỏ hơn 100 trừ các số 5, 7, 93.
//#include <stdio.h>
//#include <math.h>
//int main(void){
//    
//    for (int i = 1; i < 100; i+=2)
//    {
//            if ( i != 5 && i != 7 )
//                if ( i != 93 )
//                printf ("%d ", i);
//    }
//
//
//
//    printf ("\n");
//    return 0;
//}



// Viết chương trình nhập 3 cạnh của 1 tam giác, cho biết đó là tam giác gì
//#include <stdio.h>
//#include <math.h>
//int main(void){
//    int a, b, c;
//    printf ("Nhap canh tam giac : ");
//    scanf ("%d%d%d", &a, &b, &c);
//    if ( a + b > c && a + c > b && b + c > a){
//        if ( a == b && a == c)
//            printf ("Tam Giac la Tam giac Deu !");
//        else if ( a == b || a == c || b == c)
//            printf ("Tam Giac la Tam giac can !");
//        else
//            printf ("Tam Giac la Tam giac thuong ! ");
//    }
//    else
//        printf ("3 canh khong tao thanh tam giac !");
//
//
//    printf ("\n");
//    return 0;
//}





//Viết chương trình nhập vào 3 số thực. Hãy in 3 số ấy ra màn hình theo thứ tự tang dần mà chỉ dùng tối đa 1 biến phụ.
//#include <stdio.h>
//#include <math.h>
//int main(void){
//    int a[3];
//    printf (" Nhap 3 so :  ");
//    for (int i = 1; i <= 3; i++){
//        scanf ("%d", &a[i]);
//    }
//    for (int i = 1; i <= 3; i++){
//        for (int j = i + 1; j <= 3; j++){
//            int temp;
//            if ( a[i] > a[j]) {
//                temp = a[i];
//                a[i] = a[j];
//                a[j] = temp;
//            }
//        }
//       
//    }
//    printf ("thu tu tang dan la : ");
//    for (int i = 1; i <= 3; i++){
//        printf ("%d ", a[i]);
//    }
//    
//    printf ("\n");
//    return 0;
//}




// Viết chương trình giải phương trình bậc 2
//#include <stdio.h>
//#include <math.h>
//
//int main(void){
//    float a, b, c, delta, x1, x2;
//    do {
//        printf ("Nhap a = ");
//        scanf ("%f", &a);
//    }while(a == 0);
//    printf ("Nhap b = ");
//    scanf ("%f", &b);
//    printf ("Nhap c = ");
//    scanf ("%f", &c);
//    delta = b*b - 4*a*c;
//    if (delta < 0)
//        printf ("PT Vo Nghiem");
//    else if (delta == 0)
//        printf (" PT co mot Nghiem Kep x1 = x2 = %.2f", x1 = -b/2*a);
//    else {
//        x1 = (-b - sqrt(delta))/2*a;
//        x2 = (-b + sqrt(delta))/2*a;
//        printf (" PT có 2 Ngiệm la: \n x1 = %.2f \n x2 = %.2f", x1, x2);
//    }
//    printf ("\n");
//    return 0;
//}


// Viết chương trình nhập tháng, năm. Hãy cho biết tháng đó có bao nhiêu ngày.

//#include <stdio.h>
//#include <math.h>
//
//int main(void){
//    int T, nam;
//    do {
//        printf ("Nhap Thang : ");
//        scanf ("%d", &T);
//    }while ( T < 1 || T > 12);
//    printf ("Nhap Nam : ");
//    scanf ("%d", &nam);
//    switch (T){
//        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//            printf ("Thang %d co 31 ngay !", T);
//            break;
//        case 4: case 6: case 9: case 11:
//            printf ("Thang %d co 30 ngay !", T);
//        case 2:
//            if ( nam % 4 == 0 && nam % 100 != 0){
//                
//                printf ("Thang %d co 29 ngay !", T);
//                break;
//            }
//            else{
//                printf ("Thang %d co 28 ngay !", T);
//                break;
//            }
//            
//            
//    };
//    
//    printf ("\n");
//    return 0;
//}



// Viết chương trình nhập vào 1 ngày ( ngày, tháng, năm). Tìm ngày kế ngày vừa nhập (ngày, tháng, năm).
// Viết chương trình nhập vào 1 ngày ( ngày, tháng, năm). Tìm ngày trước ngày vừa nhập (ngày,háng, năm).

#include <stdio.h>
#include <math.h>

int main(void){
    int T, nam, ngay;
    printf ("Nhap Nam : ");
    scanf ("%d", &nam);
    do {
        printf ("Nhap Thang : ");
        scanf ("%d", &T);
    }while ( T < 1 || T > 12);
   
   
    switch (T){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            do {
                printf ("Nhap Ngay : ");
                scanf ("%d", &ngay);
            }while ( ngay < 1 || ngay > 31);
            printf ("Hom nay la ngay : %d/%d/%d", ngay, T, nam);
            if (T == 12){
                if (ngay == 31){
                    ngay = 1;
                    T = 1;
                    nam = nam+1;
                    printf ("\nngay hom sau la %d/%d/%d",ngay, T, nam);
                }else {
                    ngay +=1;
                   printf ("\nngay hom sau la %d/%d/%d",ngay, T, nam);
                }
                    
            }else{
                if (ngay == 31){
                    ngay = 1;
                    T +=1;
                    printf ("\nngay hom sau la %d/%d/%d",ngay, T, nam);
                }
                else {
                    ngay +=1;
                    printf ("ngay hom sau la %d/%d/%d", ngay, T, nam);
                }
                
            }
            break;
        case 4: case 6: case 9: case 11:
            do {
                printf ("Nhap Ngay : ");
                scanf ("%d", &ngay);
            }while ( ngay < 1 || ngay > 30);
            printf ("Hom nay la ngay : %d/%d/%d", ngay, T, nam);
            if (ngay == 30){
                ngay = 1;
                T +=1;
                printf ("\nngay hom sau la %d/%d/%d", ngay, T, nam);
            }else{
                ngay +=1;
                printf ("\nngay hom sau la %d/%d/%d", ngay, T, nam);
            }
            break;
        case 2:
            if ( nam % 4 == 0 && nam % 100 != 0){
                do {
                    printf ("Nhap Ngay : ");
                    scanf ("%d", &ngay);
                }while ( ngay < 1 || ngay > 29);
                printf ("Hom nay la ngay : %d/%d/%d", ngay, T, nam);
                if (ngay == 29){
                    ngay = 1;
                    T +=1;
                    printf ("\nngay hom sau la %d/%d/%d", ngay, T, nam);
                }else{
                    ngay +=1;
                    printf ("\nngay hom sau la %d/%d/%d", ngay, T, nam);
                }
                break;
            }
            else{
                do {
                    printf ("Nhap Ngay : ");
                    scanf ("%d", &ngay);
                }while ( ngay < 1 || ngay > 28);
                printf ("Hom nay la ngay : %d/%d/%d", ngay, T, nam);
                if (ngay == 28){
                    ngay = 1;
                    T +=1;
                    printf ("\nngay hom sau la %d/%d/%d", ngay, T, nam);
                }else{
                    ngay +=1;
                    printf ("\nngay hom sau la %d/%d/%d", ngay, T, nam);
                }
                break;
            }
            
            
    };
    
    printf ("\n");
    return 0;
}
