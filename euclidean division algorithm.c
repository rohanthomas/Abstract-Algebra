#include <stdio.h>

int main() {
    int a,b,temp,r=1,count=0;

    printf("Enter your first number: ");
    scanf("%d",&a);

    printf("Enter your second number: ");
    scanf("%d",&b);

    temp=a;
//swap a,b if a is bigger than b  else don't
    
    if(a<b){
        a=b;
        b=temp;
    }

/*Lemma: Let a=bq+r, then gcd(a,b)=gcd(b,r)
We iteratively use this lemma until we reach a zero remainder.

*/

    while (r != 0) {
        r = a % b;
        a = b;
        b = r;
        count=count+1;
    }
    printf("The gcd is %d\n", a);
    printf("The number of steps taken is %d\n", count-1);


    return 0;
}
