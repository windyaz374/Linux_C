#include "quanly.h"
SV a[MAX];
int dem;

void timhoten(char *hoten){
	int i;
	int j = 0;
	for (i = 0; i < dem; i++){
		if (strcmp(a[i].ten, hoten) == 0){
			printf("\nThong tin sinh vien: ");
			j = 1;
			xuat(a[i]);
			
		}		
	}
	if (j == 0)
		printf("\nKhong tim thay thong tin sv"); 	
}