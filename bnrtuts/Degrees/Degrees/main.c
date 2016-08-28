//
//  main.c
//  Degrees
//
//  Created by Stephen Murphy on 28/08/2016.
//  Copyright © 2016 Stephen Murphy. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

float lastTemp;

float fahrenheitFromCelsius(float cel){
    
    lastTemp = cel;
    float fahr = cel * 1.8 + 32.0;
    
    printf("%f Celsius is %f Fahrenheit.\n", cel, fahr);
    return fahr;
}

int main(int argc, const char * argv[]) {
  
    float freezeInC = 0;
    float freezeinF = fahrenheitFromCelsius(freezeInC);
    
    printf("Water freezes at %f degrees Fahrenheit.\n", freezeinF);
    printf("The last temperture converted was %f.\n", lastTemp);

    return EXIT_SUCCESS;
}
