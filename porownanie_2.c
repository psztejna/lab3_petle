#include <stdio.h>
#include <math.h>
/* porownanie 2 liczb naturalnych przy uzyciu operatora warunkowego ? */
int main()
{
int a, b;
	printf("podaj a, b\n");
	scanf("%d %d", &a, &b);
(a==b)? printf("%d = %d\n", a, b):
(a>b)? printf("%d > %d\n", a, b) : printf("%d < %d\n", a, b);

}
