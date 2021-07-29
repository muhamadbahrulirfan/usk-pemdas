#include<stdio.h>
#include<conio.h>
#include<iostream>

void Ascending(int item[], int index1, int index2){
	int temp = item[index1];
	item[index1] = item[index2];
	item[index2] = temp;
}
main(){
	printf(" ===============================\n");
	printf(" Mengurutkan Nilai dengan Array \n");
	printf(" ===============================\n\n");
	printf(" Daftar Nilai : 84, 76, 54, 46, 76\n\n");
	printf(" Nilai dari yang terkecil : ");
	int numbers[]= {84, 76, 54, 46, 76};
	const int size = sizeof(numbers)/sizeof(numbers[0]);
	for(int n = size-1; n>0; n--)
		for(int m = 0; m<n;m++)
			if(numbers[m]>numbers[n])
				Ascending(numbers, m, m+1);
	for(int n = 0; n<size; n++)
		printf("%d ", numbers[n]);
		printf("\n");
}
