//Вариант 6
//адаптируется

#include <stdio.h>
#include <math.h>

int main()

{
    double x = 0.0, y;
    double eps;
    double h;
printf("x\t\ty\n");
do

while(x >=0.0 && x <=1.0)
{
    y=8 * pow(x, 3) * cos(x);
    printf("%f\t%f\n", x, y);
    x = x + h;
}

return 0;
}