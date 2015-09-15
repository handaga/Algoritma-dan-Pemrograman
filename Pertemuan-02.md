## Pengenalan istilah Algoritma dan Pemrograman
Bab ini menerangkan mengenai pengertian tentang istilah program, bahasa pemrograman dan algoritma untuk meneyelesaikan masalah. 
* Pengertian Program dan Bahasa Pemrograman
* Penerjemahan Bahasa
* Penyelesaian masalah dengan program

***
> ### Pengertian Program dan Bahasa Pemrograman

Kumpulan instruksi yang digunakan untuk mengatur komputer agar melakukan suatu tindakan tertentu disebut program.

> **Programer** (pemrogram) adalah orang yang membuat program, dan aktifiktas membuat program disebut dengan pemrograman (**programming** atau **coding**). Sedangkan instruksi yang digunakan untuk menyusun program disebut **bahasa permrograman**.

Dalam bidang komputer terdapat berbagai jenis bahasa pemrograman, yang terdiri atas dua kelompok yaitu kelompok bahasa tingkat-tinggi (**high-level language**) dan kelompok bahasa tingkat rendah (**low-level language**).  

Bahasa Tingkat Tinggi adalah bahasa pemroraman yang berorientasi pada bahasa manusia, contoh: C, C++, Java, Pascal, Basic. python, php dan lain-lain.

Bahasa Tingkat Rendah adalah bahasa yang berorienatasi pada mesin. Contoh: Assembly

Komputer hanya dapat menjalankan instruksi dalam bentuk kombinasi bilangan biner, 0 dan 1, oleh karena itu agar instruksi manusia kepada sebuah mesin dengan menggunakan bahasa pemrograman dapat dipahami oleh sebuah komputer diperlukan sebuah penterjemah bahasa (**translator**)

> ### Penterjemah Bahasa 

Terdapat dua jenis penterjemah bahasa pemrograman yaitu:
* Kompiler (Compiler) 
* Interpreter

Kompiler bekerja dengan cara menciptakan sebuah berkas baru dari berkas kode sumber. Berkas baru ini selanjutnya dapat dijalankan dalam komputer target secara langsung tidak memerlukan bantuan kompiler lagi.  Contoh kompiler antara lain: C, C++, Pascal, C#, Fortran dan lainnya

Sedangkan interpreter bekerja dengan cara menterjemahkan setiap baris perintah atau sekelompok baris perintah yang dimasukkan oleh programer. Kode sumber tidak dapat dijalankan tanpa interpreter. Contoh Interpreter antaralain Python, php, Ruby dan lainnya.

> Proses penterjemahan dari bahasa pemrograman menjadi instruksi mesin disebut **proses kompilasi**. 

Luaran dari proses kompilasi adalah sebuah berkas yang berisi instruksi mesin (kode obyek, biasanya diberi ekstensi *.o singkatan dari Object), selanjutnya dilakukan proses linking yaitu proses penggabungan dengan obyek-obyek yang di-include dari pustaka/library dalam header dan pembuatan berkas baru dengan ekstensi *.exe agar dapat dijalankan secara langsung dalam komputer.

![Gambar 1-1. Proses Kompilasi](https://cdn.rawgit.com/handaga/Algoritma-dan-Pemrograman/master/images/ch-01-04.svg)

Gambar 1.1. Proses Kompilasi

> ## Penyelesaian Masalah dengan Program

Tiga langkah penting dalam penyelesaian masalah:

* Menganalisa masalah dan membuat algoritma
* Menuangkan algoritma ke dalam bentuk program 
* Mengeksekusi dan menguji program

### Menganalisa masalah dan membuat algoritma:

Tindakan yang diperlukan adalah mengidentifikasi data yang menjadi **MASUKAN/INPUT** dan mengidentifikasi  informasi yang akan menjadi **KELUARAN/OUTPUT**. Selanjutnya menentukan **PROSEDUR/PROSES** untuk mengolah **INPUT** menjadi **OUTPUT** seperti yang dikehendaki.  **PROSES/PROSEDURE** terdiri dari tahapan instruksi untuk menyelesaikan masalah sesuai dengan cara kerja komputer, inilah yang disebut sebagai **ALGORITMA**.

![Gambar 1-2. Diagram Analisa Permasalahan](https://cdn.rawgit.com/handaga/Algoritma-dan-Pemrograman/master/images/ch-01-00.svg)

Gambar 1.2. Diagram Analisa Permasalahan

ALGORITMA dapat disusun dengan menggunakan **FLOWCHART** (diagram alir) atau **PSEUDOCODE** (mirip kode program).

Beberapa simbol DIAGRAM ALIR standar yang sering digunakan adalah sebagai berikut:

![Gambar 1-3. Simbol Diagram Alir standar](https://cdn.rawgit.com/handaga/Algoritma-dan-Pemrograman/master/images/ch-01-01.svg)

Gambar 1.3. Simbol Diagram Alir Standar 

Keterangan:

* **Terminator** : menyatakan titik awal atau titik akhir diagram alir, contoh:
* **input/output** : juga disebut data, digunakan untuk operasi pemasukan data atau penampilan data, contoh:
* **Proses** : menyatakan sebuah proses, misalnya proses perhitungan luas sebuah persegi panjang.  
* **Proses terdifinisi** menyatakan sub-prosedur/sub-proses lain.
* **Pengambilan Keputusan** digunakan untuk melakukan pengambilan keputusan
* **Penghubung** digunakan untuk menghuungkan ke berbagai bagian dalam diagram alir.

Contoh algoritma menghitung luas lingkaran:

![Gambar 1-4. Contoh Algoritma Menghitung Luas Lingkaran](https://cdn.rawgit.com/handaga/Algoritma-dan-Pemrograman/master/images/ch-01-02.svg)

Gambar 1.4. Contoh Algoritma Menghitung Luas Lingkaran


### Menuangkan algoritma ke dalam bentuk program

Untuk menuangkan sebuah algoritma ke dalam bentuk program diperlukan pengetahuan tentang bahasa pemrograman.  Dalam matakuliah ini akan dipelajari bahasa pemrograman C.   

sebagai contoh untuk menuangkan algoritma menghitung luas lingkaran ke dalam bahasa C adalah sebagai berikut:

`#include <stdio.h>`

`int main() {`

    doubel jari_jari;
    double luas;
    jari_jari = 20;
    luas = 3.14 * jari_jari * jari_jari;
    printf("Luas lingkaran = %1f", luas);	
    return 0;
`}`


