#include<stdio.h>
int main(){

int a,b,m;
printf("Enter your modular base: \n");
scanf("%d",&m);
printf("Enter the numbers: \n");
scanf("%d   %d",&a,&b);
(a%m==b%m)? printf("%d is congruent to %d modulo %d",a,b,m):printf("%d is not congruent to %d modulo %d",a,b,m);



return 0;
}
