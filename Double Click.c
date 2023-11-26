// https://atcoder.jp/contests/abc297/tasks/abc297_a?lang=en

#include <stdio.h>
int main()
{
    int n, d, t = -1;
    scanf("%d %d", &n, &d);
    int time[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &time[i]);
        if (i > 0)
        {
            if (time[i] - time[i - 1] <= d)
            {
                if (t==-1)
                    t = time[i];
            }
        }
    }
    printf("%d\n", t);
    return 0;
}





// #include <stdio.h>
// int main()
// {
//     int n, d, t = -1;
//     scanf("%d %d", &n, &d);
//     int time[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &time[i]);
//         if (i > 0)
//         {
//             if (time[i] - time[i - 1] <= d && t == -1)
//                 t = time[i];
//         }
//     }
//     printf("%d\n", t);
//     return 0;
// }
