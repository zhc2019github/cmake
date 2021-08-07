#include<stdio.h>
#include <dlfcn.h>
int main(){

        void *handle = NULL;
        int (*getMax)();
        handle = dlopen("libMathFunctions.so",RTLD_LAZY);
        if(handle == NULL)
        {
            printf("dll loading error.\n");
            return 0;
        }
        getMax = (int(*)())dlsym(handle,"max");
        if(dlerror()!=NULL)
        {
           printf("fun load error.\n");
           return 0;
        }
        printf("%d\n",getMax());
        printf("hello world\n");
}
