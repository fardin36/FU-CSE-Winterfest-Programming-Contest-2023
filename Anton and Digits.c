// https://codeforces.com/problemset/problem/734/B

#include<stdio.h>
int main(){
    int k2, k3, k5, k6, n1=0, n2=0;
    scanf("%d%d%d%d", &k2, &k3, &k5, &k6);
    while (k2>0 && k5>0 && k6>0)
    {
        n1++;
        k2--; k5--; k6--;    
    }
    while (k2>0 && k3>0)
    {
        n2++;
        k2--; k3--;
    }
    printf("%d\n", n1*256+n2*32);
    return 0;
}
