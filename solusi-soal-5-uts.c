#include <stdio.h>
#include <math.h>

float fungsiku( int x, int m) 
{
	float y;
	//proses
	y = sqrt( (5*pow(x,3)) - pow(x,m-1) + 12 );
	return y;
}

int main() {
	int a=2;
	int b=3;
	float y = 0;
	y = fungsiku(a,b);
	printf("x=%d, m=%d, hasilnya y=%f \n",a,b,y);
	return 0;
}