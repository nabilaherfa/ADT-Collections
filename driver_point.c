/* File: driver_point.c */
/* Tanggal: 03 September 2020 */
/* Driver ABSTRACT DATA TYPE POINT */

#include <stdio.h>
#include "point.h"

int main(){
    POINT P1, P2;
    P1 = MakePOINT(3, 4);
    printf("Point yang diberikan: ");
    TulisPOINT(P1);
    printf("\n");
    printf("Point masukan anda : ");
    BacaPOINT(&P2);

    if(EQ(P1, P2)){
        printf("Point pertama dan kedua sama\n");
    }
    if(NEQ(P1, P2)){
        printf("Point pertama dan kedua berbeda\n");
    }
    printf("Point masukan anda berada pada kuadran %d\n", Kuadran(P2));

    printf("Jika digeser satu ke kanan, maka koordinatnya: ");
    TulisPOINT(NextX(P2));printf("\n");
    printf("Jika digeser satu ke atas, maka koordinatnya: ");
    TulisPOINT(NextY(P2));printf("\n");
    printf("Jika digeser satu ke kiri dan bawah, maka koordinatnya: ");
    TulisPOINT(PlusDelta(P2, -1, -1));printf("\n");
    printf("Jika dicerminkan sumbu X, maka koordinatnya: ");
    TulisPOINT(MirrorOf(P2, true));printf("\n");
    printf("Jika dicerminkan sumbu Y, maka koordinatnya: ");
    TulisPOINT(MirrorOf(P2, false));printf("\n");

    printf("Point masukan anda akan ditranslasi sebesar P1\n");
    Geser(&P2, 3, 4);
    printf("Point masukan anda dicerminkan terhadap sumbu X, kemudian terhadap sumbu Y, lalu diputar 90 derajat searah jarum jam dan kembali lagi\n");
    Mirror(&P2, true);
    Mirror(&P2, false);
    Putar(&P2, 90);

    printf("Jarak Point pertama dengan origin ialah %f, sedangkan dengan Point kedua ialah %f", Jarak0(P1), Panjang(P1, P2));

    if(IsOnSbX(P2)){
        printf("Point masukan anda sudah di sumbu x\n");
    }else{
        printf("Point masukan anda akan digeser ke sumbu x\n");
        GeserKeSbX(&P2);
    }
    if(IsOnSbY(P2)){
        printf("Point masukan anda sudah di sumbu y\n");
    }else{
        printf("Point masukan anda akan digeser ke sumbu y\n");
        GeserKeSbY(&P2);
    }
    if(IsOrigin(P2)){
        printf("Point masukan anda berada di origin");
    }

}