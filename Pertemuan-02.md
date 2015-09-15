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

![code-01] (https://cdn.rawgit.com/handaga/Algoritma-dan-Pemrograman/master/images/code-01-01.svg)

### Pseudocode: algoritma menghitung luas lingkaran

![pseudocode-01](https://cdn.rawgit.com/handaga/Algoritma-dan-Pemrograman/master/images/pcode-01-01.svg)


Contoh-2: Sebuah algoritma untuk menghitung kecepatan rata-rata, untuk menempuh sebuah lintasan.

![Gambar 1.5. COntoh algoritma menghitung kecepatan rata-rata](https://cdn.rawgit.com/handaga/Algoritma-dan-Pemrograman/master/images/ch-01-03.svg)

Gambar 1.5. COntoh algoritma menghitung kecepatan rata-rata

Kode Sumber (source code) menghitung kecepatan rata-rata

![code-2](https://cdn.rawgit.com/handaga/Algoritma-dan-Pemrograman/master/images/code-01-02.svg)

Pseudocode menghitung kecepatan rata-rata

![psudocode-02](https://cdn.rawgit.com/handaga/Algoritma-dan-Pemrograman/master/images/pcode-01-02.svg)

## Mengeksekusi dan Menguji Program
Setelah pembuatan kode program diperlukan proses kompilasi, selanjutnya aplikasi dapat dijalankan untuk diuji kebenarannya. 

Selama proses kompilasi ada beberapa kemungkinan kesalahan yang terjadi, terdapat dua jenis kesalahan yaitu:

	1. Kesalahan Sintaksis 
	2. Kesalahan Logika
	3. Kesalahan runtime

Kesalahan SINTAKSIS disebabkan adanya kesalahan dalam menulis program sehingga TIDAK SESUAI dengan KAIDAH bahasa pemrograman yang digunakan. Contoh dalam bahasa C, kurang tanda TITIK-KOMA ( ;) di bagian akhir baris perintah.  Kesalahan sintaksis terdeteksi pada saat melakukan proses kompilasi. 

Kesalahan LOGIKA adalah kesalahan yang terjadi karena ada logika yang salah. Misalnya ketika menghitung luas lingkaran, salah memasukan angka 31,4 untuk menyatakan 'pi' yang benar adalah 3,14. Akibatnya hasil perhitungan menjadi SALAH. Kesalahan seperti ini kadang sulit terdeteksi, terutama bila program aplikasi sudah sangat komplek.

Kesalahan runtime atau kadang disebut kesalahan fatal, adalah jenis kesalahan yang disebabkan oleh suatu operasi/instruksi dalam program yang tidak dapat dijalankan oleh komputer karena keterbatasan sumberdaya. Sebagai contoh, kesalahan runtime yang paling sering terjadi adalah adanya proses aritmatika pembagian angka dengan sebuiah angka NOL (devided by zero). Jika komputer dipaksa melakukan operasi pembagian dengan bilangan NOL maka akan terjadi kesalahan runtime, dan komputer akan menampilkan berita kesalahan dan proses eksekusi program dihentikan.

Kesalahan dalam program secara umum disebut dengan BUG, dan proses pencaraian kesalahan dalam program komputer oleh seorang programer juga disebut dengan proses DEBUG.  Software tool yang bagus biasanya dilengkapi dengan fasilitas untuk melakukan DEBUGING (mencari BUG dan membetulkan kodeprogram). 

Dengan menggunakan fasilitas DEBUGING programer dapat mengeksekusi kode program baris demi baris sambil melakukan evaluasi terhadap data input dan outputnya.


## TUGAS-01
Membuat ALGORITMA dengan DIAGRAM ALIR dan PSEUDOCODE untuk mencari  AKAR-AKAR dari persamaan kwadrat:
aX^2 + bx + c = 0

### Note:

1. Software GRATIS untuk mengedit gambar DIAGRAM ALIR  [DIA: http://dia-installer.de](http://dia-installer.de)
2. Software GRATIS untuk mengupload FILE SEMBARANG ke github.com  [GIT: https://git-scm.com/](https://git-scm.com)

## CARA MEMBUAT FILE BARU di GITHUB.COM 

###  ONLINE

1. Login to http://github.com
2. Membuat REPOSITORY baru (click menu 'New Repository'), masukan nama contoh: 'TUGAS-C'
3. Click/Buka reposiroty tersebut ('TUGAS-C')
4. Dibagian atas (sub-title) disamping nama respository, terdapat tanda +
5. Buat sebuah file baru dengan cara CLICK pada tanda + tersebut, berikan nama file contoh 'tugas-01.c'
6. Kemudian tuliskan jawaban tugas di bagian bawahnya
7. Jika sudah selesai, di bagian bawah kotak editor terdapat sebuah tombol warna hijau 'commit ..', click tombol tersebut untuk menyimpan file.


### OFFLINE

(note: saat menyalin dan mengupload perlu online/internet)

1. Install software [GIT](https://git-scm.com)
2. Jalankan program 'Git Bash'
3. Buat folder/direktori kerja baru, contoh: `$ mkdir wd`, `wd` adalah nama folder kerja baru
4. Masuk ke dalam folder kerja dengan perintah `$ cd wd`
5. Menyalin repository dari github.com (pastikan anda sedang online), dengan perintah seperti berikut: `$ git clone http://github.com/[NIM]/[nama repository]`  contoh: `$ git clone http://github.com/handaga/algoritma-dan-pemrograman`
6. Jika proses copy berhasil git akan membuat sebuah folder baru dengan nama yang sama dengan nama repository yang disalin, dalam contoh di atas, maka di bawah folder `wd` akan terbuat sub-folder baru dengan nama `algoritma-dan-pemrograman`. Untuk melihat folder baru tersebut dapat digunakan perintah  `$ ls`. 
7. Selanjutnya anda dapat bekerja secara OFFLINE, dengan menambahkan FILE atau FOLDER baru di bawah folder `algoritma-dan-pemrograman`. Untuk melakukan hal ini dapat digunakan `Windows Explorer`
8. Jika sudah selesai menambah file/folder kedalam repository, selanjutnya untuk mengupdate/mengupload semua hasil kerja ke GITHUB.COM anda perlu menjalankan `GIT Bash` dan memiliki koneksi internet.
9. Jalankan `Git Bash` dan buka folder kerja, contoh `$ cd wd` then `$ cd algoritma-dan-pemrograman`
10. Tambahkan SEMUA folder atau file baru dalam proyek, dengan perintah `$ git add [nama file/folder]`. Contoh: `$ git add main.c`
11. Jalankan perintah COMMIT, `$ git commit -m 'menambah file baru'`
12. upload semua yang sudah ditambahkan ke github.com, `$ git push origin master`, selanjutnya masukan USER Dan PASSWORD anda.
