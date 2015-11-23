# Tipe variabel TURUNAN 

Variabel turunan adalah variabel yang disusun dari variabel-variabel tipe dasar (` char, int, float ` dan yang lainnya). Contoh beberapa tipe variabel turunan antara lain  ` String `, ` Structures `, dan ` Unions `. Pengguankan jumlah bit dalam variabel turun juga dapat di atur dengan menggunakan ` Bit Field ` berupa sebuah angka untuk menentukan jumlah bit yang akan digunakan dalam varaiabel tersebut.


## String

String adalah berupa array dari sebuah char, dalam bahasa C, variabel String diakhir dengan karakter NULL termination (` "\0" `, sebuah array char agar dapat diproses sebagai string harus di beri tanda ` "\0" ` di bagian akhir, contoh: ` char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'}; `. Jika variabel dideklarasikan sebagaio ` String ` maka secara otomatis akan diberikan tambahan karakter ` '\0` ` sebagai karakter terakhir (penutup).

Contoh: 

    #include <stdio.h>
    
    int main () {
    
       char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
       String SALAM = "Hello";
       
       printf("Greeting message: %s\n", greeting );
       printf("Ucapakan salam: %s\n", SALAM );
       return 0;
    }

### Beberapa operasi dalam String

* ` strcpy(s1, s2); ` : copy (menyalin) dari String sumber ` S2 ` ke String tujuan ` S1 `
* ` strcat(s1, s2); ` : Menggabung ` s2 ` dan ` s1 `, dengan ` s1 ` diletakkan di depan ` s2 `
* ` strlen(s1); `: menghitung jumlah huruf dalam ` s1 ` (tidak termasuk karakter NULL)
* ` strcmp(s1, s2); ` : Membandingkan dua string, hasil sama dengan NOL (0) jika SAMA, NEGATIF jika `s1` lebih pendek dari `s2` dan POSITIF jika `s1` lebih panjang dari ` s2 `.
* ` strchr(s1, ch); ` : Mencarai huruf ` ch ` dalam string ` s1 `, hasil berupa angka integer yang menunjukkan posisi huruf ` CH ` dalam string, jika ` CH ` ditemukan, dihitung dari kiri.
* ` strstr(s1, s2); `: Mencari potongan string ` s2 ` dalam string ` s1 `, hasil berupa angka integer yang menunjukkan  posisi huruf pertama string ` s2 ` dalam ` s1 `, jika ditemukan, mulai dari posisi kiri.



## Structure 

Sebuah tipe data yang dapat digunakan untuk menggabung beberapa tipe data yang lain dalam sebuah group, contoh dekalrasi sebuah variebl tipe structure :

        struct Books {
           char  title[50];
           char  author[50];
           char  subject[100];
           int   book_id;
        } book; 

dalam dekalrasikan di atas ` Books ` adalah nama structurenya dan ` book ` adalah nama alias (nama lain) dari structur, bukan NAMA VARIABEL structure. Untuk membaca isi varaiabel di dalam sebuah structure menggunakan NAMA VARAIABEL STRUCTUR kemudian tanda 'TITK' ( ` . `) dan diikuti dengan nama variabel anggota.

Berikut ini adalah contoh bagaimana menggunakan variabel structure dalam program. 

        #include <stdio.h>
        #include <string.h>
         
        struct Books {
           char  title[50];
           char  author[50];
           char  subject[100];
           int   book_id;
        };
         
        int main( ) {
        
           struct Books Book1;        /* Declare Book1 of type Book */
           struct Books Book2;        /* Declare Book2 of type Book */
         
           /* book 1 specification */
           strcpy( Book1.title, "C Programming");
           strcpy( Book1.author, "Nuha Ali"); 
           strcpy( Book1.subject, "C Programming Tutorial");
           Book1.book_id = 6495407;
        
           /* book 2 specification */
           strcpy( Book2.title, "Telecom Billing");
           strcpy( Book2.author, "Zara Ali");
           strcpy( Book2.subject, "Telecom Billing Tutorial");
           Book2.book_id = 6495700;
         
           /* print Book1 info */
           printf( "Book 1 title : %s\n", Book1.title);
           printf( "Book 1 author : %s\n", Book1.author);
           printf( "Book 1 subject : %s\n", Book1.subject);
           printf( "Book 1 book_id : %d\n", Book1.book_id);
        
           /* print Book2 info */
           printf( "Book 2 title : %s\n", Book2.title);
           printf( "Book 2 author : %s\n", Book2.author);
           printf( "Book 2 subject : %s\n", Book2.subject);
           printf( "Book 2 book_id : %d\n", Book2.book_id);
        
           return 0;
        }

Ouptut:

        Book 1 title : C Programming
        Book 1 author : Nuha Ali
        Book 1 subject : C Programming Tutorial
        Book 1 book_id : 6495407
        Book 2 title : Telecom Billing
        Book 2 author : Zara Ali
        Book 2 subject : Telecom Billing Tutorial
        Book 2 book_id : 6495700

> variabel STRUCTURE sebagai parameter sebuah FUNGSI 

        #include <stdio.h>
        #include <string.h>
         
        struct Books {
           char  title[50];
           char  author[50];
           char  subject[100];
           int   book_id;
        };
        
        /* function declaration */
        void printBook( struct Books book );
        
        int main( ) {
        
           struct Books Book1;        /* Declare Book1 of type Book */
           struct Books Book2;        /* Declare Book2 of type Book */
         
           /* book 1 specification */
           strcpy( Book1.title, "C Programming");
           strcpy( Book1.author, "Nuha Ali"); 
           strcpy( Book1.subject, "C Programming Tutorial");
           Book1.book_id = 6495407;
        
           /* book 2 specification */
           strcpy( Book2.title, "Telecom Billing");
           strcpy( Book2.author, "Zara Ali");
           strcpy( Book2.subject, "Telecom Billing Tutorial");
           Book2.book_id = 6495700;
         
           /* print Book1 info */
           printBook( Book1 );
        
           /* Print Book2 info */
           printBook( Book2 );
        
           return 0;
        }
        
        void printBook( struct Books book ) {
        
           printf( "Book title : %s\n", book.title);
           printf( "Book author : %s\n", book.author);
           printf( "Book subject : %s\n", book.subject);
           printf( "Book book_id : %d\n", book.book_id);
        }

Output:

        Book title : C Programming
        Book author : Nuha Ali
        Book subject : C Programming Tutorial
        Book book_id : 6495407
        Book title : Telecom Billing
        Book author : Zara Ali
        Book subject : Telecom Billing Tutorial
        Book book_id : 6495700

> Pointer untuk menunjuk alamat variabel structure

Untuk membaca nilaivariabel anggota digunakan simbol   ` -> ` sebagai pengganti TITIK dalam variabel structure, Contoh:


        #include <stdio.h>
        #include <string.h>
         
        struct Books {
           char  title[50];
           char  author[50];
           char  subject[100];
           int   book_id;
        };
        
        /* function declaration */
        void printBook( struct Books *book );
        int main( ) {
        
           struct Books Book1;        /* Declare Book1 of type Book */
           struct Books Book2;        /* Declare Book2 of type Book */
         
           /* book 1 specification */
           strcpy( Book1.title, "C Programming");
           strcpy( Book1.author, "Nuha Ali"); 
           strcpy( Book1.subject, "C Programming Tutorial");
           Book1.book_id = 6495407;
        
           /* book 2 specification */
           strcpy( Book2.title, "Telecom Billing");
           strcpy( Book2.author, "Zara Ali");
           strcpy( Book2.subject, "Telecom Billing Tutorial");
           Book2.book_id = 6495700;
         
           /* print Book1 info by passing address of Book1 */
           printBook( &Book1 );
        
           /* print Book2 info by passing address of Book2 */
           printBook( &Book2 );
        
           return 0;
        }
        
        void printBook( struct Books *book ) {
        
           printf( "Book title : %s\n", book->title);
           printf( "Book author : %s\n", book->author);
           printf( "Book subject : %s\n", book->subject);
           printf( "Book book_id : %d\n", book->book_id);
        }

Output:

        Book title : C Programming
        Book author : Nuha Ali
        Book subject : C Programming Tutorial
        Book book_id : 6495407
        Book title : Telecom Billing
        Book author : Zara Ali
        Book subject : Telecom Billing Tutorial
        Book book_id : 6495700

> Bit Fields
JUmlah bit yang diperlukan untuk menyimpan data dalam anggota variabel structure dapat ditentukan dengan menggunakan bit field, contoh:

        struct packed_struct {
           unsigned int f1:1;
           unsigned int f2:1;
           unsigned int f3:1;
           unsigned int f4:1;
           unsigned int type:4;
           unsigned int my_int:9;
        } pack;

Dalam deklarasi di atas anggota ` f1 .. f4 ` menggunakan SATU bit, ` type ` menggunakan EMPAT bit, dan ` my_int ` menggunakan SEMBILAN bit.


## Union 

Tipe data spesial dalam C yang dapat menyimpan beberapa tipe yang berbeda dalam lokasi memori yang sama.

Deklarasi:

        union Data {
           int i;
           float f;
           char str[20];
        } data;  

Contoh dalam program:

        #include <stdio.h>
        #include <string.h>
         
        union Data {
           int i;
           float f;
           char str[20];
        };
         
        int main( ) {
        
           union Data data;        
        
           data.i = 10;
           data.f = 220.5;
           strcpy( data.str, "C Programming");
        
           printf( "data.i : %d\n", data.i);
           printf( "data.f : %f\n", data.f);
           printf( "data.str : %s\n", data.str);
        
           return 0;
        }

Output:

    data.i : 1917853763
    data.f : 4122360580327794860452759994368.000000
    data.str : C Programming

Note:
isi data variabel  i & f dalam union sudah tidak betul sebab isinya tertimpa dengan data.str yang merupakan perintah terakhir yang melibatkan variabel union.
 
 ## Typedef 
 
Programmer juga dapat mendefinisikan tipe variabel sendiri berdasarkan tipe variabel dasar dengan perintah ' typedef `
Contoh

    typedef unsigned char BYTE;
    BYTE  b1, b2;
    
Contoh lain:

        #include <stdio.h>
        #include <string.h>
         
        typedef struct Books {
           char title[50];
           char author[50];
           char subject[100];
           int book_id;
        } Book;
         
        int main( ) {
        
           Book book;
         
           strcpy( book.title, "C Programming");
           strcpy( book.author, "Nuha Ali"); 
           strcpy( book.subject, "C Programming Tutorial");
           book.book_id = 6495407;
         
           printf( "Book title : %s\n", book.title);
           printf( "Book author : %s\n", book.author);
           printf( "Book subject : %s\n", book.subject);
           printf( "Book book_id : %d\n", book.book_id);
        
           return 0;
        }




