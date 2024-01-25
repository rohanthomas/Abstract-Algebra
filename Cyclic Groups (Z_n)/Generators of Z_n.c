#include <stdio.h>
int gcd(int x, int y){
int r=1;
while (r != 0) {
        r = x % y;
        x = y;
        y = r;
    }


return x;
}

int main() {
    int n,count=0;
    printf("Enter the number of elements 'n' in Z_n: ");
    scanf("%d",&n);

printf("The generators are:\n");

    for(int i=1; i<n;i++){
        if(gcd(n,i)==1){
            printf("%d, ",i);
            count=count+1;
        }
    }
    printf("\nThe number of generators of Z_%d is  %d",n,count);
    return 0;

}
