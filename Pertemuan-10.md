# File I/O
  
File sebagai perangkat Input dan atau Output, note: SATU File  dapat digunakan sebagai input dan output pada saat yang sama. Dengan kata lain sebuah file pada suatau saat dapat berfungsi sebagai INPUT saja atau OUTPUT saja. 

Jenis file dalam komputer :
* **File Teks** :  Isinya berupa alphanumeric (huruf dan angka yang dapat ditampilkan di layar, yaitu a-z,A-Z, dan 0-9, ditambah karakter khusus @, #, % dll), kadang dibedakan menjadi dua yaitu TEKS BIASA (ada kontrol pengaturan tampilan, contoh CETAK TEBAL), dan TEKS MURNI : Hanya teks tanpa kontrol tampilan.
* **File Binary** : Isinya berupa kode-kode yang sebagian besar tidak dapat di tampilkan di layar.

**Catatan**: 
> File TEKS dapat diproses/diolah sebagai file BINARY, tetapi file BINARY  TIDAK DAPAT diproses sebagai file TEKS.


Dalam bahasa C, ada beberapa fungsi yang sudah di sedaikan untuk operasi File:

`fopen() ` : membuka /membuat file, awal proses
`fclose()`  : menutup operasi dengan file, akhir proses.

**Output TEKS**

`fprintf()` : menulis sesuatu ke dalam file
`fputs()` : menulis sesuatu ke dalam file (untuk data berupa string/char saja)

**INPUT TEKS**

* `fscanf()` : untuk membaca file teks dengan format
* `fgets()`  : membaca data dari file (hanya menghasilkan string sebanyak yang diperlukan)

Untuk operasi dengan file BINARY ( dapat juga digunakan untuk file teks)

* `fread()`   : membaca data dari file BINARY
* `fwrite()` : menulis ke dalam file binary

`fopen()`: Adalah fungsi untuk membuka file yang sudah ada atau membuat file baru, tergantung pada opsi yang dipilih. Daftar opsi yang disediakan adalah sebagai berikut: `fopen("myfile.txt","w");`

* `r` : Membuka sebuah file teks (yang sudah ada) hanya untuk dibaca. (ada potensi terjadi runtime error jika file tidak ditemukan)
* `w ` : Membuka sebuah file teks untuk ditulisi. Jika nama file tidak ada dalam sistim akan dibuat sebuah file baru sesuai dengan nama file yang diberikan. catatan: Penulisan akan dimulai dari awal (jika file sudah ada isinya akan ditimpa).
* `a ` : Membuka sebuah file teks untuk ditulisi dengan mode MENAMBAH (tidak menghapus data yang sudah ada dalam file). Jika file belum ada, akan dibuatkan file baru sesuai nama file yang diberikan. Penulisan dimulai dari bagian akhir file.
* `r+ ` : Membuka sebuah teks file untuk dibaca dan ditulis mulai dari AWAL, jika sudah ada isinya akan ditimpa.
* `w+ `	: Membuka file teks untuk ditulis dan dibaca. Pertama kali isi dalam file akan dikosongkan, .0atau membuat file baru jika file yang diinginkan tidak ditemukan.
* `a+ ` : Membuka file teks untuk dibaca dan ditulis. Membuat file baru jika belum ada. Pembaca file mulai dari AWAL, penulisan mulai dari bagian akhir.

## Catatan:
Untuk menggunakan/mengolah file binary ( data yang disimpan tidak seperti yang ditampilkan) digunakan opsi sebagai berikut: (menambah huruf 'b' pada daftar opsi yang di jelaskan di atas), contoh:

     ` "rb", "wb", "ab", "rb+", "r+b", "wb+", "w+b", "ab+", "a+b" `

**Contoh:**

      #include <stdio.h>
      main() {
         FILE *fp;   //pointer untuk variabel FILE bukan nama file

         // membuka file dengan mode 'w+' : ditulis, dibaca, menghapus isi yang sudah ada.
         fp = fopen("test.txt", "w+");

         //menulis teks dalam file
         fprintf(fp, "Ini contoh kalimat untuk menulis sebuah file...\n");
      	
         //float f = 1.2;
         //fprintf(fp, f);  //salah karena opsi 'w+' bukan 'w+b'

         //menuliskan teks dalam file
         fputs("Contoh menggunakan fungsi fputs untuk menulisi file...\n", fp);
         
         //setelah selesai melakukan operasi baca/tulis sebaiknya file dituup kembali dengan perintah fclose();
         fclose(fp);
      }

Contoh operasi dengan File BINARY:
**Operasi Tulis**:

      /* fwrite example : write buffer */
      #include <stdio.h>

      int main ()
      {
        FILE * pFile;
        char buffer[] = { 'A' , 'B' , '0', '1' };
         float bfloat[] = { 1.5, 2.7 };
         
        pFile = fopen ("myfile.bin", "wb");
        //fwrite (buffer , sizeof(char), sizeof(buffer), pFile);
        fwrite (buffer , sizeof(float), sizeof(bfloat), pFile);
        
         
         fclose (pFile);
        return 0;
      }

**Operasi Baca:**

      /* fread example: read an entire file */
      #include <stdio.h>
      #include <stdlib.h>

      int main () {
        FILE * pFile;
        long lSize;
        char * buffer;
        size_t result;

        pFile = fopen ( "myfile.bin" , "rb" );
         //jika file tidak ditemukan keluar aplikasi
        if (pFile==NULL) {fputs ("File error",stderr); exit (1);}

        // obtain file size:
         //SCAN isi file dari awal sampai akhir
        fseek (pFile , 0 , SEEK_END);
         
         //menghitung ukuran file dari lokasi awal hingga lokasi pointer di akhir file.
        lSize = ftell (pFile);
         // mengembalikan pointer ke awal file
        rewind (pFile);

        // memesan memori untuk menampung isi file:
        buffer = (char*) malloc (sizeof(char)*lSize);
        if (buffer == NULL) {fputs ("Memory error",stderr); exit (2);}

        // copy the file into the buffer:
         // memindah isi file ke dalam memori
        result = fread (buffer,1,lSize,pFile);
        if (result != lSize) {fputs ("Reading error",stderr); exit (3);}

        /* the whole file is now loaded in the memory buffer. */

        // terminate
        fclose (pFile);
        free (buffer);
        return 0;
      }

