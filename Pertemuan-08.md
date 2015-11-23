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



### Contoh Operasi matematik dalam pointer

> Operasi PENAMBAHAN (increment)

        #include <stdio.h>
        
        const int MAX = 3;
        
        int main () {
        
           int  var[] = {10, 100, 200};
           int  i, *ptr;
        
           /* let us have array address in pointer */
           ptr = var;
        	
           for ( i = 0; i < MAX; i++) {
        
              printf("Address of var[%d] = %x\n", i, ptr );
              printf("Value of var[%d] = %d\n", i, *ptr );
        
              /* move to the next location */
              ptr++;
           }
        	
           return 0;
        }


Output dari kode program di atas adalah:

        Address of var[0] = bf882b30
        Value of var[0] = 10
        Address of var[1] = bf882b34
        Value of var[1] = 100
        Address of var[2] = bf882b38
        Value of var[2] = 200

> Operasi PENGUARANGAN ( Decrement ) 

        #include <stdio.h>
        
        const int MAX = 3;
        
        int main () {
        
           int  var[] = {10, 100, 200};
           int  i, *ptr;
        
           /* let us have array address in pointer */
           ptr = &var[MAX-1];
        	
           for ( i = MAX; i > 0; i--) {
        
              printf("Address of var[%d] = %x\n", i, ptr );
              printf("Value of var[%d] = %d\n", i, *ptr );
        
              /* move to the previous location */
              ptr--;
           }
        	
           return 0;
        }

Output dari kode program di atas adalah:

        Address of var[3] = bfedbcd8
        Value of var[3] = 200
        Address of var[2] = bfedbcd4
        Value of var[2] = 100
        Address of var[1] = bfedbcd0
        Value of var[1] = 10

> Operasi PERBANDINGAN  ( operator yang dapat digunakan  ==, <, dan > )

        #include <stdio.h>
        
        const int MAX = 3;
        
        int main () {
        
           int  var[] = {10, 100, 200};
           int  i, *ptr;
        
           /* let us have address of the first element in pointer */
           ptr = var;
           i = 0;
        	
           while ( ptr <= &var[MAX - 1] ) {
        
              printf("Address of var[%d] = %x\n", i, ptr );
              printf("Value of var[%d] = %d\n", i, *ptr );
        
              /* point to the previous location */
              ptr++;
              i++;
           }
        	
           return 0;
        }

Output dari kode program di atas adalah:

        Address of var[0] = bfdbcb20
        Value of var[0] = 10
        Address of var[1] = bfdbcb24
        Value of var[1] = 100
        Address of var[2] = bfdbcb28
        Value of var[2] = 200


### Variabel Array dengan Elemen berupa Pointer 

        #include <stdio.h>
         
        const int MAX = 3;
         
        int main () {
        
           int  var[] = {10, 100, 200};
           int i;
         
           for (i = 0; i < MAX; i++) {
              printf("Value of var[%d] = %d\n", i, var[i] );
           }
           
           return 0;
        }
        
atau

        #include <stdio.h>
         
        const int MAX = 3;
         
        int main () {
        
           int  var[] = {10, 100, 200};
           int i, *ptr[MAX];
         
           for ( i = 0; i < MAX; i++) {
              ptr[i] = &var[i]; /* assign the address of integer. */
           }
           
           for ( i = 0; i < MAX; i++) {
              printf("Value of var[%d] = %d\n", i, *ptr[i] );
           }
           
           return 0;
        }

Output dari kode program di atas adalah:

        Value of var[0] = 10
        Value of var[1] = 100
        Value of var[2] = 200

Contoh lain:

        #include <stdio.h>
         
        const int MAX = 4;
         
        int main () {
        
           char *names[] = {
              "Zara Ali",
              "Hina Ali",
              "Nuha Ali",
              "Sara Ali",
           };
           
           int i = 0;
        
           for ( i = 0; i < MAX; i++) {
              printf("Value of names[%d] = %s\n", i, names[i] );
           }
           
           return 0;
        }

Output:

        Value of names[0] = Zara Ali
        Value of names[1] = Hina Ali
        Value of names[2] = Nuha Ali
        Value of names[3] = Sara Ali

### Contoh variabel pointer untuk menunjuk ke variabel pointer laiinya (Pointer dari pointer)

        #include <stdio.h>
         
        int main () {
        
           int  var;
           int  *ptr;
           int  **pptr;
        
           var = 3000;
        
           /* take the address of var */
           ptr = &var;
        
           /* take the address of ptr using address of operator & */
           pptr = &ptr;
        
           /* take the value using pptr */
           printf("Value of var = %d\n", var );
           printf("Value available at *ptr = %d\n", *ptr );
           printf("Value available at **pptr = %d\n", **pptr);
        
           return 0;
        }

Output:

        Value of var = 3000
        Value available at *ptr = 3000
        Value available at **pptr = 3000


