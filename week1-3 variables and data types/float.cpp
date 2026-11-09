#include <stdio.h>
int main()
{
    int var = 4/9;
    printf("%d\n", var);

    float var1 = 10/9;
    printf("%.2f\n", var1);

    float var2 = 4.0f/9.0;		//by default they are double constants, adding f make them float and L make them long double
    printf("%.2f\n", var2);
}
