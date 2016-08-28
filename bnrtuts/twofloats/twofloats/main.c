//
//  main.c
//  twofloats
//
//  Created by Stephen Murphy on 31/07/2016.
//  Copyright © 2016 Stephen Murphy. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    float biggerNum;
    float smallerNum;
    float combine;
    
    biggerNum = 4.20;
    smallerNum = 3.10;
    combine = biggerNum + smallerNum;
    
    printf("I am the value of Bigger No %f.\n", biggerNum);
    printf("I am the value of Smaller No %f.\n", smallerNum);
    printf("I am the result of both added together: %f.\n", combine);
   


}
