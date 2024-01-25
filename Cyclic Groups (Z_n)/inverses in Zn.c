#include<stdio.h>

/*This code compute inverses of elements in cyclic group Z_n */

int main(){
int n;
printf("Enter the number of elements 'n' in Z_n: ");
scanf("%d",&n);

printf("The inverse of 0 is 0\n");
for(int i=1;i<n;i++){
printf("The inverse of %d is %d \n",i,n-i);
}

return 0;
}
