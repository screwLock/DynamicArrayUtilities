#include <stdio.h>

int main(){

int *test = createDynArr(0);
int *t3 = createDynArr(5000);
printSize(t3);
appendValue(test, 5);
appendValue(test, 4);
appendValue(test, 7);
appendValue(test, 10);
appendValue(test, 57);

printArr(test);
deleteArr(&t3);
//printf("%d", t3);
}
