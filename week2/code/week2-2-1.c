#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
        int ret = 0;
        ret = write(1,"hello world!\n",13);
        printf("ret = %d\n",ret);
}