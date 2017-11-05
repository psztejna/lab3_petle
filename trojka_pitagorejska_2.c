#include <stdio.h>
#include <math.h>
/*Program sprawdza czy 3 liczby naturalne tworza trojke pitagorejska */
int main()
{
	unsigned int trojka_pitagorejska;
	int a, b, c;
	printf("podaj a b c: \n");
	scanf("%d", &a);
	printf("podaj b: \n");
	scanf("%d", &b);
	printf("podaj c: \n");
	scanf("%d", &c);

	switch(trojka_pitagorejska) {
		case a <= 0:
		printf("!!! wrong number !!!\n");
		break;

		case b <= 0:
		printf("!!! wrong number !!!\n");
		break;

		case c <= 0:
		printf("!!! wrong number !!!\n");
		break;

		case a*a+b*b==c*c:
		printf("jest to trojka pitagorejska\n");
		break;

		case a*a+b*b < c*c:
		printf("to nie jest trojka pitagorejska");
		break;

		case a*a+b*b > c*c:
		printf("to nie jest trojka pitagorejska");
		break;
}

}
