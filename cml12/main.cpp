#include <iostream> 
#include <cstdlib> 
#include <ctime> 
  
 
  
int main() 
{ 
    
    srand(time(NULL)); 
  
    
    double good_weather_prob = 0.3; 
    double bad_weather_prob = 0.7; 
  
    
    double happyness_good_weather = 0.9; 
  
    
    double happyness_bad_weather = 0.6; 
  
     
    int total_days = 10; 
    for (int i=1; i<=total_days; i++) 
    { 
         
        double rand_num = double(rand())/double(RAND_MAX); 
  
         
        if (rand_num < good_weather_prob) 
        { 
            // good weather 
            printf("Good weather and person is "); 
            if (double(rand())/double(RAND_MAX) < happyness_good_weather) 
                printf("happy.\n"); 
            else
                printf("not happy.\n"); 
        } 
        else
        { 
            // bad weather 
            printf("Bad weather and person is "); 
            if (double(rand())/double(RAND_MAX) < happyness_bad_weather) 
                printf("happy.\n"); 
            else
                printf("not happy.\n"); 
        } 
    } 
  
    return 0; 
}