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

## Kompilasi program bahasa C dengan menggunakan COMMAND-LINE

* periksa lokasi folder dari program kompiler 
* pastikan lokasi tersebut sudah termasuk dalam daftar PATH dalam sistem komputer.  check dengan perintah  `C:\> path`,  dijalankan dari window `COMMAND-PROMPT`.

### Contoh:

setelah proses instalasi bloodshed selesai, maka program kompiler akan disimpan pada folder  `'C:\Dev-Cpp\MinGW32\bin'` .. 

![Lokasi folder kompiler dalam paket Bloodshed Dev-Cpp](https://cdn.rawgit.com/handaga/Algoritma-dan-Pemrograman/master/images/ch-04-01.jpeg)

> Gambar 4.1. Lokasi Folder Program KOmpiler

Selanjutnya untuk memastikan lokasi folder tersebut masuk dalam daftar `PATH`, lakukan dengan cara sebagai berikut:
* Buka window ` COMMAND-PROMPT `
* Jalankan perintah berikut: ` C:\> path = %PATH%;C:\Dev-Cpp\MinGW32\bin [ENTER] `
* Periksa dengan memanggil program path lagi,  ` C:\>path [ENTER] `,  pastikan ada nama lokasi folder kompiler dalam daftar yang ditampilkan

![periksa PATH](https://github.com/handaga/Algoritma-dan-Pemrograman/blob/master/images/ch-04-02.jpeg)

> Gambar 4.2. Memeriksa PATH pada sistem

## Kompilasi dengan MingW32

Kompilasi dengan menggunakan kompiler MingW32 dapat dilakukan dengan cara sebagai berikut:

` C:\>mingw32-gcc  test.c -o test.exe `

## Kompiler Visual Studio Express

Setelah proses instalasi visual studio, jika digunakan mesin 32bit, default lokasi program adalah pada 
folder  ` C:\Program Files (x86)\Microsoft Visual Studio 10.0\VC ` dan biasanya installer akan menambahkan lokasi folder tersebut dalam daftar PATH sistem.

cara lain untuk menambahkan lokasi folder program kompiler kedalam PATH dapat digunakan cara sebagai berikut:

![lokasi folder vs](https://github.com/handaga/Algoritma-dan-Pemrograman/blob/master/images/ch-04-03.jpeg)

> Gambar 4.3. Lokasi folder program kompiler Visual Studio 32 bit

Untuk melakukan kompilasi dengan menggunakan visual studio melalu perintah COMMAND-LINE dapat dilakukan dengan cara sebagai berikut:

* Pengaturan (pemilihan) platform 32 bit dengan perintah ` C:\> vcvarsall x86 `
* Kompilasi program bahasa C, ` C:\> cl test.c ` jika proses kompilasi berhasil akan dihasilkan dua buah file ` *.obj ` dan ` *.exe `
* Untuk menjalakan program hasil kompilasi ketik nama file ` C:\> test.exe `