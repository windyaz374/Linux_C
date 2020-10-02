#include "quanly.h"
SV a[MAX];
int dem;

void xuatFile(char fileName[]){
    int i;
    FILE * fp;
    fp = fopen (fileName,"w");
    fprintf(fp, "%-20s%-10s%-15s%-10s%-10s%-10s%-10s%-10s\n", "Ten","MSSV", "Ngaysinh","Lop", "DTB", "DRL", "DTK", "Hocbong");
	//fprintf(fp, "\n");
    for(i = 0; i < dem; i++){
        fprintf(fp, "%-20s%-10d%-15s%-10s%-10.2f%-10.2f%-10.2f%-10d\n", a[i].ten,a[i].mssv, a[i].ngaysinh, a[i].lop, a[i].dtb, a[i].drl, a[i].dtk, a[i].hocbong);
		//fprintf(fp, "\n");
    }
    fclose (fp);
}