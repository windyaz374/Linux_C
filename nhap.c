#include "quanly.h"

void nhap(SV *sv){
	// clean_stdin();
    printf("\nNhap ten: "); clean_stdin(); gets(sv->ten);
    printf("\nNhap MSSV: "); scanf("%d", &(sv->mssv));
    printf("\nNhap ngay sinh:"); clean_stdin(); gets(sv->ngaysinh); 
	printf("\nNhap lop:"); gets(sv->lop); 
	printf("\nNhap diem trung binh:"); scanf("%f", &(sv->dtb));
	printf("\nNhap diem ren luyen:"); scanf("%f", &(sv->drl));

    // Tinh diem tong ket
    if ((sv->drl)>=70 && (sv->drl)<80)
		sv->dtk = sv->dtb + 0.2;
	else if ((sv->drl)>=80 && (sv->drl)<90)
		sv->dtk = sv->dtb + 0.5;
	else if ((sv->drl)>=90 && (sv->drl)<=100)
		sv->dtk = sv->dtb + 0.8;
	else 
		sv->dtk = sv->dtb;
	
	// Tinh muc hoc bong
	if ((sv->dtk) >= 7.0 && (sv->dtk) < 8.0)
		sv->hocbong = 120000;
	else if ((sv->dtk) >= 8.0 && (sv->dtk) < 9.0)
		sv->hocbong = 180000;
	else if ((sv->dtk) >= 9.0)
		sv->hocbong = 240000;
	else 
		sv->hocbong = 0;
}
