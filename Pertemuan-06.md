# Pengambilan Keputusan (if-then)

Dalam struktur pengambilan-keputusan (if-then), programmer perlu menentukan satu kondisi atau lebih yang akan dievaluasi oleh program, kemudian menuliskan statement yang akan dieksekusi jika  kondisi tersebut bernilai benar (true), dan juga statement yang akan dieksekusi jika kondisi tersebut bernilai salah (false). 

Berikut ini adalah bentuk umum dari struktur if-then (pengambilan keputusan / decision making) yang banyak dijumpai dalam berbagai program:

![Gambar 5.1. Struktur Pengambilan keputusan](https://cdn.rawgit.com/handaga/Algoritma-dan-Pemrograman/master/images/ch-02-02.svg) 

> Gambar 5.1. Struktur Pengambilan Keputusan

Dalam bahasa C, variabel yang memiliki nilai angka NOL atau NULL dianggap bernilai FALSE, selain itu variabel bernilai TRUE. Terdapat beberpa tipe  struktur if-then dalam bahasa C, antara lain adalah sebagai berikut: 

Statement | Keterangan 
--- | ---
` if statement ` | Terdiri atas sebuah ekspresi boolean diikuti dengan satu statemen atau lebih.
` if...else statement ` | Sebuah if-statement dapat diikuti oleh else-statement yang akan dieksekusi jika eskspresi boolen menghasilkan nilai FALSE.
` nested if statements ` | if-statement dan else-statement dapat digunakan di dalam blok if dan else..statement yang lainya.
` switch statement ` | Sebuah switch-statement dapat digunakan jika ekspresi tidak berupa boolean ekspresi, menghasilkan nilai true lebih dari satu, contoh angka integer.
` nested switch statements ` | switch statement dapat digunakan di dalam switch statement yang lain.

## if-statement

Syntax:

	if (boolean_expression)
	{
		/* statemen dieksekusi jika boolean_expression menghasilkan nilai TRUE */
	}

Contoh:

	#include <stdio.h>
	
	int main ()
	{
		/* definisi variabel lokal */
		int a = 10;
		/* Periksa apakah nilai variabel a lebih kecil dari 20 */
		if( a < 20 )
		{
			/* statement di bawah ini dieksekusi jika a lebih kecil 20*/
			printf("a is less than 20\n" );
		}
		printf("value of a is : %d\n", a);
		
		return 0;
	}

## if..else statement

Syntax:

	if(boolean_expression)
	{
		/* statement untuk ekspresi TRUE */
	}
	else
	{
		/* statement untuk ekspresi FALSE*/
	}

Contoh:

	#include <stdio.h>
	int main ()
	{
		/* definisi variabel lokal */
		int a = 100;
		
		/* memeriksa kondisi boolean */
		if( a < 20 )
		{
			/* kondisi TRUE */
			printf("a kurang dari 20\n" );
		}
		else
		{
			/* kondisi FALSE */
			printf("a TIDAK KURANG DARI 20\n" );
		}
		
		printf("value of a is : %d\n", a);
		
		return 0;
	}

## if..else if..else 

Syntax : 

	if(boolean_expression 1)
	{
		/* Executes when the boolean expression 1 is true */
	}
	else if( boolean_expression 2)
	{
		/* Executes when the boolean expression 2 is true */
	}
	else if( boolean_expression 3)
	{
		/* Executes when the boolean expression 3 is true */
	}
	else
	{
		/* executes when the none of the above condition is true */
	}

Contoh: 

	#include <stdio.h>
	int main ()
	{
		/* local variable definition */
		int a = 100;
		
		/* check the boolean condition */
		if( a == 10 )
		{
			/* if condition is true then print the following */
			printf("Value of a is 10\n" );
		}
		else if( a == 20 )
		{
			/* if else if condition is true */
			printf("Value of a is 20\n" );
		}
		else if( a == 30 )
		{
			/* if else if condition is true  */
			printf("Value of a is 30\n" );
		}
		else
		{
			/* if none of the conditions is true */
			printf("None of the values is matching\n" );
		}
		
		printf("Exact value of a is: %d\n", a );
		
		return 0;
	}

## Nested if ( if..statement di dalam if..statement)

syntax: 

	if( boolean_expression 1)
	{
		/* Executes when the boolean expression 1 is true */
		if(boolean_expression 2)
		{
			/* Executes when the boolean expression 2 is true */
		}
	}
	
Contoh:

	#include <stdio.h>
	int main ()
	{
		/* local variable definition */
		int a = 100;
		int b = 200;
		
		/* check the boolean condition */
		if( a == 100 )
		{
			/* if condition is true then check the following */
			if( b == 200 )
			{
				/* if condition is true then print the following */
				printf("Value of a is 100 and b is 200\n" );
			}
		}
		
		printf("Exact value of a is : %d\n", a );
		printf("Exact value of b is : %d\n", b );
		
		return 0;
	}

## Switch..statement

Syntax:

	switch (expression){
		case constant-expression  :
			statement(s);
			break; /* optional */
		case constant-expression  :
			statement(s);
			break; /* optional */
		/* you can have any number of case statements */
		default : /* Optional */
			statement(s);
	}
	
Contoh:

	#include <stdio.h>
	int main ()
	{
		/* local variable definition */
		char grade = 'B';
		switch(grade)
		{
			case 'A' :
				printf("Excellent!\n" );
				break;
			case 'B' :
			case 'C' :
				printf("Well done\n" );
				break;
			case 'D' :
				printf("You passed\n" );
				break;
			case 'F' :
				printf("Better try again\n" );
				break;
			default :
				printf("Invalid grade\n" );
		}
		
		printf("Your grade is  %c\n", grade );
		
		return 0;
	}
	
## Nested switch..statement

Syntax:
	
	switch(ch1) {
	case 'A': 
		printf("This A is part of outer switch" );
		switch(ch2) {
		case 'A':
			printf("This A is part of inner switch" );
			break;
		case 'B': /* case code */
		}
	break;
	case 'B': /* case code */
	}
	
	
Contoh:
	
	#include <stdio.h>
	int main ()
	{
		/* local variable definition */
		int a = 100;
		int b = 200;
		
		switch(a) {
		case 100: 
			printf("This is part of outer switch\n", a );
			switch(b) {
			case 200:
				printf("This is part of inner switch\n", a );
			}
		}
		
		printf("Exact value of a is : %d\n", a );
		printf("Exact value of b is : %d\n", b );
		
		return 0;
	}
	

## Operator ` ? : ` 

Operator  ?: dapat digunakan untuk menggantikan statement if-else, dengan struktur sebagai berikut: 

	exp1 ? exp2 : exp3;

Dimana exp1, exp2, dan exp3 adalah sebuah espresi. Pertamakali exp1  akan dievaluasi jika menghasikan nilai TRUE maka exp2 akan dieksekusi, sebaliknya jika exp1 menghasilkan nilai FALSE maka exp3 yang akan di eksekusi.

Contoh:

	x==12 ? printf("variabel x=12") : printf(variabel x TIDAK SAMA dengan 12");
