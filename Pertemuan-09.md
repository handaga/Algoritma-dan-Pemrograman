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







Programmer juga dapat mendefinisikan tipe variabel sendiri berdasarkan tipe variabel dasar dengan perintah ' typedef `



