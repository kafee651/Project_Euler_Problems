#include <stdio.h>

int main(){
    int i, j, sum;
    
    sum = 0;    
    for(i = 1;i <= 100){
        if(i%3 == 0 || i%5 == 0){
            sum += i;
        }
    }
    printf("%d", sum);
    return(0);
}
        
