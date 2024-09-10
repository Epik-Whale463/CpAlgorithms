#include <stdio.h>
#include <stdlib.h>
/* 
two integers a and b are passed to gcd(a,b) and this happens
we recursively call gcd(b, a mod b) until the value of b is 0 
at which point , that current a value is the GCD we are looking for.
*/

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int euclidean_gcd(int a, int b){
    if (b == 0) 
        return a;
    else
        euclidean_gcd(b, a % b);
}

int gcd_non_recursive(int a, int b){
    while(b){
        a = a %b;
        swap(&a,&b);
    }
    return a;
}

int main(void){

    int a, b;
    scanf("%d",&a);
    scanf("%d",&b);
    int gcd = euclidean_gcd(a,b);
    int gcd_non_rec = gcd_non_recursive(a,b);

    printf("The GCD of %d and %d is : %d\n",a,b,gcd);
    printf("(iterative) The GCD of %d and %d is : %d\n",a,b,gcd_non_rec);


    return 0;
}
