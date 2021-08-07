#include"max.h"
int main(){
#ifdef TEST_DEBUG
max();
#else
printf("do not define call max fution \n");
#endif
}
