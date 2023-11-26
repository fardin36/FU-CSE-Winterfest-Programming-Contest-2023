// https://codeforces.com/problemset/problem/1811/A

#include <stdio.h>
#include <string.h>
int main()
{
    int t, n, f;
    char d;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        f = 0;
        scanf("%d %c", &n, &d);
        char number[n + 2];
        scanf(" %s", &number);
        for (int i = 0; i < n; i++)
        {
            if (number[i] < d)
            {
                char temp = number[i];
                number[i] = d;
                for (int j = i + 1; j < n + 1; j++)
                {
                    char x = number[j];
                    number[j] = temp;
                    temp = x;
                }
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            number[n] = d;
        }
        for (int j = 0; j < n+1; j++)
        {
            printf("%c", number[j]);
        }
        printf("\n");
        // puts(number);
    }

    return 0;
}