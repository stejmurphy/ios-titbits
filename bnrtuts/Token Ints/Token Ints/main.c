//
//  main.c
//  Token Ints
//
//  Created by Stephen Murphy on 06/06/2017.
//  Copyright © 2017 Stephen Murphy. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int  x = 255;
    printf("X is %d.\n", x);            // as deciminal
    printf("In Otcal, it's %o.\n" , x ); // as octal (base 8)
    printf("In Hex, it's %x.\n", x );   // as hexadecimal (base 16)
    
    //As long int
    
    long  y = 255;
    printf("Y is %ld.\n", y);            // as deciminal
    printf("In Otcal, it's %lo.\n" , y ); // as octal (base 8)
    printf("In Hex, it's %lx.\n", y );   // as hexadecimal (base 16)

    //As unsigned
    
    unsigned long  z = 255;
    printf("Z is %lu.\n", z);            // as deciminal
    // octal and hex assume its unsigned so no change
    printf("In Otcal, it's %lo.\n" , z ); // as octal (base 8)
    printf("In Hex, it's %lx.\n", z );   // as hexadecimal (base 16)

    //Int Operations
    
    printf ("3 * 3 + 5 * 2 = %d\n", 3 * 3 + 5 * 2);
    
    printf("11 / 3  = %d remainder of %d\n", 11 / 3, 11 % 3);

    printf("11 / 3.0  = %f\n", 11 / (float)3);
    
    
    return 0;
}
