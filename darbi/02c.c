# include <stdio.h>
# include <limits.h>
int main ()
{
	int a = 50000; // 50 ,000
	int b = 1000000; // 1 ,000 ,000
	int c = a * b; // kaads ir sgaidaams raultaats?

	printf ("int datu tipa izmers ir: %ld baiti \n", sizeof (int) );
	printf (" Apreekjinam a un b reizinaajumu :\n" );
	printf ("a = %ld, b = %ld \n", a, b);
	printf ("c = a * b = %ld * %ld = %ld \n", a,b,c ); //rezultaats uz ekraana
} 
