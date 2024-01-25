//Order of an element in Zn

#include<stdio.h>
int main(){
int a=6,n=7,sum=0;


for(int i=1;i<=n;i++){
    sum=(sum+a)%n;
    if(sum==0){
        printf("The order of %d is %d",a,i);
        if(i==1){
            break;
        }
    }
}






    return 0;
}