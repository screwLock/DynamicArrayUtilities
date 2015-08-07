#include <stdio.h>

/*************************************************
Function: createDynArr()
Purpose:  To create a dynamic array (type int)
Input:    The size of the array needed
Output:   Returns a pointer to the array if
          creation was successful.  Returns
          -1 if an error occurred.

Other Changes:  The last value is set to NULL
                to mark it as the last entry.

*************************************************/

int *createDynArr(int size){

    int *dynArr = (int*) malloc(size * sizeof(int));

    //we should check that malloc was actually
    //successful(that we don't get a null pointer

    if(dynArr == NULL){
    fprintf(stderr,"ERROR:  Array was not successfully created.\n");
    return -1;
    }

    //set the last entry to NULL
    *(dynArr+size)=NULL;

    //return a pointer to newly allocated memory.

    return dynArr;

}


/*************************************************
Function: findSize()
Purpose:  Determines the size of the array.
Input:    A pointer to the array
Output:   Returns the size of the array.

Other Changes: None

*************************************************/


int findSize(int *arr){

    int count = 0;
    while(*arr!=NULL){
        arr++;
        count++;
    }
    return count;

}

/*************************************************
Function: printSize()
Purpose:  Prints the size of the array to the console.
Input:    The array
Output:   No return value.  Simply prints the current size
          of the array.

Other Changes:  None

*************************************************/

void printSize(int *arr){

    int size = findSize(arr);
    printf("This is the size of your array: %d\n",size);

}

