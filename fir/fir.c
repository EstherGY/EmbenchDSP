


#include "fir.h"


/*
 * FIR filter implementation function
 *
 * Params:
 *      input_data  : The input data.
 *      output_data : An array used to return the result.
 *      filter_data : FIR filter data.
 *      data_size   : Length of input_data.
 *      out_size    : Length of output_data.
 *      filter_size : Length of filter_data.
 */
void fir(float* input_data,float* output_data,float* filter_data,int data_size,int out_size,int filter_size){

    // padding output/setting to zero, noticed inconsistencies in undefined arrays
    for (int i = 0; i < filter_size; i++){
        output_data[i] = 0;
    }
        
    // implementing filter for any size filter. input_size > filter_size
    //  general concept of filter: output_data[i] = b[0] * input_data[i] + b[1] * input_data[i - 1] + b[2] * input_data[i - 2] + b[3] * input_data[i - 3] + ...;
    for (int i = filter_size; i < data_size; i++) {
        float sum = 0;
        for (int j = 0; j < filter_size; j++) {
            sum += filter_data[j] * input_data[i - j];
        }
        output_data[i] = sum;
    }
}