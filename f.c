// https://codeforces.com/problemset/problem/734/A

#include<stdio.h>
int main(){
    int n, a=0, d=0;
    scanf("%d", &n);
    char st[n+1];
    scanf(" %s", &st);
    for (int i = 0; i < n; i++)
    {
        if (st[i] == 'A')
            a++;   
        else
            d++;
    }
    if (a>d)
        printf("Anton\n");
    else if(d>a)
        printf("Danik\n");
    else
        printf("Friendship\n");
    return 0;
}