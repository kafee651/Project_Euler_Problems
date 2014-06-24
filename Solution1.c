#include <stdio.h>

int main(){
    int i, j, sum;
    
    sum = 0;
    for(i = 1;i < 100;i++){
        if(i%3 == 0 || i%5 == 0){
            sum += i;
        }
    }
    printf("%d\n", sum);
    sum = 3 * 33 * 17 + 5 * 19 * 10 - 15 * 3 * 7;
    printf("%d", sum);
    return(0);
}    
