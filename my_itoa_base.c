#include <stddef.h>

size_t my_strlen(const char *s)
{
    const char *st;
    for (st = s; *st; ++st)
    {
        continue;
    }
    return (st - s);
}
void renverse(char s[])
{
    int i, j;
    char c;

    for (i = 0, j = my_strlen(s) - 1; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

char *my_itoa_base(int n, char *s, const char *base)
{
    int i = 0;
    size_t len = my_strlen(base);
    if (n > 0)
    {
        int r = 0;
        while (n != 0)
        {
            r = n % len;
            s[i++] = base[r];
            n = n / len;
        }
        s[i] = '\0';
    }
    else if (n == 0)
    {
        s[0] = base[0];
        s[1] = 0;
    }
    else
    {
        n = -n;
        int x = 0;
        do
            s[x++] = base[n % len];
        while ((n = n / len) > 0);
        s[x] = 45;
        s[x + 1] = 0;
    }
    renverse(s);
    return s;
}
