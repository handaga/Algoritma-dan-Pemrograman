#include <stdio.h>
#include <time.h>
/*

time()  : untuk mendapatkan informasi jumlah detik sejak tahun 1/11970

localtime() : untuk meubah informasi jumlah detik menjadi informasi kalender (hari tanggal, bulan, tahun JAM:MENIT:DETIK) saat ini.

strftime():  mencetak data kalender sesuai format

*/


void tampilkan_kalender() {
	
	 time_t DETIK;	 
	 struct tm *info;
   char buffer[80];
	 char HARI[10];
	 
	 time( &DETIK );  //mengambil informasi jumlah detik
   
	 //merubah format data  ( localtime( ))
	 //dari JUMLAH DETIK menjadi KALENDER
	 info = localtime( &DETIK );
	 //merubah info menjadi TEKS 
   strftime(buffer,80,"%A, %d %B %Y - %H:%M:%S", info);
   
	 printf("Sekarang adalah hari & tanggal: | %s |\n", buffer );
	 // printf("Hari ke %ld \n", info.tm_wday);
	
	strftime(HARI,10,"%A", info);
	if ( strcmp(HARI,"Tuesday") == 0 ) {
			printf("\n Sekarang hari SELASA \n");
	}
	
}



int main ()
{
  time_t AWAL=0, AKHIR=0;

	time( &AWAL );
	while (1) {
		time( &AKHIR );
		if ( AKHIR - AWAL > 0 ) {
			//tampilkan tanggal
			tampilkan_kalender();
			AWAL = AKHIR;
		}
		
		
	}	
	
   return(0);
}
