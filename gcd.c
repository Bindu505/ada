#include <stdio.h>
int main() {
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    printf("G.C.D of %d and %d using recurrsion is %d.\n", n1, n2, gcdr(n1, n2));
    printf("G.C.D of %d and %d using non-recurrsion is %d.", n1, n2, gcd(n1, n2));
    return 0;
}

int gcdr(int n1, int n2) {
    if (n2 != 0)
        return gcd(n2, n1 % n2);
    else
        return n1;
}
int gcd(int n1,int n2)
{
int r;
while(n2!=0)
{
r=n1%n2;
n1=n2;
n2=r;
}