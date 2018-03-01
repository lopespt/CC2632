/*
 * maior.c
 * Copyright (C) 2018 lopespt <lopespt@UX501VW>
 *
 * Distributed under terms of the MIT license.
 */

#include <stdio.h>

int main(int argc, const char *argv[]) {
  int n;
  scanf("%d", &n);
  int i;
  float maior;
  scanf("%f", &maior);
  for (i = 0; i < n - 1; i++) {
    float novo;
    scanf("%f", &novo);
    if (novo > maior) {
      maior = novo;
    }
  }
  printf("%f\n", maior);

  return 0;
}
