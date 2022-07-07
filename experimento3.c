#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int not1C;
  int not2C;
  int not1G;
  int not2G;
  int not1F;
  int not2F;
  printf("Introducir notas del alumno Cavalcanti\n");
  scanf("%d %d", &not1C, &not2C);
  printf("Introducir notas del alumno Gadea\n");
  scanf("%d %d", &not1G, &not2G);
  printf("Introducir notas del alumno Farfan\n");
  scanf("%d %d", &not1F, &not2F);
  double pc = (not1C + not2C) / 2;
  double pg = (not1G + not2G) / 2;
  double pf = (not1F + not2F) / 2;

  printf("Nombre     Nota1     Nota2     Promedio\n");
  printf("Cavalcanti   %d        %d          %.1f\n", not1C, not2C, pc); 
  printf("Gadea        %d        %d          %.1f\n", not1G, not2G, pg);
  printf("Farfan       %d        %d          %.1f\n", not1F, not2F, pf);

}
