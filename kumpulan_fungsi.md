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

## Matematika

