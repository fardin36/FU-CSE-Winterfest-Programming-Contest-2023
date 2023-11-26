// https://codeforces.com/problemset/problem/1296/A

#include<stdio.h>
int main(){
    int t, n, s, x;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        s=0;
        scanf("%d",&n);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &x);
            s+=x;
        }
        if (s%2!=0)
        {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;    
}
