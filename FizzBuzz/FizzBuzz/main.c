//
//  main.c
//  FizzBuzz
//
//  Created by Trevor MacGregor on 2016-12-20.
//  Copyright © 2016 Trevor MacGregor. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int n;
    for(n = 1; n <=100; n++) {
        
        if (n % 3 == 0 && n % 5 == 0) {
            printf("Fizzbuzz ");

        }
        else if (n % 3 == 0) {
            printf("Fizz ");

        }
        else if (n % 5 == 0 ) {
            printf("Buzz ");
        }
        else {

            printf("%d ",n);
        }
        
    }
    printf("\n");
    
    return 0;
    
    

}

