/*
	program untuk menyelesaikan akar persamaan kwadrat
	dibuat oleh : fulan
	tanggal  	: 29-09-2015
*/
#include <stdio.h>
#include <math.h>

int main () {
	
	int a,b,c; //variabel input
	float D;   //variabel proses - diterminan
	// double D;  yg ini juga boleh
	float X1, X2;  //variable output
	
	//input :masukan nilai a, b, & c
	a = 1;
	b = 4;
	c = 3;
	
	//periksa apkah nilai a = 0? 
	if (a==0) {
			//a bernilai NOL, tampilkan peringatan
			printf("Nilai variabel a tidak boleh NOL ..! \n");
			return 0;		
	} else { 
		  //menghitung nilai diterminan
			D = (b*b) - (4*a*c);
			D = pow(b,2) - (4*a*c);
			if (D < 0 ) { 
					//diterminan bernilai 0, D=0
					//tampilkan peringatan 
					printf("Nilai diterminan tidak boleh negatif \n");
					return 0;
			} else { 
				  // D >= 0
					// menghitung akar persamaan kwadrat
					X1 = ( -b + sqrt(D) ) / (2*a);
					X2 = ( -b - sqrt(D) ) / (2*a);
					
					// Menampilkan akar hasil perhitungan
					printf("variabel input a=%d, b=%d, c=%d \n", a, b, c);
					printf("Akar 1, X1 = %5.2f \n", X1);
					// %5.2f : untuk mengatur output angka pecahan jumlah digit ada 5, dan dibelakang koma ada 2 digit
					printf("Akar 2, X2 = %5.2f \n", X2);
					return 0;					
			}	
	}
  return 0;
}
