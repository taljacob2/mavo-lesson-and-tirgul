#include <stdio.h>

#define ARRAY_SIZE 10


int countContainedElement(const int *array, const int arraySize,
                          const int elementToCount) {
    int count = 0;

    for (int i = 0; i < arraySize; i++) {
        if (array[i] == elementToCount) { count++; }
    }

    return count;
}

//int *getOnlyPositiveElementsAsAnArray(const int *sourceArray, const int sourceArraySize){
//    int positiveArray[sourceArraySize];
//    for(int i = 0; i < sourceArraySize; i++){
//        if(sourceArray[i] > 0){
//            positiveArray[i] = sourceArray[i];
//        }
//    }
//    return  positiveArray;
//}


int main() {

    int sourceArray[ARRAY_SIZE] = {1, 4, 27, 5, 125, -80, -16, 2, 400, 1000};

    //    int *positiveArray = getOnlyPositiveElementsAsAnArray(array, ARRAY_SIZE);

    int positiveArray[ARRAY_SIZE];

    int positiveArrayIterator = 0;

    for (int i = 0; i < ARRAY_SIZE;i++) {
        if (sourceArray[i] > 0) {
            positiveArray[positiveArrayIterator] = sourceArray[i];
            positiveArrayIterator++;
        }
    }

    for (int i = 0; i < positiveArrayIterator; i++) {
        printf("%d, ", positiveArray[i]);
    }


    //    printf("%ld", sizeof(array));

    //    printf("%d\n", countContainedElement(array, ARRAY_SIZE, 27));

    return 0;
}