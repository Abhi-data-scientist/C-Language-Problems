// A B C D 
// A B C D 
// A B C D 
// A B C D 
#include<stdio.h>
int main(){
    
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%c ",64+j);
        }
        printf("\n");
    }
    
    return 0;
}

