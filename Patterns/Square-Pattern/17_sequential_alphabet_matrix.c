// A B C D 
// E F G H 
// I J K L 
// M N O P 
#include<stdio.h>
int main(){
    
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    int temp=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%c ",64+temp);
            temp++;
        }
        printf("\n");
    }
    
    return 0;
}

