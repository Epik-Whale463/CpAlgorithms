#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int steins_gcd(int a, int b){

    if(!a || !b)
        return (a | b);
    unsigned shift = __builtin_ctz(a | b); // calculate the number of common tailing 0s of a and b
    a >>= __builtin_ctz(a);
    do{
        b >>= __builtin_ctz(b);
        if(a>b)
            swap(&a,&b);
        b -=a;
    }while(b);

    return a << shift;
}

int main(void){

    int a,b;
    scanf("%d %d",&a, &b);
    int gcd = steins_gcd(a,b);
    printf("GCD is %d\n",gcd);
    return 0;
}