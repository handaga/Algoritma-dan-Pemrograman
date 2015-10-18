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

Contoh: 

    #include <stdio.h>
    int main ()
    {
       /* definisi variabel lokal */
       int a = 10;
       
       /* eksekusi perulangan */
       while( a < 20 )
       {
          printf("Nilai variabel a: %d\n", a);
          a++;
       }
     
       return 0;
    }

Output:

    	Nilai variabel a: 10
    	Nilai variabel a: 11
    	Nilai variabel a: 12
    	Nilai variabel a: 13
    	Nilai variabel a: 14
    	Nilai variabel a: 15
    	Nilai variabel a: 16
    	Nilai variabel a: 17
    	Nilai variabel a: 18
        Nilai variabel a: 19


## for loop

syntax:

    for ( init; condition; increment )
    {
       statement(s);
    }

` init `:  akan dieksekusi pertama dan hanya sekali.
` condition `: setelah eksekusi ekpsresi dalam 'init', selanjutnya dilakukan pemeriksaan (evaluasi) kondisi. Jika kondisi ` FALSE ` maka loop berakhir tanpa mengeksekusi statemen dalam loop. Sebaliknya jika kondisi menghasilkan nilai TRUE, maka statemen dalam loop akan dieksekusi, dan dilanjutkan dengan mengeksekusi bagian ` increment `.

Berikut adalah gambar diagram alir perulangan dengan for loop

