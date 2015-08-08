#include <stdio.h>

/*************************************************
Function: createDynArr()
Purpose:  To create a dynamic array (type int)
Input:    The size of the array needed
Output:   Returns a pointer to the array if
          creation was successful.  Returns
          -1 if an error occurred.

Other Changes:  None

*************************************************/

int *createDynArr(int size){

    //Create an extra block of memory.
    //The first block will be a hidden block
    //that holds the size of the array.
    int sizeHolder = size + 1;
    int *dynArr = malloc(sizeHolder * sizeof(int));
    *(dynArr)=size;

    //we should check that malloc was actually
    //successful(that we don't get a null pointer

    if(dynArr == NULL){
        fprintf(stderr,"ERROR:  Array was not successfully created.\n");
        return -1;
    }

    //return a pointer to newly allocated memory.
    return dynArr;

}


/*************************************************
Function: findSize()
Purpose:  Determines the size of the dynamic array.

        !!!!!  DO NOT USE WITH STATIC ARRAY !!!!

Input:    A pointer to the array
Output:   Returns the size of the array.

Other Changes: None

*************************************************/


int findSize(int *arr){

  return *(arr);

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

    printf("This is the size of your array: %d\n",*(arr));

}


/*************************************************
Function: appendArray()
Purpose:  Appends an array to the end of the array.
Input:    Pointers to the 1)array being appended
                          2)array to be appended
Output:   Returns 1 if successful, -1 if fail.

Other Changes:  None

*************************************************/

void appendArray(int *arr, int *data){

    //Kill the bottom and use realloc() instead!!!!!

    int size = findSize(arr);
    int *newArr;
    newArr = arr+size;

    //append the data
//    for(int dataSize=findSizeArray(data)-1;
//        dataSize>=0;dataSize--){

//        *(newArr+dataSize) = data[dataSize];

//        }

}

/*************************************************
Function: appendValue()
Purpose:  Append a single value to the end of the array.
Input:    Pointers to the 1)array being appended
                          2)value to be added
Output:   Returns a pointer to the newly
          sized array, -1 if failed.

Other Changes:  None

*************************************************/

int* appendValue(int *arr, int value){

    int size = findSize(arr);
    int *largerArr = realloc(arr, size+1);

    //check that realloc worked
    if(largerArr == NULL){
        fprintf(stderr, "Value cannot be appended.");
        return -1;
    }

    //make the old pointer point to memory
    arr = largerArr;

    //adjust the size variable
    *(arr)+=1;
    size+=1;
    //change the value
    *(arr+size)=value;
    return arr;

}

/*************************************************
Function: printArr()
Purpose:  Print the contents of the dynamic array
Input:    Pointers to the dynamic array
Output:   No return value.  Just a print-out
          of the contents of the dynamic array.

Other Changes:  None

*************************************************/
void printArr(int *arr){

    int size = findSize(arr);
    for(int n = 1; n<=size; n++){
        printf("These are the array values:\n");
        printf("%d\n",*(arr+n));
    }

}
