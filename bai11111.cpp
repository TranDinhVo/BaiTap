//  // Viết chương trình cho phép người dùng nhập tên và sau đó in tên đó ra màn hình.
//#include <stdio.h>
//#include <string.h>
//
//
//int main(void)
//{
//    char name[50];
//    printf ("Nhap Ten : ");
//    fgets ( name, sizeof(name), stdin);
//    printf ("Ten la : %s", name);
//    
//    printf ("\n");
//    return 0;
//}


// Viết chương trình tính tổng của hai số nguyên do người dùng nhập vào và in kết quả.

//#include <stdio.h>
//#include <string.h>
//
//int main(void){
//    int a, b, s;
//    printf (" Nhap a = ");
//    scanf ("%d ", &a);
//    printf (" Nhap b = ");
//    scanf ("%d ", &b);
//    s = a + b;
//    printf (" Tong cua hai so nguyen la : %d ",s);
//    
//    printf ("\n");
//    return 0;
//}


// Viết chương trình tính chu vi và diện tích hình tròn dựa trên bán kính nhập vào từ người dùng
//#include <stdio.h>
//#include <string.h>
//
//int main(void){
//    int r ;
//    float cv, S;
//    printf ("Nhap Ban Kinh Duong Tron : ");
//    scanf ("%d", &r);
//    cv = 3.14*2*r;
//    S = 3.14*r*r;
//    printf (" Chu Vi la : %.2f", cv);
//    printf ("\n Dien tich la : %.2f", S);
//    
//    printf ("\n");
//    return 0;
//}

// Nhập vào năm sinh của người dùng và tính tuổi của họ (sử dụng năm hiện tại là 2023).
//#include <stdio.h>
//#include <string.h>
//
//int main(void){
//    
//    int ns, tuoi;
//    printf (" nam sinh cua Cam Thuy la : ");
//    scanf ("%d", &ns);
//    tuoi = 2023 - ns;
//    printf (" So Tuoi Cua Cam Thuy la : %d ", tuoi);
//    
//    printf ("\n");
//    return 0;
//}

// Nhập năm số từ người dùng và tính tổng và trung bình của chúng, sau đó in ra kết quả.
//#include <stdio.h>
//#include <string.h>
//
//int main(void){
//    int a[5], s = 0;
//    float tb;
//    printf ("Nhap 5 so nguyen : ");
//    for (int i = 1; i <= 5; i++){
//        scanf ("%d", &a[i]);
//    }
//    for (int i = 1; i <= 5; i++){
//        s = s + a[i];
//    }
//    tb = s*1.0/5;
//    printf (" tong la : %d ", s);
//    printf ("\n trung binh la : %.2f ", tb);
//    printf ("\n");
//    return 0;
//}


//  Viết chương trình giải phương trình bậc nhất ax + b = 0, với a và b là các hệ số mà người dùng nhập vào và 𝑎 ≠ 0.

//#include <stdio.h>
//#include <string.h>
//
//int main(void){
//    int a, b;
//    float x;
//    
//    printf (" Nhap a = ");
//    scanf ("%d", &a);
//    printf (" Nhap b = ");
//    scanf ("%d", &b);
//    if ( a == 0)
//    {
//        if ( b == 0)
//            printf ("PT Vo So Nghiem !");
//        else
//            printf ("PT Vo Nghiem !");
//    } 
//    else {
//        x = -b*1.00/a;
//        printf ("PT co Nghiem x = %.2f ", x);
//    }
//    
//    
//    printf ("\n");
//    return 0;
//}

