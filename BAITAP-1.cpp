#include <stdio.h>
#include <math.h>
   
int GPTBH (float a, float b, float c, float *x1 , float *x2);

int main(void){
    float a, b, c, x1, x2;
    
    do {
        printf ("Nhap a = ");
        scanf ("%f", &a);
    }while ( a == 0 );
    
    printf ("Nhap b, c : ");
    scanf ("%f%f", &b, &c);
 
    switch ( GPTBH (a,b,c,&x1,&x2) ) {
        case 0:
            printf ("Phuong Trinh VO NGHIEM !");
            break;
        case 1:
            printf ("Phuong Trinh co 1 Nghiem : %.2f ", x1);
            break;
        case 2:
            printf ("Phuong Trinh co 2 Nghiem :\n x1 = %.2f \n x2 = %.2f", x1, x2);
            break;
    }
    
    printf ("\n");
    return 0;
}
int GPTBH (float a, float b, float c, float *x1, float *x2){
        float delta = b*b - 4*a*c;
        if ( delta < 0 )
            return 0;
        else if (delta == 0){
            *x1 = *x2 = -b/(2*a);
            return 1;
        }
        else {
            *x1 = (-b + sqrt(delta))/(2*a);
            *x2 = (-b - sqrt(delta))/(2*a);
            return 2;
        }
     
        
}
