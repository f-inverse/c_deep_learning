#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define IN_LEN 3
#define OUT_LEN 3
#define HID_LEN 3
#include "/root/cml4/include/hidden_nn.h"
#include "/root/cml4/src/hidden_nn.cpp"


#define SAD_PREDICTION_IDX 0
#define SICK_PREDICTION_IDX    1
#define ACTIVE_QUALITY_PREDICTION_IDX 2


double predicted_results[3];

                                    //temp hum   air_q
double input_to_hidden_weights[OUT_LEN][IN_LEN] = {{-2,   9.5,   2.01}, // sad?
                                                   {-0.8, 7.2,   6.3}, // sick?
                                                   {-0.5,  0.45,  0.9} //  active?
                                                  };


double hidden_to_output_weights[OUT_LEN][HID_LEN] = {{-1.0,   1.15,  0.11},
                                                     {-0.18,  0.15,  -0.01},
                                                     {0.25,   -0.25,  -0.1}
                                                     };

double inputs[IN_LEN] = {30, 87, 110}; // (temp, hum, air_q) 
int main()
{
    hidden_layer_nn(inputs, IN_LEN, HID_LEN, input_to_hidden_weights, OUT_LEN, hidden_to_output_weights, predicted_results);
    printf("Sad Prediction : %f \r\n",predicted_results[SAD_PREDICTION_IDX]);
    printf("Sick Prediction : %f \r\n",predicted_results[SICK_PREDICTION_IDX]);
    printf("Active Prediction : %f \r\n",predicted_results[ACTIVE_QUALITY_PREDICTION_IDX]);
    return 0;
}