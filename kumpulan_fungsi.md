# Kumpulan fungsi yang terdapat dalam Bahasa C

## Input Output

nama fungsi |  keterangan
--- | --- 
` char getchar(void) ` | menunggu user memasukan satu karakter dari keyboard, contoh ` char c = getchar(); `
` char *gets(char * s) ` | menunggu user memasukan satu karakter atau lebih dan menekan button ENTER. Contoh ` char str[100]; printf("masukan string: "); gets(str); `
` int scanf(const char *format, ...) ` | menunggu user memasukan data sesuai dengna format yang ditentukan dalam perintah `scanf()`. Contoh  `char str[100]; int i;  printf( "masukan teks dan angka integer  :"); scanf("%s %d", str, &i); `
` int putchar(int c) ` | mencetak SATU KARAKTER di layar. Contoh ` char c='a'; putchar(c); `
` int puts(const char *s) ` | mencetak string di layar. Contoh  ` char s[10] = "Ini Teks"; puts(s); `
` int printf(const char *format, ...) ` | mencetak data di layar sesuai format. Contoh ` int x=100; printf("Jarak %d meter", x); `


## String  (string.h)

nama fungsi / variabel | Keterangan 
--- | ---
` size_t ` | data dengan tipe ` unsigned int ` hasil dari memanggil keyword ` sizeof( ) `
` NULL ` | konstanta nilai pointer null
` void *memchr(const void *str, int c, size_t n) ` | mencari lokasi karakter ` c ` dalam ` str `, dengan ukuran ` n `
` int strcmp(const char *str1, const char *str2) ` | membandingkan dua buah string ` str1 ` dan ` str1 `, jika sama akan dikembalikan nilai 0
` char *strcpy(char *dest, const char *src) ` | menyalin string dari ` src ` ke ` dest `



## Matematika

nama fungsi / variabel | Keterangan 
--- | ---
` double pow(double x, double y) ` | untuk menghitung x pangkat y
` double sqrt(double x) ` | untuk menghitung akar kwadrat
` double exp(double x) ` | untuk menghitung bilang e pangkat x, e = 2,718282
`  double cbrt  (double x) ` | untuk menghitung akar pangkat tiga dari x, note: hanya berlaku pada versi kompiler c terbaru
