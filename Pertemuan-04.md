## Struktur Program

Sebuah program bahasa C biasanya terdiri atas beberapa bagian sebagai berikut: 

* Preprocessor Commands
* Functions
* Variables 
* Statement & expression 
* Comments 

Kode program bahasa C berikut ini adalah sebuah contoh sederhana untuk menampilkan kalimat "Hello World" 

	1. #include <stdio.h>
	2. 
	3. int main()
	4. {
	5.    /* my first program in C */
	6.    printf("Hello, World! \n");
	7. 
	8.    return 0;
	9. }

### Keterangan program:

Baris pertama pada program di atas `#include <stdio.h>` adalah sebuah `preprocessor command`, yang mengatakan kepada kompiler C untuk memasukan file `stdio.h` dalam proses kompilasi.

Baris 3 terdapat kode  `int main()` adalah merupakan fungsi utama yang akan dijalankan pertama kali. Nama fungsi ini tidak boleh di ganti harus ada salah satu fungsi yang memiliki nama  `main`.

Pada baris 5, terdapat  kode  `/* …  */` dimana semua teks yang terdapat di antara tanda tersebut tidak diterjemahkan oleh kompiler atau disebut sebagai `comment` atau keterangan. 

Pada baris 6 terdapat kode `printf(…)` adalah sebuah pernyataan (statement) yang berupa pemanggilan sebuah fungsi yang tersedia dalam bahasa C yang dapat digunakan untuk menampilkan kalimat `"Hello World"` di layar.

Pada baris terakhir terdapat  `return 0`, merupakan perintah untuk menghentikan fungsi main dan mengembalikan nilai NOL (0) sebagai hasilnya.


