#include <stdio.h>
int main() {
int a;
char *pt, ch1, ch2;
double v=4.0;

a = 5;
ch1 = 'R';
pt = &ch1;
ch2 = *pt;
printf("%f", v + 8.3);
v = (4*a) + ((double)ch1);

printf("\n%d", ch1);
printf("\n%d", ch2);
printf("\n%d", pt);

return 0;
}
