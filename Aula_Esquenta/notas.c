/*
 * main.c
 * Copyright (C) 2018 lopespt <lopespt@UX501VW>
 *
 * Distributed under terms of the MIT license.
 */
#include <stdio.h>

int main(int argc, const char *argv[]) {

  float soma = 0;
  int i;
  int n;
  printf("Quantos alunos?\n");
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    printf("insira a nota do aluno %d\n", i + 1);
    float nota;
    scanf("%f", &nota);
    soma = soma + nota;
  }

  printf("%.2f\n", soma / n);

  return 0;
}
