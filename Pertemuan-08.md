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
