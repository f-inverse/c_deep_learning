#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "simple_nn.h"
#define Sad 0.9

#define TEMPERATURE_PREDICTION_IDX 0
#define HUMIDITY_PREDICTION_IDX    1
#define AIR_QUALITY_PREDICTION_IDX 2

#define VECTOR_LEN 3

double predicted_results[3];
double weights[3] = { -20, 95, 201};


int main()
{
    single_in_multiple_out_nn(Sad,weights,predicted_results,VECTOR_LEN);
    std::cout << "Predcited Temperature is : " << predicted_results[TEMPERATURE_PREDICTION_IDX] << std::endl;
    std::cout << "Predcited Humidity is : " << predicted_results[HUMIDITY_PREDICTION_IDX] << std::endl;
    std::cout << "Predcited AQI is : " << predicted_results[AIR_QUALITY_PREDICTION_IDX] << std::endl;
    return 0;
}