#include <stdio.h>

int main(int argc, char const *argv[]) {

  int w, h;
  printf("Podaj szerokosc, wysokosc\n");
  scanf("%d %d\n", &w, &h);

    for (size_t i = 0; i <= h; i++) {
      printf("*");
      printf("\n");
    }

}
