#include<stdio.h>
int is_prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
int n=773;   //Change your number here 
is_prime(n)? printf("It's prime"): printf("It's not  prime");

}