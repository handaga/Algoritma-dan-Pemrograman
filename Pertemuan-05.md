# Tipe Data

Pada dasarnya hanya tipe data angka BOOLEAN ('0' dan '1') yang dapat di proses atau dikenali oleh komputer. Namun demikian dalam Bahasa C telah dikembangakan beberapa jenis tipe data lain yang dapat di proses dalam program. Tipe data tersebut di bagi dalam tiga kelompok sebagai berikut:

No | Tipe data dan Keterangan 
--- | ---
1 | ***Dasar*** berupa data aritmatik yang terdiri atas (a) angka Integer (bilangan bulat) dan (b) angka pecahan (folating-point)
2 | ***Enumerated*** serupa dengan aritmatik (integer) digunakan untuk mendefinisikan variabel yang hanya dapat diisi dengan nilai bilangan bulat tertentu.
3 | ***Void*** kata (penentu) void digunakan untuk variabell atau fungsi yang tidak memiliki nilai apapun (kosong).
4 | ***Turunan*** termasuk di dalamnya adalah Pointer, Array, Sturcture, Union, dan Function.

Tipe data Array dan Structure termasuk dalam kelompok kolektif, tipe data untuk Function adalah tipe data yang akan dihasilkan dari sebuah function (fungsi). Berikut adalah contoh detail dari tipe data dasar.

## Integer

Tabel berikut ini berisi daftar tipe data integer yang dikenal dalam bahasa C

Tipe | Ukuran dalam memori | Range nilai 
--- | --- | ---
char | 1 byte | -128 to 127 or 0 to 255
unsigned char | 1 byte | 0 to 255
signed char | 1 byte | -128 to 127
int | 2 or 4 bytes | -32,768 to 32,767 or -2,147,483,648 to 2,147,483,647
unsigned int | 2 or 4 bytes | 0 to 65,535 or 0 to 4,294,967,295
short | 2 bytes | -32,768 to 32,767
unsigned short | 2 bytes | 0 to 65,535
long | 4 bytes | -2,147,483,648 to 2,147,483,647
unsigned long | 4 bytes | 0 to 4,294,967,295

Untuk mendapatkan ukuran variabel yang sebenarnya (dalam platform tertentu) dapat menggunakan operator ` sizeof `. Ekspresi ` sizeof(obyek) ` menghasilkan ukuran memori dari ` obyek ` dalam satuan ` byte `. Berikut ini adalah contoh kode untuk mendapatkan ukuran memeori sebuah variabel:

	#include <stdio.h>
	#include <limits.h>
	
	int main()
	{
		printf("int memerlukan memori : %d byte\n", sizeof(int));
		
		return 0;
	}

## Floating-Point (angka Pecahan)

Tabel berikut ini berisi tipe data angka pecahan yang terdapat dalam bahasa C:

Tipe | Ukuran memori | range nilai | Kepresisian 
--- | --- | --- | ---
float | 4 byte | 1.2E-38 s/d 3.4E+38 | 6 decimal places
double | 8 byte | 2.3E-308 s/d 1.7E+308 | 15 decimal places
long double | 10 byte | 3.4E-4932 s/d 1.1E+4932 | 19 decimal places

header ` float.h ` dapat dicantumkan dalam program untuk menggunakan tipe data float dalam program, seperti contoh berikut:

	#include <stdio.h>
	#include <float.h>
	
	int main()
	{
		printf("Ukuran memori untuk variabel float : %d byte\n", sizeof(float));
		printf("Minimum float positive value: %E\n", FLT_MIN );
		printf("Maximum float positive value: %E\n", FLT_MAX );
		printf("Precision value: %d\n", FLT_DIG );
		   
		return 0;
	}

Hasil dari contoh program di atas adalah sebagai berikut:

	Storage size for float : 4
	Minimum float positive value: 1.175494E-38
	Maximum float positive value: 3.402823E+38
	Precision value: 6


## void

void digunakan untuk menunjukkan bahwa sebuah variabel atau fungsi tidak memiliki nilai, digunakan dalam tiga keadaan:

No | Keterangan 
--- | ---
1 | ***return sebuah fungsi berupa void*** sebuah fungsi mengembalikan / menghasilkan tipe data void. Terdapat beberapa fungsi dalam bahasa C yang tidak mengembalikan nilai atau dapat dikatakan menghasilkan data void. Contoh: ` void exit(int status); `
2 | ***Argumen sebuah fungsi berupa void*** Argumen dari sebuah fungsi dapat berupa void, Terdapat beberapa fungsi yang tidak  memerlukan argumen atau memiliki argumen berupa void, contoh: ` int rand(void); `
3 | ***Pointer yang menunjuk kepada void*** pointer yang menunjuk kepada tipe data void, menerangakn sebuah alamat memori tetapi tidak mengandung tipe data apapun. Sebagai contoh fungsi untuk memesan memori ` void * malloc ( size_t_size ); ` fungsi tersebut mengembalikan  sebuah pointer yang menunjuk ke void, yang kemudian dapat ***di-CAST*** (diubah) menjadi tipe data apapun.

