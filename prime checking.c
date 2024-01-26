#include<stdio.h>
# include <math.h>  #An exercise is to implement sqrt() without math.h library 

int main(){
    int n,flag=0;
    printf("Enter a number: ");
    scanf("%d",&n);


    

    for(int i=2;i<=sqrt(n)+1;i++){ 
        if(n%i==0){
            flag=1;
        }
    }

    if(flag==1){
        printf("The %d is a not prime",n);
    }
    else{
        printf("The %d is a prime",n);
    }
    return 0;
}