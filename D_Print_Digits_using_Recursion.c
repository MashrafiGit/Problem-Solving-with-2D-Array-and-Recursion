#include <stdio.h>

void separate(int x)
{
    if (x == 0)
    {
        return;
    }

    int last = x % 10;
    separate(x / 10);
    printf("%d ", last);
}

int main()
{
    int n;
    scanf("%d", &n);

    int a;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);

        if (a == 0)
        {
            printf("0");
        }
        else
        {
            separate(a);
        }
        printf("\n");
    }

    return 0;
}
