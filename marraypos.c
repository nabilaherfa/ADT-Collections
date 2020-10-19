/*
NIM				: 13519181
Nama			: Nabilah Erfariani
Tanggal			: 10 September 2020
Topik praktikum	: Array Eksplisit – Statik
Deskripsi		: Program yang digunakan untuk membaca sebuah TabInt, 
                  misalnya T, dengan ukuran efektif N (N dibaca dari keyboard), 
                  lalu membaca elemen-elemen T dari keyboard
*/

#include "boolean.h"
#include <stdio.h>
//#include "arraypos.c"
#include "arraypos.h"

int main(){
    TabInt T, temp;
    ElType median;
    MakeEmpty(&T);
    BacaIsi(&T);
    //TulisIsiTab(T);
    temp = T;
    Sort (&T,1);
    //TulisIsiTab(T);
    
    if(NbElmt(T)%2 == 1){
        median = T.TI[(NbElmt(T))/2];
    }else{
        median = T.TI[(NbElmt(T))/2 -1 ] ;
    }
    
    ElType X,tempMin,tempMax;
    scanf("%d",&X);
    TulisIsiTab(temp);
    
    if (SearchB (T,X)){
        MaxMin (T,&tempMax,&tempMin);
        printf("%d\n",Search1 (temp, X));
        if (tempMax == X){
            printf("maksimum\n");
        }
        if (tempMin == X){
            printf("minimum\n");
        }
        if (median == X){
            printf("median\n");
        }
    }else{
        printf("%d tidak ada\n",X);
    }
    
    return 0;
}