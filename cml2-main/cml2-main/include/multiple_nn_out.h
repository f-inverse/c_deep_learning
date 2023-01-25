#ifndef _MULTIPLE_NN_OUT_H
#define _MULTIPLE_NN_OUT_H

double single_in_single_out(double input, double weight);
double multiple_input_single_output(double * input, double * weight, int LEN);
void single_in_multiple_out_nn(double * input_scaler, double * weight_vector, double * output_vector, int LEN);
void multiple_input_multiple_output_nn(double * input_vector,
                                       int INPUT_LEN,
                                       double * output_vector,
                                       int OUTPUT_LEN,
                                       double weight_matrix[][IN_LEN]);

#endif
