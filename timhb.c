#include "quanly.h"
SV a[MAX];
int dem;

void timhb(int hb){
	int i;
	int j = 0;
	for (i = 0; i < dem; i++){
		if (a[i].hocbong == hb){
			printf("\nThong tin sinh vien: ");
			j = 1;
			xuat(a[i]);
		}		
	}
	if (j == 0)
		printf("\nKhong tim thay thong tin sv"); 	
}