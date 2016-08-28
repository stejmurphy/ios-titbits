//
//  main.c
//  Turkey
//
//  Created by Stephen Murphy on 31/07/2016.
//  Copyright © 2016 Stephen Murphy. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Declare the variable called 'weight; of type float
    float weight;
    
    //store a number in that variable
    weight = 14.2;
    
    // Log it to the user
    printf("the turkey weighs %f.\n", weight);
    
    //Declare another variable of type float
    float cookingTime;
    
    //Calcuate the cooking time and store it in the variable
    //In this case, '*' means 'multiplied by'
    cookingTime = 15.0 + 15.0 * weight;
    
    //log that to the user
    printf("Cook it for %f minutes.\n", cookingTime);
    
    
    //end this function and indicate success
    return 0;
    
}
