#include <stdio.h>
#include <math.h>
/*Program sprawdza czy 3 liczby naturalne tworza trojke pitagorejska */
int main()
{
	int a, b, c;
	printf("podaj a: \n");
	scanf("%d", &a);
	printf("podaj b: \n");
	scanf("%d", &b);
	printf("podaj c: \n");
	scanf("%d", &c);

	if ( a <= 0 , b <= 0 , c <= 0) {
		printf("!!! wrong numbers !!!\n");

	}else{

	if (a*a+b*b==c*c) {
		printf("jest to trojka pitagorejska\n");

	} else {
			printf ("to nie jest trojka pitagorejska\n");
		}
}

}
