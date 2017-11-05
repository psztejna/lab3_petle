#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*program wypisuje silnie*/
 int main(void){
  int n;
  printf("Podaj liczbe naturalna: \n");
  scanf("%d",&n);
  printf("%d silnia\n", n);

for (int i = 0; i <= n-1;  (i = i + 1)) {
  int temp = i+1;
  printf("%d kwadrat = %d \n", temp, (temp)*(temp) );
}
  return EXIT_SUCCESS;
}
