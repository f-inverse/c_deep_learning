#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include "../include/nn.h"
#include "./nn.cpp"

#define NUM_OF_FEATURES 2
#define NUM_OF_EXAMPLE 3

// Hours of Workout data //
double x1[NUM_OF_EXAMPLE] = {2,5,1};
double _x1[NUM_OF_EXAMPLE];

// Hours of rest data //
double x2[NUM_OF_EXAMPLE] = {8,5,8};
double _x2[NUM_OF_EXAMPLE];

// Muscle gain data //
double y[NUM_OF_EXAMPLE] = {200,90,190};
double _y[NUM_OF_EXAMPLE];




int main()
{
    normalize_data(x1,_x1,NUM_OF_EXAMPLE);
    normalize_data(x2,_x2,NUM_OF_EXAMPLE);
    normalize_data(y,_y,NUM_OF_EXAMPLE);
    

    printf("Raw x1 data : \n\r ");
    for (int i = 0; i < NUM_OF_EXAMPLE; i++)
    {
        printf(" %f ",x1[i]);
    }
    printf("\n\r");
    printf("Normalized x1 data : \n\r ");
    for(int i = 0; i < NUM_OF_EXAMPLE; i++)
    {
        printf(" %f ",_x1[i]);
    }
    printf("\n\r");
    printf("Raw x2 data : \n\r ");
    for (int i = 0; i < NUM_OF_EXAMPLE; i++)
    {
        printf(" %f ",x2[i]);
    }
    printf("\n\r");

     printf("Normalized x2 data : \n\r ");
    for(int i = 0; i < NUM_OF_EXAMPLE; i++)
    {
        printf(" %f ",_x2[i]);
    }
    printf("\n\r");


    printf("Raw y data : \n\r ");
    for (int i = 0; i < NUM_OF_EXAMPLE; i++)
    {
        printf(" %f ",y[i]);
    }
    printf("\n\r");

     printf("Normalized y data : \n\r ");
    for(int i = 0; i < NUM_OF_EXAMPLE; i++)
    {
        printf(" %f ",_y[i]);
    }
    printf("\n\r");


    

    return 0;
}