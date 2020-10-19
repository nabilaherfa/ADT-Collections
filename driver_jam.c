#include "jam.h"
#include <stdio.h>

int main(){
    JAM jam;
    printf("\nMasukkan Jam 1: ");
    BacaJAM(&jam);
    TulisJAM(jam);
    printf("\nJam 1 dalam detik: %li\n", JAMToDetik(jam));

    JAM jam2;
    printf("\nMasukkan Jam 2: ");
    BacaJAM(&jam2);
    TulisJAM(jam2);
    
    long waktu = 0;
    printf("\nMasukkan Jam 3: ");
    scanf("%li", &waktu);
    TulisJAM(DetikToJAM(waktu));

    if (JEQ(jam, jam2)) printf("\n\n\nJam 1 == Jam 2");
    if (JNEQ(jam, jam2)) printf("\nJam 1 != Jam 2");
    if (JLT(jam, jam2)) printf("\nJam 1 < Jam 2");
    if (JGT(jam, jam2)) printf("\nJam 1 > Jam 2");

    printf("\nSatu detik kemudian pada jam 1:\n");
    jam = NextDetik(jam);
    TulisJAM(jam);


    printf("\nEmpat detik kemudian untuk jam 2:\n");
    jam2 = NextNDetik(jam2, 4);
    TulisJAM(jam2);

    //Mengembalikan ke semula
    jam = PrevDetik(jam);
    jam2 = PrevNDetik(jam2, 5);

    printf("\nDurasi antara Jam 1 dan Jam 2 adalah : %li\n", Durasi(jam, jam2));
    return 0;
}