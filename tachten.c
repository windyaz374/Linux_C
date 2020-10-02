#include "quanly.h"
SV a[MAX];
int dem;

void tachten(){
	int i, j;
	for (j = 0; j < dem; j ++){
		for(i = strlen(a[j].ten)-1; i>=0; i--){
			if((a[j].ten)[i] ==' '){
				strcpy(a[j].tten, a[j].ten + 1 + i);
				break;
			}
		}
	}	
}