/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <math.h>
#include <stdio.h>
void main() {
 int a, b, c, d, r1, r2, real, imag;
 printf("Enter coefficients a, b and c: ");
 scanf("%d %d %d", &a, &b, &c);
 d = b * b - 4 * a * c;
 if (d > 0) {
 r1 = (-b + sqrt(d)) / (2 * a);
 r2 = (-b - sqrt(d)) / (2 * a);
 printf("r1 = %d and r2 = %d", r1, r2);
 }
 else if (d == 0) {
 r1 = r2 = -b / (2 * a);
 printf("r1 = r2 = %d;", r1);
 }
 else {
 real = -b / (2 * a);
 imag = sqrt(-d) / (2 * a);
 printf("r1 = %d+%di and r2 = %d-%di", real, imag, real, imag);
}
 }