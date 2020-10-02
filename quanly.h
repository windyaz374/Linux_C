#ifndef QUANLY_H_
#define QUANLY_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define MAX 100
typedef struct SinhVien{
    char 	ten[30];
    char 	tten[10];
    int  	mssv;
	char 	ngaysinh[15];
    char 	lop[10];
    float 	dtb;
	float 	drl;
	float 	dtk;
	int		hocbong;
	
}SV;

void nhapN(SV a[], int n);
void nhap(SV *sv);
void xuatN(SV a[], int n);
void xuat(SV sv);
void clean_stdin(void);
void addsv();
void timmssv(int masv);
void timhoten(char hoten[]);
void timhb(int hb);
void sxdtk();
void tachten();
void sxten();
void xuatFile(char fileName[]);
#endif