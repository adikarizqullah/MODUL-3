#include <stdio.h>

int main(){
float a, b, i, j, x, y;

printf("Input\n");
scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);
printf("\nOutput\n");
printf("%.3f\n", (a-b)*(i/j)-(x+y));
main();
}
