#include<stdio.h>
#include"max.h"
#include<stdlib.h>
int main(int argc,char *argv[]){
if(argc<3 || argc >3){
printf("Max function usage:%s value1 value2\n",argv[0]);
return 1;
}

int a = atoi(argv[1]);
int b = atoi(argv[2]);
int temp=max(a,b);
printf("hello world test max value function\n");
printf("max value is:%d\n",temp);


return 0;

}
