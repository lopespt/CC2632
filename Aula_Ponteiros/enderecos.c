/*
 * enderecos.c
 * Copyright (C) 2018 lopespt <lopespt@UX501VW>
 *
 * Distributed under terms of the MIT license.
 */
#include <stdio.h>

int main(int argc, const char *argv[]) {
  int a = 9;
  int b = 10;
  int c = 11;
  int d = 12;
  a++;
  b++;
  c++;
  d++;
  printf("%u\n", a);
  printf("%u\n", b);
  printf("%u\n", c);
  printf("%u\n", d);
  printf("%u\n", &a);
  printf("%u\n", &b);
  printf("%u\n", &c);
  printf("%u\n", &d);

  int *p;
  p = &a;

  return 0;
}
