//Code under development
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements 'n':");
    scanf("%d",&n);
    printf("+ ");
    for(int i=0;i<n;i++){
        printf("%d ",i);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",i);
        for(int j=0;j<n;j++){
            int c=(i+j)%n;
            printf("%d ",c);
        }
        printf("\n");
    }

return 0;
}
