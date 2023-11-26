// https://lightoj.com/problem/opposite-task

#include<stdio.h>
int main(){
    int t, a, b;
    scanf("%d",&t);
    for (int  i = 0; i < t; i++)
    {
        b = 0;
        scanf("%d",&a);
        if (a>=10)
        {
            b = a - 10;
            a -= b;
        }
        printf("%d %d\n", b, a);
    }
    return 0;
}