#include <stdio.h>

/* 
two integers a and b are passed to gcd(a,b) and this happens
we recursively call gcd(b, a mod b) until the value of b is 0 
at which point , that current a value is the GCD we are looking for.
*/

int euclidean_gcd(int a, int b){
    if (b == 0) 
        return a;
    else
        euclidean_gcd(b, a % b);
}

int main(void){

    int a, b;
    scanf("%d",&a);
    scanf("%d",&b);
    int gcd = euclidean_gcd(a,b);
    printf("The GCD of %d and %d is : %d\n",a,b,gcd);

    return 0;
}