### Contoh Pointer sebagai Argumen dalam fungsi 

        #include <stdio.h>
         
        /* function declaration */
        double getAverage(int *arr, int size);
         
        int main () {
        
           /* an int array with 5 elements */
           int balance[5] = {1000, 2, 3, 17, 50};
           double avg;
         
           /* pass pointer to the array as an argument */
           avg = getAverage( balance, 5 ) ;
         
           /* output the returned value  */
           printf("Average value is: %f\n", avg );
           return 0;
        }
        
        double getAverage(int *arr, int size) {
        
           int  i, sum = 0;       
           double avg;          
         
           for (i = 0; i < size; ++i) {
              sum += arr[i];
           }
         
           avg = (double)sum / size;
           return avg;
        }

Output:

        Average value is: 214.40000


### Contoh Pointer sebagai RETURN TYPE sebuah fungsi 

        #include <stdio.h>
        #include <time.h>
         
        /* function to generate and retrun random numbers. */
        int * getRandom( ) {
        
           static int  r[10];
           int i;
         
           /* set the seed */
           srand( (unsigned)time( NULL ) );
        	
           for ( i = 0; i < 10; ++i) {
              r[i] = rand();
              printf("%d\n", r[i] );
           }
         
           return r;
        }
         
        /* main function to call above defined function */
        int main () {
        
           /* a pointer to an int */
           int *p;
           int i;
        
           p = getRandom();
        	
           for ( i = 0; i < 10; i++ ) {
              printf("*(p + [%d]) : %d\n", i, *(p + i) );
           }
         
           return 0;
        }

Output:

        1523198053
        1187214107
        1108300978
        430494959
        1421301276
        930971084
        123250484
        106932140
        1604461820
        149169022
        *(p + [0]) : 1523198053
        *(p + [1]) : 1187214107
        *(p + [2]) : 1108300978
        *(p + [3]) : 430494959
        *(p + [4]) : 1421301276
        *(p + [5]) : 930971084
        *(p + [6]) : 123250484
        *(p + [7]) : 106932140
        *(p + [8]) : 1604461820
        *(p + [9]) : 149169022



# Manajemen Memori 

Manajemen memori adalah sebuah cara untuk penggunaan memori secara efisien, yaitu dengan cara hanya menggunakan memori ketika perlu, dan membebaskan memori jika sudah tidak perlu, atau dengan kata lain mengalokasikan memori secara dinamik.  Hal ini hanya dapat dilakukan dengan menggunakan bantuan variabel POINTER.

Terdapat empat fungsi pustaka yang berkaitan dengan manajemen memori yaitu :
* ` void *calloc(int num, int size); ` : digunakan untuk memesan (mengalokasikan ) memori untuk menyimpan variabel ARRAY sebanyak ` num ` dimana setiapelemen array berukuran ` size ` Byte. 
* ` void free(void *address); ` : digunakan untuk membebaskan memori agar dapat digunakan untuk keperluan lainnya, atau agar aplikasi yang lain dapat memanfaatkannya
* ` void *malloc(int num); ` : Digunakan untuk mengalokasikan memori sebanyak ` num ` Byte
* ` void *realloc(void *address, int newsize); ` : digunakan untuk menambah ukuran memori yang sudah pernah dipesan, menjadi berukuran ` newsize ` Byte.

## Contoh program dengan alokasi memori secara dinamik

        #include <stdio.h>
        #include <stdlib.h>
        #include <string.h>
        
        int main() {
        
           char name[100];
           char *description;
        
           strcpy(name, "Zara Ali");
        
           /* allocate memory dynamically */
           description = malloc( 200 * sizeof(char) );
           
           /* 
           JIka digunakan fungsi calloc menjadi seperti berikut
           calloc(200, sizeof(char));
           */
           
           
           if( description == NULL ) {
              fprintf(stderr, "Error - unable to allocate required memory\n");
           }
           else {
              strcpy( description, "Zara ali a DPS student in class 10th");
           }
           
           printf("Name = %s\n", name );
           printf("Description: %s\n", description );
        }

## Memperbesar ukuran memori (realloc) dan membebaskan (free) memori

        #include <stdio.h>
        #include <stdlib.h>
        #include <string.h>
        
        int main() {
        
           char name[100];
           char *description;
        
           strcpy(name, "Zara Ali");
        
           /* allocate memory dynamically */
           description = malloc( 30 * sizeof(char) );
        	
           if( description == NULL ) {
              fprintf(stderr, "Error - unable to allocate required memory\n");
           }
           else {
              strcpy( description, "Zara ali a DPS student.");
           }
        	
           /* suppose you want to store bigger description */
           description = realloc( description, 100 * sizeof(char) );
        	
           if( description == NULL ) {
              fprintf(stderr, "Error - unable to allocate required memory\n");
           }
           else {
              strcat( description, "She is in class 10th");
           }
           
           printf("Name = %s\n", name );
           printf("Description: %s\n", description );
        
           /* release memory using free() function */
           free(description);
        }
