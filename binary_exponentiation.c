#include <stdio.h>


//recursive implementation
long long bin_exp_rec(int a, int n){
    if (n==0) return 1;
    long long temp_val = bin_exp(a, n/2);
    if (n%2) {temp_val =temp_val*temp_val* a;}
    else return temp_val * temp_val;
}

//iterative implementation
long long bin_exp_recur(){
    
}
int main(){
    int a,n;
    scanf("%d %d",&a,&n);
    long long res = bin_exp_rec(a,n);
    printf("Ans is %d\n",res);
    return 0;
}