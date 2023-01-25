#ifndef _SIMPLE_NN_H
#define _SIMPLE_NN_H
double single_in_single_out(double input, double weight);
double multiple_input_single_output(double * input, double * weight, int LEN);

void single_in_multiple_out_nn(double input_scaler, double * weight_vector, double * output_vector, int LEN);
#endif