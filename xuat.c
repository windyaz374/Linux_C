#include "quanly.h"

void xuat(SV sv){
    printf("\nHo ten SV: %s", sv.ten);
    printf("\nMSSV: %d", sv.mssv);
    printf("\nNgay sinh: %s", sv.ngaysinh);
    printf("\nLop: %s", sv.lop);
	printf("\nDiem trung binh: %.2f", sv.dtb);
    printf("\nDiem ren luyen: %.2f", sv.drl);
	printf("\nDiem tong ket: %.2f", sv.dtk);
	printf("\nMuc hoc bong: %d\n", sv.hocbong);
}