#include <stdio.h>
#include <time.h>

int main() {

	time_t NOW, START, END;
	time_t rawtime;
	
  struct tm *info;// stuktur data waktu detik,menit
  char buffer[80];//jumlah karakter yg akan ditampilkan

	
	START = time(NULL);
	while (1) {  //forever loop
			END = time(NULL);
			if (END - START > 0 ) {
				//sudah berbeda SATU DETIK
				//tampilkan TGL & JAM
				// printf("Detik ke %ld \n", END );
				START = time(NULL);
				
				time( &rawtime );
				info = localtime( &rawtime );
				strftime(buffer,80,"%A, %d %B %Y, %H:%M:%S", info);
				printf("TANGGAL & JAM:| %s |\n", buffer );
				//printf("Tanggal sekarang: %s", asctime(info));

			}
	}
	/*
  for ( ; ; ) {  //forever loop
		
	}
  */
	return 0;
}
