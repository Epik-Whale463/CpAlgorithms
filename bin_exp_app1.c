#include <stdio.h>

/* Compute (x pow n) mod m in O(log n) time rather than O(n) time
*/

long long binpow(long long a, long long b, long long m){
    a %=m;
    long long res = 1;
    while(b>0){
        if (b & 1) res = res *a %m;
        a = a * a % m;
        b >>= 1; // keep on halving b till it becomes 0
    }
    return res;
}

int main(void){

    long long a, b, m;
    scanf("%lld %lld %lld",&a, &b, &m);
    long long res =binpow(a, b,m);
    printf("%lld", res); 
    return 0;
}