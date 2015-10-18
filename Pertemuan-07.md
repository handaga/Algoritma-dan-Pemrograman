# Perintah Pengulangan (Loop statement)

Dalam sebuah program sering diperlukan untuk menjalankan perintah secara berulang, untuk jumlah pengulangan yang sudah diketahui dapat menggunkan jenis ` for..loop `, untuk pengulangan yang belum jelas jumlah perulangannya dapat digunakan ` while..loop ` atau ` do ..while loop `.

Gaambar 7.1 adalah sebuah diagram alir untuk menunjukkan proses perulangan, perintah akan dieksekusi secara berulang selama kondisi terpenuhi atau ekspresi menghasilkan nilai ` TRUE `.

![Diagram alir perulangan](https://cdn.rawgit.com/handaga/Algoritma-dan-Pemrograman/master/images/ch-07-01a.svg)
> Gambar-7.1 Diagram alir perulangan

Terdapat beberapa jenis perintah perulangan dalam bahasa C, antara lain sebagai berikut:

* ` while loop `
* ` for loop `
* ` do while loop `
* ` nested loop `

Selain itu juga terdapat beberapa statemen (perintah) yang dapat digunakan untuk mengontrol proses perulangan yaitu: 

* ` break ` : keluar dari proses perulangan
* ` continue ` : Melanjutkan proses perulangan tanpan mengekselusi perintah di bawah ` continue `
* ` goto ` : selanjutnya akan dieksekusi perintah yang berlabel sama dengan label di belakang perintah ' goto `

Perulangan tanpa akhir (forever) terjadi jika kondisi tidak pernah terpenuhi atau ekspresi tidak pernah menghasilkan nilai ` FALSE `, contoh :

# Perintah Pengulangan (Loop statement)

Dalam sebuah program sering diperlukan untuk menjalankan perintah secara berulang, untuk jumlah pengulangan yang sudah diketahui dapat menggunkan jenis ` for..loop `, untuk pengulangan yang belum jelas jumlah perulangannya dapat digunakan ` while..loop ` atau ` do ..while loop `.

Gaambar 7.1 adalah sebuah diagram alir untuk menunjukkan proses perulangan, perintah akan dieksekusi secara berulang selama kondisi terpenuhi atau ekspresi menghasilkan nilai ` TRUE `.

![Diagram alir perulangan](https://cdn.rawgit.com/handaga/Algoritma-dan-Pemrograman/master/images/ch-07-01a.svg)
> Gambar-7.1 Diagram alir perulangan

Terdapat beberapa jenis perintah perulangan dalam bahasa C, antara lain sebagai berikut:

* ` while loop `
* ` for loop `
* ` do while loop `
* ` nested loop `

Selain itu juga terdapat beberapa statemen (perintah) yang dapat digunakan untuk mengontrol proses perulangan yaitu: 

* ` break ` : keluar dari proses perulangan
* ` continue ` : Melanjutkan proses perulangan tanpan mengekselusi perintah di bawah ` continue `
* ` goto ` : selanjutnya akan dieksekusi perintah yang berlabel sama dengan label di belakang perintah ' goto `

Perulangan tanpa akhir (forever) terjadi jika kondisi tidak pernah terpenuhi atau ekspresi tidak pernah menghasilkan nilai ` FALSE `, contoh :

    #include <stdio.h>
    int main ()
    {
    	for( ; ; )
       {
          printf("Pengulangan ini akan berlangsung selamanya.\n");
       }
    	return 0;
    }

Jika setelah keyword ` for ` tidak ada kondisi (ekspresi), ` for ( ; ; ) ` maka akan dianggap sebagai  ` TRUE `
 
## while loop

Pengulangan dengan ` while `, perintah akan dieksekusi selama kondisi terpenuhi (menghasilkan nilai true)

syntax:

    while(condition)
    {
       statement(s);
    }

statemen dapat berupa satu perintah atau satu blok ` { ... } ` pernintah 
diagram alir:

![while loop](https://cdn.rawgit.com/handaga/Algoritma-dan-Pemrograman/master/images/ch-07-02.svg)
> Gambar-7.2 DIagram alir while loop