# Variabel

Variabel adalah sebuah nama yang diberikan kepada area penyimpan data (memori) yang isinya dapat dimanipulasi oleh program. Setiap variabel dalam bahasa C memiliki tipe tertentu, yang akan menentukan ukuran memori yang akan digunakan (dalam satuan byte), range nilai yang dapat disimpan, dan operasi yang dapat dilakukan pada variabel tersebut. 

Nama variabel dapat disusun dari HURUF, ANGKA, dan UNDER_SCORE (garis bawah). Dapat berawal dari HURUF atau UNDER_SCORE. Huruf besar dan huruf kecil dibedakan (case-sensitive).  Berdasarkan pada tipe data yang telah dijelaskan pada bagian sebelumnya maka tipe variabel dalam bahasa C antara lain adalah sebagai berikut: 

tipe | Keterangan 
--- | ---
**char** | ukuran 1 byte, untuk menyimpan satu huruf atau sebagai angka bulat
**int** | angka integer yang paling banyak digunakan dalam bahasa C
**float** | A single-precision floating point value
**double** | A double-precision floating point value
**void** | tanpa tipe

Selain itu variabel dalam bahasa C juga dapat berupa tipe data turunan seperti **Enumerate**, **Pointer**, **Array**, **Structure**, **Union** dll. yang akan dijelaskan lebih detail pada bagaian selanjutnya.

## Definisi Variabel dalam C

Mendefinisikan variabel berarti mengatakan kepada kompiler dimana dan seberapa besar memori untuk variabel, dalam definisi terkandung tipe data dan satu atau lebih nama variabel seperti contoh berikut: 

	tipe  nama-nama_variabel;

dimana ` tipe ` harus berupa tipe data dalam bahasa C yang valid seperti **char**, **int**, **float**, **double**, **bool** atau seberang obyek yang di definisikan oleh programmer.  Sedangakan ` nama-nama_variabel ` dapat terdiri atas satu ata lebih nama identifier yang dipisahkan dengan tanda **KOMA**. Seperti pada contoh berikut: 

	int    i, j, k;
	char   c, ch;
	float  f, gaji;
	double d;

Variabel dapat diinisialisasi (diisi dengan sebuah nilai awal) pada saat di deklarasikan. Inisialisasi berupa ekspresi yang terdiri atas tanda sama-dengan diikuti dengan sebuah konstanta.

	tipe nama_variabel = nilai;

beberapa contoh antara lain sbb:

	extern int d = 3, f = 5;    // declaration of d and f. 
	int d = 3, f = 5;           // definition and initializing d and f. 
	byte z = 22;                // definition and initializes z. 
	char x = 'x';               // the variable x has the value 'x'.

Untuk definisi variabel yang tidak diikuti dengan inisialisasi, jika tipe datanya meenggunakan memori statik akan diinisialisasi dengan **NULL** (Semua byte bernilai nol), jen is variabel yang lainnya tidak didefinisikan nilai awalnya.

## Deklarasi variabel dalam C

Dekalrasi variabel sangat berguna bila dalam program terdapat beberapa file sumber. Definisi variabel dalam sebuah file sumber dapat digunakan juga oleh file sumber yang lain dengan menyertakan keyword  ` extern ` pada saat mendefinisikan variabel.

Variabel dapat didefinisikan beberapa kali dalam sebuah program, tetapi dalam satu file sumber sebuah variabel hanya boleh dideklarasikan sekali saja. 

Contoh:

	#include <stdio.h>
	// Variable declaration:
	extern int a, b;extern int c;
	extern float f;
	
	int main ()
	{
		/* variable definition: */
		int a, b;
		int c;
		float f;
		 
		/* actual initialization */
		a = 10;
		b = 20;
		c = a + b;
		printf("value of c : %d \n", c);
		f = 70.0/3.0;
		printf("value of f : %f \n", f);
		
		return 0;
	}

## Konstanta dan Literal 

Konstanta adalah sesuatu yang bernilai tetap dan program tidak dapat merubah nilainya selama program dieksekusi. Nilai tetap ini juga disebut **literal**. 

