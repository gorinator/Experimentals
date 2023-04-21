#include <stdio.h>
#include <iostream>
#include <string.h>

struct card {
    int mast;
    int value;
};

enum masti {  // ♥ - 3, ♦ - 4, ♣ - 5, ♠ - 6
    chervi = 3,
    bubi = 4,
    kresti = 5,
    piki = 6
};

enum karty {  // V - 11, D - 12, K - 13, T - 14
    valet = 11,
    dama = 12,
    karol = 13,
    tuz = 14
};


void cardprint(card* set, int n);

int main() {
    card set[6];
    set[0] = { chervi,6 };
    set[1] = { bubi, valet};
    set[2] = { piki,10 };
    set[3] = { kresti,tuz };
    set[4] = { chervi,8 };
    set[5] = { bubi,dama };
    cardprint(&set[0], 6);
    return 0;
}

void cardprint(card* set, int n) {
     for (int i = 0; i < n; i++) {
         printf("/////\t");
     }
     printf("\n");
     for (int i = 0; i < n; i++) {
         printf("/ %c /\t", (char)set[i].mast);
     }
     printf("\n");
     for (int i = 0; i < n; i++) {
         switch (set[i].value) {
         case 10:
             printf("/ %i/\t", set[i].value);
             break;
         case 11:
             printf("/ %c /\t", 'V');
             break;
         case 12:
             printf("/ %c /\t", 'D');
             break;
         case 13:
             printf("/ %c /\t", 'K');
             break;
         case 14:
             printf("/ %c /\t", 'T');
             break;
         default:
             printf("/ %i /\t", set[i].value);
             break;
         }
     }
     printf("\n");
     for (int i = 0; i < n; i++) {
         printf("/ %c /\t", (char)set[i].mast);
     }
     printf("\n");
     for (int i = 0; i < n; i++) {
         printf("/////\t");
     }
     printf("\n");
     for (int i = 0; i < n; i++) {
         printf("  %i  \t", i+1);
     }
     printf("\n");
}
