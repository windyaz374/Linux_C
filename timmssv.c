#include "quanly.h"
SV a[MAX];
int dem;

void timmssv(int masv){
	int i;
	for (i = 0; i < dem; i++){
		if (a[i].mssv == masv){
			printf("\nThong tin sinh vien: ");
			xuat(a[i]);
			break;
		}
		else
			printf("\nKhong tim thay sinh vien");			
	} 	
	
}