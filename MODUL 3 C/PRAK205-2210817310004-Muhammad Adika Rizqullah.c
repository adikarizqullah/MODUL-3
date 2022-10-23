#include <stdio.h>

int main(){
float A, B, C, Keliling, Luas;

scanf("%f %f", &A, &B);

C = sqrt(B*B-A*A);
Keliling = A+B+C;
Luas = 0.5*C*A;

printf("Alas = %.0f cm\n", C);
printf("Tinggi = %.0f cm\n", A);
printf("Keliling = %.0f cm\n", Keliling);
printf("Luas = %.0f cm^2\n", Luas);

}
