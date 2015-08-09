#include <stdio.h>

int main(){

int *test = createDynArr(5);
int *t3 = createDynArr(0);
printSize(t3);
printSize(test);

//currently, error when appendValue to both arrays
//but not when only done to one.
appendValue(test, 5);
appendValue(test, 4);
appendValue(test, 7);
appendValue(test, 10);
appendValue(t3, 57);
//appendValue(t3, 100);
//appendValue(t3, 100);
//appendValue(t3, 100);
//appendValue(t3, 100);
//appendValue(t3, 100);
//error with appendValue and

//printArr(test);
//appendArray(test, t3);

printArr(test);
printSize(test);

//printf("%d", t3);
}
