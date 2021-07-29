#include<stdio.h>
#include<conio.h>
#include<iostream>
main(){
	
	int nama;
	printf(" ===========================\n");
	printf(" Menentukan Kelulusan Siswa \n");
	printf(" ===========================\n\n");
	printf("       ---------\n");
	printf("       NO. NAMA\n");
	printf("       ---------\n");
	printf("       1.  NOAH\n");
	printf("       2.  LETTO\n");
	printf("       3.  DEWA\n");
	printf("       4.  RATU\n");
	printf("       5.  NAIF\n\n");
	printf(" Masukan Nomor Siswa : ");
	scanf("%i",& nama);
	
	if(nama == 1){
			printf("\n Nama : NOAH\n");
			printf(" NILAI UJIAN : 8.4\n");
			printf(" LULUS");
	}
	else if(nama == 2){
			printf("\n Nama : LETTO\n");
			printf(" NILAI UJIAN : 7.6\n");
			printf(" LULUS");
	}
	else if(nama == 3){
			printf("\n Nama : DEWA\n");
			printf(" NILAI UJIAN : 5.4\n");
			printf(" Tidak LULUS");
	}
	else if(nama == 4){
			printf("\n Nama : RATU\n");
			printf(" NILAI UJIAN : 4.6\n");
			printf(" Tidak LULUS");
	}
	else if(nama == 5){
			printf("\n Nama : NAIF\n");
			printf(" NILAI UJIAN : 7.6\n");
			printf(" LULUS");
	}
	else {
			printf(" NOMOR YANG DIMASUKAN SALAH");
	}


	return 0;
	
}
