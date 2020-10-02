CC = gcc
CFLAGS = -c -Wall

all: quanlysv

quanlysv: main.o nhapN.o nhap.o xuatN.o xuat.o clean_stdin.o addsv.o timmssv.o timsv.o timhb.o sxdtk.o tachten.o sxten.o xuatFile.o
	$(CC) -o quanlysv main.o nhapN.o nhap.o xuatN.o xuat.o clean_stdin.o addsv.o timmssv.o timsv.o timhb.o sxdtk.o tachten.o sxten.o xuatFile.o

main.o: main.c quanly.h
	$(CC) $(CFLAGS) main.c

nhapN.o: nhapN.c quanly.h
	$(CC) $(CFLAGS) nhapN.c 

nhap.o: nhap.c quanly.h
	$(CC) $(CFLAGS) nhap.c

xuatN.o: xuatN.c quanly.h
	$(CC) $(CFLAGS) xuatN.c
	
xuat.o: xuat.c quanly.h
	$(CC) $(CFLAGS) xuat.c
	
clean_stdin.o: clean_stdin.c quanly.h
	$(CC) $(CFLAGS) clean_stdin.c

addsv.o: addsv.c quanly.h
	$(CC) $(CFLAGS) addsv.c

timmssv.o: timmssv.c quanly.h
	$(CC) $(CFLAGS) timmssv.c

timsv.o: timsv.c quanly.h
	$(CC) $(CFLAGS) timsv.c

timhb.o: timhb.c quanly.h
	$(CC) $(CFLAGS) timhb.c

sxdtk.o: sxdtk.c quanly.h
	$(CC) $(CFLAGS) sxdtk.c

tachten.o: tachten.c quanly.h
	$(CC) $(CFLAGS) tachten.c

sxten.o: sxten.c quanly.h
	$(CC) $(CFLAGS) sxten.c
	
xuatFile.o: xuatFile.c quanly.h
	$(CC) $(CFLAGS) xuatFile.c
	
clean:
	rm -rf *o madituan