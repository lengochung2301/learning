#include <stdio.h>
int main()
{
    int s = 0;
    for (int i = 50; i < 51 && i > 29; i--)
    {
        if (i % 2 == 0)
        {
            s += i;
        }
    }
    printf("\nTong cac so chan la : %d\n", s);
}
