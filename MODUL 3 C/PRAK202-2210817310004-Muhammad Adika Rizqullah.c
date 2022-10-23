#include <stdio.h>

int main(){
float nilaiSatu, nilaiDua;

printf("Masukkan Nilai Pertama:");
scanf("%f", &nilaiSatu);
printf("Masukkan Nilai Kedua:");
scanf("%f", &nilaiDua);

printf("Hasil dari penjumlahan nilai pertama\"%.0f\" dan nilai kedua \"%.1f\" adalah\"%.2f\"", nilaiSatu, nilaiDua, nilaiSatu+nilaiDua);
}
