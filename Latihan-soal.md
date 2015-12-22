> Apa yang dimaksud pointer pada sebuah pointer?

Sebuah pointer yang berisi alamat dari variabel pointer yang lain.

> Apa perbedaan malloc() & calloc()?

Keduanya digunakan untuk mememsan memori tetapi, dalam calloc() memory yang diberikan akan diisi dengan NOL (0), sehingga menguntungkan untuk menyimpan data berupa numerik.
	
> Apa yang dimaksud keyword auto?

Keyword (kata-kata dalam bahasa inggris yang digunakan dalam program c yang tidak boleh digunakan untuk memberi nama sebuah variabel atau fungsi).  Keyword auto adalah kata yang digunakan untuk deklarasi sebuah variabel.
Contoh: 
	` auto  int X;  // secara teknis sama dengan int X; `

> Pada bagian mana keyword "break" muncul dalam program?

Perintah `break ` biasa digunakan dalam perintah `switch-case`, `while-loop`, & `for-loop`.
	
> Jelaskan carakerja syntax perintah  for-loop!

syntax :       
	for (ekspresi-1; ekspresi-2; ekspresi-3) {
		//perintah dalam loop
	} 
	
Pertama kali ekspresi-1 dieksekusi SEKALI SAJA, kemudian ekspresi-2 dieksekusi, biasanya ekspresi-2 berupa sebuah kondisi. Jika ekspresi-2 menghasilkan nilai FALSE, proses pengulangan berakhir, ekspresi-3 tidak dieksekusi.  Jika espresi-2 menghasilkan nilai TRUE, ekspresi-3 dieksekusi dilanjutkan dengan eksekusi semua perintah di dalam loop. Selanjutnya proses kembali ke eksekusi espresi-2 dan berulang terus sampai ekspresi-2 menghasilkan nilai FALSE.
	
> Apa perbedaan antara  include <stdio.h> dan include "myfile.h"? 

`include <stdio.h>` : compiler akan mencari file header dalam daftar PATH LIBRARY (sudah di seting dalam komputer, dan dapat dimodifikasi).
` include "myfile.h" `: compiler akan mencari file header pada lokasi folder dimana source code (*.c) berada. Jika tidak ditemukan baru mencari dalam PATH LIB. 
	
> Bagaimana komputer menyimpan angka NEGATIF?

Angka negatif disimpan sebagai angak 2's complement.
(a) dicari angka positifnya, (b) digit 0 diganti 1, dan digit 1 diganti 0, dan hasilnya ditambah dengan angka 1 (biner). 
Contoh:  angka -4 (MINUS EMPAT)
	
	0000 0100
	1111 1011
	        1
	---------- +
	1111 1100
	
> Apa yang dimaksud dengan variabel STATIC?

contoh:   
	   function   myapp() {
	         static  int X = 0;
	         X++;
	         printf("Nilai X: %d \n", X);
	   }
	
	   main () {
	       myapp(); 
	       myapp();
	   }
	
Output:
	
	   Nilai X:  1;
	   Nilai X:  2;  //jika digunakan STATIC nilainya 2 jika tanpa static nilainya 1.
	
fungsi variabel static adalah agar variabel tidak dihapus dari memori setelah program utama memanggil fungsi dimana variabel static berada.
	
> Apa yang dimaksud dengan pointer NULL?

Variabel pointer yang belum terisi atau variabel pointer yang belum menunjuk kemanapun.
	
> Apa tujuan menggunakan perintah "extern"?

` "extern" ` digunakan dalam file sumber yang memanggil fungsi/variabel dari file sumber yang lain.  Contoh: ada dua file sumber  "file-1.c" dan "file-2.c"

" file-1.c"
`
// tidak boleh ada function main di sini
function perkalian(int X, int Y) {
	return X * Y;
}
`
	
"file-2.c" 
`
//deklarasi
extern  perkalian(int X, int Y);

main() {
	int A, B, C;
	C = perkalian (A,B);
}
`

> S++   sama dengan  S = S+1,   kode yang mana yang lebih menguntungkan dan mengapa?

S++ lebih disarankan sebab, dalam komputer perintah INCREMENT dapat dieksekusi hanya dengan  1 CLOCK SAJA, sehingga S++ akan lebih cepat dieksekusi. (S=S+1  memerlukan  >5 CLOCK)