Konstanta dapat berupa sebarang tipe data seperti konstanta integer, konstanta floating-point, konstanta character, dan literal string. Selain itu juga terdapat konstanta berupa enumerate.

sebuah konstanta (constant) di kelola seperti halnya variabel biasa kecuali nilainya tidak dapat di modifikasi setelah didefinisikan. 

### integer literal 

Integer literal dapat berupa angka biner (basis 2), desimal ( basis 10), octal (basis 8), atau hexadesimal (basis 16). Untuk menentukan jenis angka yang digunakan tanda awalan,  ` 0x ` atau ` 0X ` untuk angka heksadesimal, dan ` 0 ` untuk angka octal.

integer literal juga dapat memiliki tanda akhiran, kombinasi dari ` U ` (untuk jenis unsigned long) dan ` L ` (untuk jenis long).  Berikut ini adalah beberapa contoh literal integer: 

	212         /* Legal */
	215u        /* Legal */
	0xFeeL      /* Legal */
	078         /* Illegal: 8 is not an octal digit */
	032UU       /* Illegal: cannot repeat a suffix */
	
	85         /* decimal */
	0213       /* octal */
	0x4b       /* hexadecimal */
	30         /* int */
	30u        /* unsigned int */
	30l        /* long */
	30ul       /* unsigned long */

## Floating-Point literal

Literal untuk angka pecahan terdiri atas, bagian integer, dan bagian desimal (dibelakang tanda titik/koma) atau bagian angka pecahan, dan bagian eksponen. Literal floating-point dapat berbentuk desimal ataupun eksponensial.

Contoh: 

	3.14159       /* Legal */
	314159E-5L    /* Legal */
	510E          /* Illegal: incomplete exponent */
	210f          /* Illegal: no decimal or exponent */
	.e55          /* Illegal: missing integer or fraction */

## Konstanta Character 

Literal jenis character ditulis diantara tanda petik (SINGLE QUOTED), ` 'x' ` dan dapat disimpan dalam variabel tipe ` char `.

Literal character dapat berupa karakter biasa  ` 'x' `, atau sebuah **'escape sequence'** (berawal dengan tanda ` '\' `) seperti ` '\n' `, ` '\t' `, atau dapat juga berupa universal character seperti ` '\u02C0' `. 

Dalam bahasa C terdapat beberapa karakter yang memiliki arti khusus, seperti ` '\n' ` berarti tanda untuk ganti baris baru. Beberapa karakter khusus yang lain terdapat dalam tabel berikut ini: 

Karakter esc/khusus | Arti
--- | --- 
` \\ ` | karakter \ 
` \' ` | karakter ' 
` \" ` | karakter "
` \? ` | karakter ?
` \a ` | Alert or bell
` \b ` | Backspace 
` \f ` | Form feed
` \n ` | Newline
` \r ` | Carriage return
` \t ` | Horizontal tab
` \v ` | Vertical tab
` \ooo ` | Octal number of one to three digits
` \xhh . . . ` | Hexadecimal number of one or more digits

Berikut ini adalah contoh program menggunakan beberapa karakter khusus: 

	#include <stdio.h>
	
	int main()
	{
		printf("Hello\tWorld\n\n");
		return 0;
	}

## String literal

Literal jenis string ditulis diatanra tanda petik double (DOUBLE-QUOTED), ` "string" `. Sebuah string dapat mengandung karakter biasa, karakter khusus ataupun karakter universal.

Beberapa contoh string literal adalah sebagai berikut:

	"hello, dear"
	"hello, \
	dear"
	
	"hello, " "d" "ear"

## Mendefinisikan konstanta

Terdapat dua cara untuk mendefinisikan konstanta dalam bahasa C

1. menggunakan preprocessor  ` #define `, format ` #define identifier value `
2. menggunakan kata kunci ` const `, format ` const type variable = value; `

Berikut adalah contoh definisi konstanata menggunakan preprocessor.

	#include <stdio.h>
	#define LENGTH 10   
	#define WIDTH  5
	#define NEWLINE '\n'
	
	int main()
	{
		int area;
		
		area = LENGTH * WIDTH;
		printf("value of area : %d", area);
		printf("%c", NEWLINE);
		return 0;
	}

Contoh konstanta menggunakan katakunci ` const `

	#include <stdio.h>
	
	int main()
	{
		const int  LENGTH = 10;
		const int  WIDTH  = 5;
		const char NEWLINE = '\n';
		int area;
		
		area = LENGTH * WIDTH;
		printf("value of area : %d", area);
		printf("%c", NEWLINE);
		return 0;
	}

Dalam bahasa C, biasanya konstanta dibuat dengan huruf BESAR (CAPITAL)





