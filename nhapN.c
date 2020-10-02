#include "quanly.h"
int dem = 0;   // Bien luu so phan tu trong mang a

void nhapN(SV a[], int n){
    printf("\n____________________________________\n");
    int i, j;
    for(i = 0; i< n; ++i){
        printf("\nNhap SV thu %d:", i+1);
        nhap(&a[i]);
		for (j = 0; j <i; j++){
			if (a[i].mssv == a[j].mssv){
				printf("MSSV khong dung. Moi nhap lai !!!");
				i--;
				dem --;
				break;
			}		
		}
		dem ++;
    }
    printf("\n____________________________________\n");
}