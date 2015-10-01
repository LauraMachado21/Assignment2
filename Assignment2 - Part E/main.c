#include <stdio.h>

//Note: the largest factorial possible is 12 factorial. Afterwards, the system begins to fail.

long factorial(long n){
    
    unsigned long long factorial=1;
	int i;
    
    if(n==0){
        
        return factorial;
        
    }else{
    
        for(i=1;i<=n;i++){
            factorial=factorial*i;
        }
        
        return factorial;
    }
}

int main(void)
{
    unsigned long long Array[20];
    int i;
    
    printf("Input 20 values: ");
    
    for(i=0;i<20;i++){
        
        scanf("%llu", &Array[i]);
        
    }

    for(i=0;i<20;i++){
        
        Array[i]=factorial(Array[i]);
        
        printf("%llu, ", Array[i]);
    }

	printf("\n\nNote: the largest factorial possible is 12 factorial. Afterwards, the system begins to fail.");
    
    return 0;
}
