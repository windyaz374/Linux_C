#include "quanly.h"
SV a[MAX];
int dem;

void sxten(){
	int i, j;
    SV tmp;
    for(i = 0;i < dem;++i){
        for(j = i+1; j < dem;++j){
            if(strcmp(a[i].tten, a[j].tten) > 0){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}