#include "quanly.h"

void xuatN(SV a[], int n){
    int i;
    printf("\n____________________________________\n");
    for(i = 0;i < n;++i){
        printf("\n\nThong tin SV thu %d:", i+1);
        xuat(a[i]);
    }
    printf("\n____________________________________\n");
}
