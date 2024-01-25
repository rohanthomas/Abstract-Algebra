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
    printf("Enter your n: ");
    scanf("%d",&n);

    for(int i=1; i<n;i++){
        if(gcd(n,i)==1){
            count=count+1;
        }
    }

    printf("The value of Euler's Totient Function phi(%d)= %d",n,count);
    return 0;

}
