#include <stdio.h>

int main()
{
    int i = 5;
    int var = sizeof(i++);		// i++ is not evaluated according to C99 Standard
    printf("%d %d", i, var);	// Output: 5 4
    return 0;
}
