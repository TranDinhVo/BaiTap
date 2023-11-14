// bai 1

#include <stdio.h>
#include <math.h>

int main (void){
    int Xa1, Ya1, Xa2, Ya2;
    int Xb1, Yb1, Xb2, Yb2;


    scanf ("%d%d%d%d", &Xa1, &Ya1, &Xa2, &Ya2);
    scanf ("%d%d%d%d", &Xb1, &Yb1, &Xb2, &Yb2);

    int S1, S2, St, kq, S12, Sn, Sl;
    S1 = sqrt ( pow((Ya2-Ya1),2)*pow((Xa2 -Xa1),2) );
    S2 = sqrt ( pow((Yb2-Yb1),2)*pow((Xb2 -Xb1),2) );
    St = sqrt ( pow((Ya2-Yb1),2)*pow((Xa2 -Xb1),2) );
    kq = S1+S2-2*St;
    if ( (Xa1 <= Xb2 && Xa2 >= Xb1) || (Xb1 <= Xa2 && Xb2 >= Xa1)){
        if (( Ya1 <= Yb2 && Ya2 >= Yb1 ) || (Yb1 <= Ya2 && Yb2 >= Ya1)){
            printf ("%d", kq);
        }
    }
    else printf ("2 hinh khong co phan trung !");

    
        
        
    

    printf ("\n\n\n");
    return 0;
}
