#include <stdio.h>

int main(){
float jariJari, tinggiBejana, Volume, Luas, Keliling, phi;


printf("Input\n");
scanf("%f %f", &jariJari, &tinggiBejana);

Volume = 22*jariJari*jariJari*tinggiBejana/7;
Luas = 2*22*jariJari*(jariJari+tinggiBejana)/7;
Keliling = 2*22*jariJari/7;

printf("\nOutput\n");
printf("Volume = %.2f\n", Volume);
printf("Luas = %.2f\n", Luas);
printf("Keliling = %.2f\n", Keliling);
main();
}
