// https://codeforces.com/problemset/problem/50/A

#include<stdio.h>
int main(){
    int m, n, o = 1;
    scanf("%d%d", &m, &n);
    if (m%2!=0)
    {
        m--;
        o = 0;
    }
    int c = (m*n)/2;
    if (o==0)
        c+=(n/2);
    printf("%d\n",c);
    
    return 0;
}
