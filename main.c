#include "quanly.h"
	SV a[MAX];
	int dem;
int main(){
    int key, cont = 0;
    // char fileName[] = "/mnt/hgfs/Intern_C/source3/source3/DSSV.txt";
    char fileName[] = "DSSV.txt";
    int n;
    bool daNhap = false;
    do{
        printf("\nNhap so luong SV: "); scanf("%d", &n);
    }while(n <= 0);

    while(true){
        //system("cls");
        printf("**************************************************\n");
        printf("**    CHUONG TRINH QUAN LY SINH VIEN            **\n");
        printf("**      1. Nhap moi ds sinh vien                **\n");
        printf("**      2. Them 1 sinh vien       		        **\n");
        printf("**      3. Tim kiem theo MSSV			        **\n");
        printf("**      4. Tim kiem theo ho ten                 **\n");
        printf("**      5. Tim kiem theo muc hoc bong           **\n");
		printf("**      6. Sap xep sinh vien theo ten           **\n");
		printf("**      7. Sap xep sinh vien theo diem          **\n");
		printf("**      8. Luu thong tin sinh vien              **\n");
		printf("**      9. In ra man hinh thong tin sinh vien	**\n");
        printf("**      0. Thoat                                **\n");
        printf("**************************************************\n");
        printf("**       Nhap lua chon cua ban                  **\n");
        scanf("%d",&key);
        switch(key){
            case 1:
                printf("\nBan da chon nhap moi ds sinh vien!");
                nhapN(a, n);
                printf("\nBan da nhap thanh cong!");
                daNhap = true;
                break;

            case 2:
                if(daNhap){
                    printf("\nBan da chon them sinh vien!");
                    addsv();
                }else{
                    printf("\nNhap DS SV truoc!!!!");
                }
                break;

            case 3:
                if(daNhap){
					int masv;
                    printf("\nBan da chon tim kiem theo MSSV!");
                    printf("\nNhap MSSV: ");
                    scanf("%d", &masv);
					timmssv(masv);
                }else{
                    printf("\nNhap DS SV truoc!!!!");
                }
                break;

            case 4:
                {char hoten[30];
                if(daNhap){
                    
                    printf("\nBan da chon tim kiem theo ho ten!");
                    printf("\nNhap ho va ten can tim: ");
					clean_stdin();
                    gets(hoten);
                    timhoten(hoten);
                }else{
                    printf("\nNhap DS SV truoc!!!!");
                }
                break;}

            case 5:
                if(daNhap){
                    int hb;
                    printf("\nBan da chon tim kiem theo muc hoc bong!");
                    printf("\nNhap muc hoc bong: ");
                    scanf("%d", &hb);
                    timhb(hb);
                }else{
                    printf("\nNhap DS SV truoc!!!!");
                }
                break;

			case 6:
				if(daNhap){
                    printf("\nBan da chon sap xep sinh vien theo ten!");
                    tachten();
                    sxten();
                    xuatN(a, dem);
                }else{
                    printf("\nNhap DS SV truoc!!!!");
                }
                break;

			case 7:
				if(daNhap){
                    printf("\nBan da chon sap xep sinh vien theo diem!");
                    sxdtk();
                    xuatN(a, dem);
                    
                }else{
                    printf("\nNhap DS SV truoc!!!!");
                }
                break;

			case 8:
				if(daNhap){
                    printf("\nBan da chon luu thong tin sinh vien!");
                    xuatFile(fileName);
                }else{
                    printf("\nNhap DS SV truoc!!!!");
                }
                printf("\nXuat DSSV thanh cong vao file %s!", fileName);
                printf("\nBam phim bat ky de tiep tuc!");
				break;

			case 9:
				if(daNhap){
                    printf("\nBan da chon in ra man hinh thong tin SV!");
                    xuatN(a, dem);
                }else{
                    printf("\nNhap DS SV truoc!!!!");
                }
                break;

            case 0:
                printf("\nBan da chon thoat chuong trinh!\n");
                // getch();
                return 0;
            default:
                printf("\nKhong co chuc nang nay!");
                //printf("\nBam phim bat ky de tiep tuc!");
                // getch();
                break;
        }
    }
}