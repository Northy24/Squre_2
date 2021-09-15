#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int m = n;
    int i = m;
    while(n != 0){
        printf("*");
        i--;
        if(i == 0){
            printf("\n");
            i = m;
            n--;
        }
    }
    return 0;
}
