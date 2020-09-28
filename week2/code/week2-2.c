#include<stdio.h>
int main(){
        int i = 1,j = 1;
        for(; i<10; i++){
                j = 1;
                for(; j<10; j++){
                        if(j<i)continue;
                        printf("%d * %d = %d;",i,j,i*j);
                }
                printf("\n");
        }
        //return 0;
}