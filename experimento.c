#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  for (int i = 0; i < 6; i++) {
  printf("Elegi de estas opciones:\n");
  printf("1 - Pase de temporada premium\n");
  printf("2 - 12500 creditos\n");
  printf("3 - Un fennec dorado\n");
  printf("4 - Turbo alpha\n");
  printf("5 - Discontinued items\n");
  printf("6 - Volver\n");
  int eleccion;
  printf("\n");
  printf("Elija:");
  scanf("%d", &eleccion);
  printf("\n");
  if (eleccion > 6 || eleccion < 0) {
    printf("Elija bien genio\n");
  }
  if (eleccion == 1 ) {
    printf("Acaso piensa que es tan facil conseguir un pase gratis\n");
  }
  if (eleccion == 2 ) {
    printf("En que te querés gastar tantos creditos?\n");
  }
  if (eleccion == 3 ) {
    printf("No salio el fennec dorado todavia\n");
  }
  if (eleccion == 4 ) {
    printf("No tenes tantos creditos.\n");
  }
  if (eleccion == 5 ) {
    printf("Rajá de aca ingles traidor\n");
  }
  if (eleccion == 6) {
    break;
  }
  printf("\n");
  }
  return 0;
}
