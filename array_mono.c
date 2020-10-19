/*
NIM				: 13519181
Nama			: Nabilah Erfariani
Tanggal			: 10 September 2020
Topik praktikum	: Array Eksplisit – Statik
Deskripsi		: program yang digunakan untuk membaca sebuah TabInt, misalnya T, 
                  dengan ukuran efektif N (N dibaca dari keyboard), lalu membaca elemen-elemen T dari keyboard
*/

#include "arraypos.h"
#include "boolean.h"
#include <stdio.h>

int main(){
    TabInt T;
    TabInt T2;
    TabInt T3;
    boolean menaik = true;
    boolean menurun = false;
    BacaIsi(&T);
    T2 = T;
    T3 = T;
    int n = NbElmt(T);
    int i;
    boolean check = true;
    for (i=0; i<n; i++) {
        if (Elmt(T,i) != Elmt(T,i+1)){
            check = false;
            break;
        }
    }
    if (check == true)printf("Array monotonik statik\n");
    else{
        Sort(&T2, menaik);
        Sort(&T3, menurun);
        if (IsEQ(T,T2)) printf("Array monotonik tidak mengecil\n");
        else if(IsEQ(T,T3)) printf("Array monotonik tidak membesar\n");
        else printf("Array tidak monotonik\n");
    }
}