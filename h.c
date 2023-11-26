// https://codeforces.com/problemset/problem/1296/A

#include<stdio.h>
int main(){
    int t, n, s;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        s=0;
        scanf("%d",&n);
        int x[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &x[i]);
            s+=x[i];
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