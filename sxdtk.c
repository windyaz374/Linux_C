#include "quanly.h"
SV a[MAX];
int dem;

void sxdtk(){
	int i, j;
    SV tmp;
    for(i = 0;i < dem;++i){
        for(j = i+1; j < dem;++j){
            if(a[i].dtb > a[j].dtb){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}