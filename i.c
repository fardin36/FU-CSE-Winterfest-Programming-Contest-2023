// https://codeforces.com/problemset/problem/1807/B

#include <stdio.h>
int main()
{
    int t, n, m, b;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        int arr[n], c = 0, x = 0, y = 0, m = 0, b = 0;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
            if (arr[j] % 2 == 0)
                x++;
            else
                y++;
        }
        for (int j = 0; j < n; j++)
        {
            for (int k = j; k < n; k++)
            {
                if (arr[j] % 2 == 0 && arr[k] % 2 == 0 && arr[j] < arr[k])
                {
                    int temp = arr[j];
                    arr[j] = arr[k];
                    arr[k] = temp;
                }
                if (arr[j] % 2 != 0 && arr[k] % 2 != 0 && arr[j] > arr[k])
                {
                    int temp = arr[j];
                    arr[j] = arr[k];
                    arr[k] = temp;
                }
            }
        }
        int pos[x], neg[y], p = 0, q = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j]%2==0)
            {
                pos[p] = arr[j]; p++;
            }
            else {
                neg[q] = arr[j]; q++;
            }
        }
        p = 0; q = 0;
        for (int j = 0; j < n; j++)
        {
            if (j%2==0 && p<x)
            {
                arr[j] = pos[p]; p++;
            }
            else if (j%2!=0 && q<y) {
                arr[j] = neg[q]; q++;
            }
            else if (q<y) {
                arr[j] = neg[q]; q++;
            }
            else{
                arr[j] = pos[p]; p++;
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (arr[j] % 2 == 0)
                m += arr[j];
            else
                b += arr[j];
            if (i > 0 && m <= b)
            {
                c = 1;
                break;
            }
        }
        if (c == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}