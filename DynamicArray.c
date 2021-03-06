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
Purpose:  Appends one dynamic array to the end of
          another dynamic array.
Input:    Pointers to the 1)array being appended
                          2)array to be appended
Output:   Returns 1 if successful, -1 if fail.

Other Changes:  None

*************************************************/

int* appendArray(int *arr, int *data){

    int sizeArr = findSize(arr);
    int sizeData = findSize(data);
    int *largerArr = realloc(arr, sizeArr+sizeData);

    //check that realloc worked
    if(largerArr == NULL){
        fprintf(stderr, "Array cannot be appended.\n");
        return -1;
    }

    //make the old pointer point to memory
    arr = largerArr;

    //adjust the size variable
    *(arr)+=sizeData;
    //size+=sizeData;

    //append the values
    for(int i =0; i<=sizeData; i++){
        *(arr+sizeArr+i) = *(data+i);
    }

    return arr;

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
        fprintf(stderr, "Value cannot be appended.\n");
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
          of the contents of the dynamic array
          and its length.

Other Changes:  None

*************************************************/
void printArr(int *arr){

    int size = findSize(arr);
    printf("The length of the array: %d\n", size);

    printf("These are the array values:\n");
    for(int n = 1; n<=size; n++){
        printf("%d\n",*(arr+n));
    }

}

/*************************************************
Function: deleteArr()
Purpose:  Delete the array and free the memory
Input:    Double Pointer to the dynamic array
Output:   Return

Other Changes:  Memory is freed.

*************************************************/
void deleteArr(int **arr){

    free(*arr);
    *arr = NULL;
    printf("Dynamic Array Deleted.");
}

/*************************************************
Function: quickSortArray()
Purpose:  Sort the Array using quicksort algorithm
Input:    Pointer to the Dynamic Array
Output:   No return value, just sorts the array

Other Changes:  Just a sort.

*************************************************/

void quickSortArray(int *arr){


    int size = findSize(arr);
}
