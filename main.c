#include <stdio.h>

int main(){

int *test = createDynArr(0);
int *t3 = createDynArr(5000);
printSize(t3);
appendValue(test, 5);
printArr(test);
deleteArr(&t3);
//printf("%d", t3);
}
