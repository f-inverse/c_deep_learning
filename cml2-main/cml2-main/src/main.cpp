#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define IN_LEN 3
#define OUT_LEN 3
#include "../include/multiple_nn_out.h"
#include "multiple_nn_out.cpp"
#define Sad 0.9

#define SAD_PREDICTION_IDX 0
#define SICK_PREDICTION_IDX    1
#define ACTIVE_QUALITY_PREDICTION_IDX 2


double predicted_results[3];

                                    //temp hum   air_q
double weights[OUT_LEN][IN_LEN] = {{-2,   9.5,   2.01}, // sad?
                                   {-0.8, 7.2,   6.3}, // sick?
                                   {-0.5,  0.45,  0.9} //  active?
                                   };

double inputs[IN_LEN] = {30, 87, 110}; // (temp, hum, air_q) 
int main()
{
    multiple_input_multiple_output_nn(inputs, IN_LEN, predicted_results, OUT_LEN, weights);
    printf("Sad Prediction : %f \r\n",predicted_results[SAD_PREDICTION_IDX]);
    return 0;
}