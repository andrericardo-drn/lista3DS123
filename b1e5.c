#include <stdio.h>
#include <math.h>

float CalcSphereVol(int radius) {
  float pi = M_PI;
  return ((4.0 / 3.0) * pi * pow(radius, 3));
}

int main() {
  int num;
  printf("Raio -> ");
  scanf("%d", &num);
  printf("Volume -> %.2f\n", CalcSphereVol(num));
  return 0;
}
