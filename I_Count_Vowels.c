#include <stdio.h>

int countV(char s[], int i)
{
    if (s[i] == '\0')
    {
        return 0;
    }

    int cnt = countV(s, i + 1);

    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
    {
        return cnt + 1;
    }

    return cnt;
}

int main()
{
    char s[201];
    fgets(s, 201, stdin);

    int cnt = countV(s, 0);
    printf("%d", cnt);
    return 0;
}