
#ifndef FIR_UTIL_H
#define FIR_UTIL_H

/*
 * Prints an array of given size
 *
 * Params:
 *      arr_in  : Array to print.
 *      size    : Length of the array.
 */
void print_array(float* arr_in, int size);

/*
 * Tests for equality with allowed pointwise error tolerance epsilon
 *
 * Params:
 *      test_data   : Data to test.
 *      check_data  : The expected data.
 *      data_length : Length of the data.
 *      epsilon     : Allowed pointwise error.
 */
int check_if_equal(float* test_data, float* check_data, int data_length, float epsilon);

#endif // FIR_UTIL_H