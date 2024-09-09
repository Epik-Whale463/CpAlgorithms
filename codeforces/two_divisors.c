#include <stdio.h>

long long int gcd(long long int a, long long int b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}

long long int lcm(long long int a, long long int b) {
    return (a * b) / gcd(a, b);
}

long long int solve(long long int a, long long int b) {
    if (b % a == 0) return (b * b) / a;
    else return lcm(a, b);
}

int main(void) {
    int t;
    long long int a, b, x;

    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%lld %lld", &a, &b);
        x = solve(a, b);
        printf("%lld\n", x);
    }

    return 0;
}
