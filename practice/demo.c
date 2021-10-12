#include<stdio.h>
int main(){
    
    int i,j,n;
    n=5;
    for (int i = 1; i <= n; i++)
    {
        for ( j = 1; i <= n; j+=i)
        {
            printf("*");
        }
        printf("\n");
        
    }
    

    return 0;
}