![for loop](https://cdn.rawgit.com/handaga/Algoritma-dan-Pemrograman/master/images/ch-07-03.svg)
> Gambar-7.3 Perulangan dengan for loop

Contoh: 

	#include <stdio.h>
	int main ()
	{
	   int a;
	   /* eksekusi perulangan for loop */
	   for( a = 10; a < 20; a = a + 1 )
	   {
	      printf("value of a: %d\n", a);
	   }
	 
	   return 0;
	}

Output:

    value of a: 10
    value of a: 11
    value of a: 12
    value of a: 13
    value of a: 14
    value of a: 15
    value of a: 16
    value of a: 17
    value of a: 18
    value of a: 19

## do .. while loop

syntax:

    do
    {
       statement(s);
    } while( condition );

` do..while ` loop serupa dengan ` while..loop `, perbedaan terletak pada cara mengeksekusi statetmen. Dalam do..while loop, statemen pasti dieksekusi minimal sekali.

Diagram alir perulangan dengan do..while loop 

![do while loop](https://cdn.rawgit.com/handaga/Algoritma-dan-Pemrograman/master/images/ch-07-04.svg)
> Gambar-7.4 Diagram alir perulangan dengan do while loop

Contoh: 

    #include <stdio.h>
    int main ()
    {
       /* local variable definition */
       int a = 10;
    	/* do loop execution */
       do
       {
           printf("value of a: %d\n", a);
           a = a + 1;
       } while( a < 20 );
     
       return 0;
    }

Output:

    value of a: 10
    value of a: 11
    value of a: 12
    value of a: 13
    value of a: 14
    value of a: 15
    value of a: 16
    value of a: 17
    value of a: 18
    value of a: 19

## Nested Loop (loop di dalam loop)

Syntax:

    for ( init; condition; increment )
    {
       for ( init; condition; increment )
       {
          statement(s);
       }
       statement(s);
    }
	
atau 

    while(condition)
    {
       while(condition)
       {
          statement(s);
       }
       statement(s);
    }

atau 

    do
    {
       statement(s);
       do
       {
          statement(s);
       }while( condition );
    }while( condition );

Contoh:

    #include <stdio.h>
    int main ()
    {
       /* local variable definition */
       int i, j;
       
       for(i=2; i<100; i++) {
          for(j=2; j <= (i/j); j++)
            if(!(i%j)) break; // if factor found, not prime
          if(j > (i/j)) printf("%d is prime\n", i);
       }
     
       return 0;
    }

Output:

    2 is prime
    3 is prime
    5 is prime
    7 is prime
    11 is prime
    13 is prime
    17 is prime
    19 is prime
    23 is prime
    29 is prime
    31 is prime
    37 is prime
    41 is prime
    43 is prime
    47 is prime
    53 is prime
    59 is prime
    61 is prime
    67 is prime
    71 is prime
    73 is prime
    79 is prime
    83 is prime
    89 is prime
    97 is prime

## ` Break ` perintah untuk keluar dari proses loop

Syntak:

    break;
    
Diagram alir:

![break statement](https://cdn.rawgit.com/handaga/Algoritma-dan-Pemrograman/master/images/ch-07-05.svg)
> Gambar-7.5 Perintah break

Contoh:

    #include <stdio.h>
    int main ()
    {
       /* local variable definition */
       int a = 10;
    	/* while loop execution */
       while( a < 20 )
       {
          printf("value of a: %d\n", a);
          a++;
          if( a > 15)
          {
             /* terminate the loop using break statement */
              break;
          }
       }
     
       return 0;
    }

Output:

    value of a: 10
    value of a: 11
    value of a: 12
    value of a: 13
    value of a: 14
    value of a: 15

# ` Continue `

Perintah continue mirip seperti break, perbedaannya pada perintah continue tidak keluar dari loop tetapi melompati semua statemen di bawahnya dan memproses kondisi pengeluangan.

Syntax: 

    continue;
    
Diagram alir:

![Continue](https://cdn.rawgit.com/handaga/Algoritma-dan-Pemrograman/master/images/ch-07-06.svg)
> Gambar-7.6 Perintah continue


Contoh:

    #include <stdio.h>
    int main ()
    {
       /* local variable definition */
       int a = 10;
    	/* do loop execution */
       do
       {
          if( a == 15)
          {
             /* skip the iteration */
             a = a + 1;
             continue;
          }
          printf("value of a: %d\n", a);
          a++;
         
       }while( a < 20 );
     
       return 0;
    }

Output:

    value of a: 10
    value of a: 11
    value of a: 12
    value of a: 13
    value of a: 14
    value of a: 16
    value of a: 17
    value of a: 18
    value of a: 19


## Goto label

Diagram alir:

![Goto](https://cdn.rawgit.com/handaga/Algoritma-dan-Pemrograman/master/images/ch-07-07.svg)
> Gambar-7.5 Goto Lable

Syntax:

    goto label;
    ..
    .
    label: statement;

Contoh:

    #include <stdio.h>
    int main ()
    {
       /* local variable definition */
       int a = 10;
    	/* do loop execution */
       LOOP:do
       {
          if( a == 15)
          {
             /* skip the iteration */
             a = a + 1;
             goto LOOP;
          }
          printf("value of a: %d\n", a);
          a++;
         
       }while( a < 20 );
     
       return 0;
    }

Output:

    value of a: 10
    value of a: 11
    value of a: 12
    value of a: 13
    value of a: 14
    value of a: 16
    value of a: 17
    value of a: 18
    value of a: 19


# Standar Input/Output ( I/O )

## input keyboard berupa CHAR (satu huruf) 

Fungsi:

	getchar();   //input satu karakter dari keyboard
	puchar();

Contoh:

	#include <stdio.h>
	int main( )
	{
	   int c;
	   printf( "Enter a value :");
	   c = getchar( );
	   
	   printf( "\nYou entered: ");
	   putchar( c );
	   return 0;
	}

Output:

	Enter a value : this is test
	You entered: t


## Input berupa teks / string /beberapa huruf(alphanumerik) /array of char

Fungsi:

	gets();
	puts();

Contoh:

Contoh:

	#include <stdio.h>
	int main( )
	{
	   char str[100];
	   
	   printf( "Enter a value :");
	   gets( str );
	   
	   printf( "\nYou entered: ");
	   puts( str );
	   
	   return 0;
	}


Output:

	Enter a value : this is test
	You entered: this is test

## Input dengan format (angka atau teks)

Fungsi:
	
	scanf() dan 
	printf()

Contoh:

	#include <stdio.h>
	int main( )
	{
	   char str[100];
	   int i;
	   
	   printf( "Enter a value :");
	   scanf("%s %d", str, &i);
	   
	   printf( "\nYou entered: %s %d ", str, i);
	   return 0;
	}


Output:

	Enter a value : seven 7
	You entered: seven 7



# fungsi 


Sebuah fungsi adalah sebuah grup statemen/perintah yang digunakan bersama untuk melakukan suatu perkerjaan. Setiap program Bahasa C memiliki  fungsi minimal satu, yaitu  ` main() `, dan hampir semua program memiliki fungsi tambahan.

Anda dapat memisahkan program dalam bentuk fungsi, apa yang harus dilakukan dalam fungsi terserah pada pemrogram, biasanya fungsi dibuat untuk melakukan suatu pekerjaan khusus dan sering dilakukan.

Deklarasi fungsi digunakan untuk mengatakan pada kompiler, tentang ` nama fungsi `, ` return type `, dan ` parameter `. Definisi fungsi merupakan kode program yang sebenarnya.

Dalam bahasa C terdapat beberapa fungsi yang sudah siap digunakan (pustaka fungsi dasar). Sebagai contoh fungsi ` strcat() ` untuk menggabungkan dua buah string, fungsi ` memcpy() ` untuk menyalin isi memori ke lokasi memori yang lain.

Fungsi dalam istilah pemrograman kadang disebut dengan method, sub-routine atau prosedur, dan sebagainya.

## Membuat definisi sebuah fungsi

syntax:

	return_type function_name ( parameter list )
	{
	   body of the function
	}

definisi fungsi terdiri atas header dan body, berikut adalah bagian-bagian detail dari sebuah fungsi:

` return_type `:  sebuah fungsi boleh menghasilkan/mengembalikan sebuah nilai. return_type menerangkan tipe data yang akan dikembalikan oleh fungsi. Terdapat juga fungsi yang tidak mengembalikan nilai, dalam hal ini return_type berupa kata kunci void.

` function_Name `: Bagian ini adalah merupakan definisi nama fungsi. Nama fungsi bersama dengan parameternya disebut ` function signature `.

` parameters `: Sebuah parameter serupa dengan masukan untuk fungsi. Ketika fungsi dipanggil, setiap parameter perlu diberi nilai, nilai inilah yang disebut parameter atau argumen. Parameter dalam fungsi memiliki tipe data, posisi, dan jumlah. Parameter bersifat opsional (fungsi boleh tanpa parameter).

function_body: bagian ini berisi kumpulan perintah yang akan dilakukan oleh fungsi.

## Contoh:

Kode berikut ini adalah sebuah fungsi bernama max(). Fungsi ini memerlukan dua parameter yaitu ` num1 ` dan ` num2 ` dan mengembalikan nilai tertinggi diantara kedua parameter tersebut.

	/* function returning the max between two numbers */
	int max(int num1, int num2) 
	{
	   /* local variable declaration */
	   int result;
	 
	   if (num1 > num2)
	      result = num1;
	   else
	      result = num2;
	 
	   return result; 
	}

## Membuat deklarasi fungsi:

Deklarasi sebuah fungi mengatakan kepada kompiler tentang nama fungsi dan bagaimana cara memanggilnya. tubuh fungsi (function_body) dapat didefinisikan secara terpisah (dalam definisi fungsi).

Deklarasi fungsi terdiri atas dua bagian yaitu:

	return_type function_name( parameter );

dengan menggunakan contoh fungsi max() pada kode di atas, deklarasi fungsi tersebut dapat dilakukan dengan cara berikut:
	
	int max(int num1, int num2);
	
Dalam deklarasi fungsi nama-nama parameter tidak penting, yang penting adalah tipe datanya, sehingga dekalrasi dengan carfa seperti berikut juga boleh dilakukan:

	int max(int, int);

Deklarasi diperlukan jika sebuah fungsi ditulis dalam sebuah file yang berbeda dengan program pemanggilnya. Sehingga dalam kasus yang demikian deklarasi fungsi perlu dibuat pada baris-baris atas sebelum nama fungsi dipanggil.

## Memanggil fungsi:

Ketiak membuat sebuah fungsi, programer akan mendefinisikan apa yang harus dilakukan oleh fungsi. Untuk menggunakan sebuah fungsi, programer harus memanggil fungsi itu untuk melakukan pekerjaan yang telah didefinisikan dalam fungsi.

Ketika sebuah program memanggil sebuah fungsi, maka program akan melakukan eksekusi terhadap fungsi tersebut. Sebagai tanda bahwa sebuah fungsi telah selesai melakukan pekerjaannya adalah adanya perintah ` return ` atau diakhiri dengan tanda penutup blok fungsi yaitu tutup kurung kurawal ` } `.

Untuk memanggil sebuah fungsi, cukup dengan cara memanggil namanya dilengkapi dengan nilai argumen yang diperlukan, sebuah argumen dapat berupa ` literal ` atau ` variabel ` dari tipe data yang sama, hasilnya (nilai kembalian dari sebuah fungsi) dapat disimpan atau diproses lebih lanjut.

Contoh:

	#include <stdio.h>
	 
	/* function declaration */
	int max(int num1, int num2);
	 
	int main ()
	{
	   /* local variable definition */
	   int a = 100;
	   int b = 200;
	   int ret;
	 
	   /* calling a function to get max value */
	   ret = max(a, b);
	 
	   printf( "Max value is : %d\n", ret );
	 
	   return 0;
	}
	 
	/* function returning the max between two numbers */
	int max(int num1, int num2) 
	{
	   /* local variable declaration */
	   int result;
	 
	   if (num1 > num2)
	      result = num1;
	   else
	      result = num2;
	 
	   return result; 
	}

Output:

	Max value is : 200

## Argumen dalam fungsi

Jika dalam fungsi terdapat argumen, maka harus diklarasikan variabel-variabel yang akan menerima nilai-nilai masukan, variabel inilah yang disebut parameter. Parameter dideklarasikan setelah nama fungsi, dan diletakan di dalam tanda kurung.

Paremeter bersifat seperti variabel lokal di dalam sebuah fungsi, yang akan dibuat saat fungsi dipanggil dan dihapus dari memori saat fungsi dah selesai dikerjakan.

Terdapat dua cara memberikan nilai untuk setiap parameter dalam fungsi, yaitu ` call by value ` dan ` call by reference `. 

Call Type | Keterangan
--- | ---
call by value | Dengan cara ini setiap parameter akan menyalin nilai atau isi variabel yang diberikan sebagai argumen. Dengan cara ini perubahan nilai dalam parameter tidak akan berpengaruh pada argument.
call by reference | Dengan cara ini parameter akan mengambil alamat memori penyimpan data dalam argumen. Di dalam fungsi yang digunakan adalah alamat yang sama dengan alamat memori dimana variabel dalam argumen disimpan. Sehingga perubahan nilai akan mempengaruhi nilai variabel argumen.


Bahasa C secara default menggunakan cara ` call by value `  untuk mengisi nilai dalam parameter. Hal ini berarti bahwa kode dalam fungsi tidak dapat mempengaruhi nilai dalam argumen yang diberikan. Dalam contoh fungs ` max() ` di atas nilai ` num1 ` dan ` num2 ` tidak dapat dirubah di dalam fungsi.


