//
//  main.m
//  Toyotas_are_Cars_too!
//
//  Created by Trevor MacGregor on 2017-01-26.
//  Copyright © 2017 Trevor MacGregor. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Toyota.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        //Create an instance of the Car class
        Car *nissan = [Car alloc];
        
        //Initialize it with model "Rogue"
        nissan.model = @"Rogue";
        [nissan drive];
        
        //Create an instance of the Toyota class
        Toyota *toyota = [Toyota alloc];
        
        //Call the drive method
        [toyota drive];
    
    }
    return 0;
}
