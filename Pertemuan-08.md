# Pointer

Komputer menyimpan data seperti halnya sebuah rak yang diberi nomor. Nomor rak disebut ALAMAT dan isi rak disebut data, setiap rak dalam komputer dapat digunakan untuk menyimpan data besar **8 bit** atau **1 Byte**.

Sebuah variabel tipe char, memerlukan memeori sebesar 1 Byte ( 8 bit ) sehingga hanya perlu 1 lokasi (alamat)  rak, sedangkan variabel tipe integer memerlukan memori sebesar 4 Byte, sehingga perlu 4 lokasi (alamat), dan ALAMAT yang PERTAMA yang akan digunakan dalam proses pengolahan data variabel, contoh misal terdapat sebuah variable integer ` var ` maka operasi ` &var ` akan menghasilkan ALAMAT dari Byte pertama.   


POINTER  adalah sebuah variabel yang memiliki nilai yang berupa ALAMAT dari lokasi memori variabel yang lain.

contoh deklarasi variable pointer:

    int    *ip;    /* pointer to an integer */
    double *dp;    /* pointer to a double */
    float  *fp;    /* pointer to a float */
    char   *ch     /* pointer to a character */

note:
POINTER hanya dapat menunjuk ke **SATU TIPE** variabel. Sebuah variabel pointer yang dideklarasikan sebagai pointer variabel integer **TIDAK BOLEH** digunakan untuk menunjuk ke variabel tipe char, float atau tipe yang lainnya.

## NULL POINTER 
Pointer yang belum diisi dengan sebauah alamat disebut ` NULL POINTER ` (tidak menunjuk ke alamat manapun)

## Cara menggunakana variabel Pointer

* Deklarasi variabel pointer   ( ` int * NP; int VAR; //pointer variabel integer  `);
* Assign (mengisi) variabel pointer dengan alamat dari sebuah tipe variabel yang ditunjuk sesuai dengan deklarasinya ( ` NP = &VAR `)
* Membaca NILAI atau ISI alamat yang ditunjuk oleh Pointer ( ` printf("Nilai ALAMAT yang ditunjuk NP adalah %d", *NP `) 


## Beberapa pengguanaan matematika dalam pointer
### Contoh penggunaan variabel pointer

        #include <stdio.h>
        
        int main () {
        
           int  var = 20;   /* actual variable declaration */
           int  *ip;        /* pointer variable declaration */
        
           ip = &var;  /* store address of var in pointer variable*/
        
           printf("Address of var variable: %x\n", &var  );
        
           /* address stored in pointer variable */
           printf("Address stored in ip variable: %x\n", ip );
        
           /* access the value using the pointer */
           printf("Value of *ip variable: %d\n", *ip );
        
           return 0;
        }

Output dari kode program di atas adalah sebagai berikut:

        Address of var variable: bffd8b3c
        Address stored in ip variable: bffd8b3c
        Value of *ip variable: 20


## Operasi dalam pointer

* Operasi Matematika  ( ` NP++ `): Alamat akan bertambah sesuai dengan jumlah memori variabel yang ditunjuk, tipe `int * NP ` akan bertambah EMPAT ALAMT (4 ALAMAT), sedangkan tipe ` char * NP ` akan bertambah SATU (1 ALAMAT) 
* Array Pointer, sebuah array dengan elemen berupa pointer (` char *AP[5] `) 
* Pointer dari variabel pointer yang lain  (` **DP `)
* POinter sebagai argumen dalam sebuah fungsi (` void namafungsi(int *P ) ` ) 
* Pointer sebagai return value dari sebuah fungsi  (` int * namafungsi(char CH) `)


