

#include <stdio.h>

#include "fir_util.h"

/*
 * Prints an array of given size
 *
 * Params:
 *      arr_in  : Array to print.
 *      size    : Length of the array.
 */
void print_array(float *arr_in, int size){
    printf("{ ");
    for (int i = 0; i < size; i++){
        printf("%f, ", *arr_in);
        arr_in++;
    }
    printf(" }\n");
}

/*
 * Tests for equality with allowed pointwise error tolerance epsilon
 *
 * Params:
 *      test_data   : Data to test.
 *      check_data  : The expected data.
 *      data_length : Length of the data.
 *      epsilon     : Allowed pointwise error.
 */
int check_if_equal(float *test_data, float *check_data, int data_length, float epsilon){
    int match = 1;
    for (int i = 0; i < data_length; i++){
        if ((*(test_data + i) < *(check_data + i) - epsilon) || (*(test_data + i) > *(check_data + i) + epsilon)){
            match = 0;
        }
    }
    return match;
}
