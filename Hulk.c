// https://codeforces.com/problemset/problem/705/A

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        if (i%2!=0)
            printf("I hate that ");
        else
            printf("I love that ");
    }
    if (n%2!=0)
        printf("I hate it\n");
    else
        printf("I love it\n");
    return 0;
}
