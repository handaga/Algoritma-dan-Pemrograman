#include <stdio.h>
#include <string.h>
#include <math.h>


void hitung_3gelang() {
	
	int G1=0, G2=0, G3=0;
	int N=0;
	char WARNA[20];
	
	for (N=1; N<=3; N++) {
		//N menunjukan gelang ke N
		printf("Masukan warna GELANG ke %d: ", N);
		scanf("%s", WARNA);
		
		// if (WARNA == "hitam") { // INI SALAH
		if ( strcmp(WARNA, "hitam") == 0 ) { //=0 berarti sama
			 switch (N) {
				case 1: G1 = 0; break;
				case 2: G2 = 0; break;
				case 3: G3 = 0; break;
			 }
		} else if ( strcmp(WARNA, "coklat") == 0 ) { 
			 switch (N) {
				case 1: G1 = 1; break;
				case 2: G2 = 1; break;
				case 3: G3 = 1; break;
			 }
		} else if ( strcmp(WARNA, "merah") == 0 ) { 
			 switch (N) {
				case 1: G1 = 2; break;
				case 2: G2 = 2; break;
				case 3: G3 = 2; break;
			 }
		} else if ( strcmp(WARNA, "orange") == 0 ) { 
			 switch (N) {
				case 1: G1 = 3; break;
				case 2: G2 = 3; break;
				case 3: G3 = 3; break;
			 }
		}
		// dibuat untuk 12 warna
	} // akhir loop N
	
	//G1 G2 G3 ?
  //(G1*10 + G2) * pow(10,G3); // 
	//(G1*10 + G2) * exp(G3);
	
	N = (G1*10 + G2) * pow(10,G3);
	
	// printf("\nG1=%d , G2=%d, G3=%d \n", G1,G2,G3 );
	printf("\nNilai resistor R = %d ohm", N );
	
}


void hitung_4gelang() {
	
	int G1=0, G2=0, G3=0, G4=0;
	int N=0;
	char WARNA[20];
	char PERSEN = '%';
	
	
	for (N=1; N<=4; N++) {
		//N menunjukan gelang ke N
		//TAMPILKAN DAFTAR WARNA DI SINI
		printf("Masukan warna GELANG ke %d: ", N);
		scanf("%s", WARNA);
		
		// if (WARNA == "hitam") { // INI SALAH
		if ( strcmp(WARNA, "hitam") == 0 ) { //=0 berarti sama
			 switch (N) {
				case 1: G1 = 0; break;
				case 2: G2 = 0; break;
				case 3: G3 = 0; break;
				case 4: G4 = 0; break;
			 }
		} else if ( strcmp(WARNA, "coklat") == 0 ) { 
			 switch (N) {
				case 1: G1 = 1; break;
				case 2: G2 = 1; break;
				case 3: G3 = 1; break;
				case 4: G4 = 0; break;  //toleransi coklat tidak ada
			 }
		} else if ( strcmp(WARNA, "merah") == 0 ) { 
			 switch (N) {
				case 1: G1 = 2; break;
				case 2: G2 = 2; break;
				case 3: G3 = 2; break;
				case 4: G4 = 0; break;  //toleransi coklat tidak ada
			 }
		} else if ( strcmp(WARNA, "orange") == 0 ) { 
			 switch (N) {
				case 1: G1 = 3; break;
				case 2: G2 = 3; break;
				case 3: G3 = 3; break;
				case 4: G4 = 0; break;  //toleransi coklat tidak ada
			 }
		}  else if ( strcmp(WARNA, "emas") == 0 ) { 
			 switch (N) {
				case 4: G4 = 5; break;  //toleransi coklat tidak ada
			 }
		}
		// dibuat untuk 12 warna
	} // akhir loop N
	
	//G1 G2 G3 ?
  //(G1*10 + G2) * pow(10,G3); // 
	//(G1*10 + G2) * exp(G3);
	
	N = (G1*10 + G2) * pow(10,G3);
	
	// printf("\nG1=%d , G2=%d, G3=%d G4=%d \n", G1,G2,G3, G4 );
	printf("\nNilai resistor R = %d ohm", N );
	printf("\nNilai Toleransi = %d %c", G4, PERSEN );
	
	
}


int main() {
	
	//input JUMLAH GELANG
	int GELANG = 0;
	
	while ( (GELANG<3) || (GELANG>6) ) {  //pengulangan dampai data GELANG BETUL
		printf("Masukan jumlah gelang : "); 
		scanf("%d", &GELANG ); //harus antara 3 s/d 6
		
		if ( (GELANG<3) || (GELANG>6) ) {
			printf("\n---------------------------");
			printf("\nNilai GELANG antara 3 s/d 6");
		  printf("\n---------------------------\n");
		}
		
		//Input WARNA GELANG
		
		if (GELANG == 3) {
			//di sini program menghitung 3 gelang
			hitung_3gelang();
		} else if (GELANG == 4) {
			//di sini program menghitung 4 gelang
			hitung_4gelang();
		} else if (GELANG == 5) {
			//di sini program menghitung 5 gelang
		} else if (GELANG == 6) {
			//di sini program menghitung 6 gelang
		}
		
		//cara kedua 
		/*
		switch (GELANG) {
			case 3 : ; //di sini program menghitung 3 gelang
							break;  
			case 4 : ; //di sini program menghitung 4 gelang
							break;
			case 5 : ; //di sini program menghitung 5 gelang
							break;
			case 6 : ; //di sini program menghitung 6 gelang
							break;
		}
		*/	
			
		
	}
	
	
	return 0;
}
