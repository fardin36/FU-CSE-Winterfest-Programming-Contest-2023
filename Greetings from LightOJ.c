// https://vjudge.net/contest/596503
// https://lightoj.com/problem/greetings-from-lightoj

#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        int sum = a+b;
        printf("Case %d: %d\n", i, sum);
    }
    return 0;
}
