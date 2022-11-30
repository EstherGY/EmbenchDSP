
#ifndef FIR_H
#define FIR_H

/*
 * FIR filter implementation function.
 *
 * Params:
 *      input_data  : The input data.
 *      output_data : An array used to return the result.
 *      filter_data : FIR filter data.
 *      data_size   : Length of input_data.
 *      out_size    : Length of output_data.
 *      filter_size : Length of filter_data.
 */
void fir(float* input_data,float* output_data,float* filter_data,int data_size,int out_size,int filter_size);

#endif // FIR_H