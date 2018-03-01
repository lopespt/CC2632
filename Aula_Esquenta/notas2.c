/*
 * notas2.c
 * Copyright (C) 2018 lopespt <lopespt@UX501VW>
 *
 * Distributed under terms of the MIT license.
 */
#include <stdio.h>

int main(int argc, const char *argv[]) {

  int n;
  float soma = 0;
  scanf("%d", &n);

  printf("%d\n", n + 1);
  int i;
  for (i = 0; i < n; i++) {
    float p1, p2;
    scanf("%f", &p1);
    scanf("%f", &p2);
    float media = 0.4 * p1 + 0.6 * p2;
    printf("%.2f\n", media);
    soma += media;
  }
  printf("%.2f\n", soma / n);

  return 0;
}
