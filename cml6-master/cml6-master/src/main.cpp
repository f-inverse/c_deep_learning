#include <stdlib.h>
#include <iostream>
#define IN_LEN 3
#define OUT_LEN 3
#define HID_LEN 3
#include "/root/cml6/include/brute_force.h"
#include "/root/cml6/src/brute_force.cpp"


double weight = 0.5;
double input = 0.5;

double expected_value = 0.8;
double step_amount = 0.001;

int main()
{
    brute_force_learning(input, weight , expected_value, step_amount, 1000);
    return 0;
}