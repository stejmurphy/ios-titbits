//
//  main.c
//  ClassCerts
//
//  Created by Stephen Murphy on 31/07/2016.
//  Copyright © 2016 Stephen Murphy. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>

// First C function

void congratulateStudent(char *student, char *course, int numDays){
    printf("%s has done as much %s Programming as I could fit into %d days.\n", student , course , numDays  );
}


int main(int argc, const char * argv[]) {
    
    congratulateStudent("Kate", "Cocoa", 5);
    sleep(2);
    congratulateStudent("Bo", "Objective-C", 2);
    sleep(2);
    congratulateStudent("Mike", "Python", 5);
    sleep(2);
    congratulateStudent("Liz", "iOS", 5);
    
    return 0;
}
