#include "quanly.h"
SV a[MAX];
int dem; 

void addsv(){
	int add = dem;
	int i;
	printf("\n____________________________________\n"); 
	printf("\nNhap SV thu %d:", add+1);
    nhap(&a[add]);
    for (i = 0; i < dem; i++){
			if (a[i].mssv == a[add].mssv){
				printf("MSSV khong dung. Moi nhap lai !!!\n\n");
				return;
			}		
	}
	dem ++;
    printf("\n____________________________________\n");
}
