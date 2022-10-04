#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int maxoftwo(int p, int q)
{
    if (p>q)
    return p;
    else
    return q;
}
int max_of_four(int a, int b, int c, int d)
{
    int r =maxoftwo(a,b);
    int s =maxoftwo(c,d);
    return maxoftwo(r,s);

}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
