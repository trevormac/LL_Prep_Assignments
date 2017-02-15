//
//  main.m
//  Highest_Number_In_An_Array
//
//  Created by Trevor MacGregor on 2017-01-30.
//  Copyright © 2017 Trevor MacGregor. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // Number Array
        NSArray *numberArray = @[@3, @56, @108, @2007, @3, @2, @704, @500, @92, @27, @10567, @8743, @1000000];
        int largestNumber = [[numberArray valueForKeyPath:@"@max.intValue"] intValue];
        NSLog(@"The largest number in the array is: %d", largestNumber);
        
        
        
        
        
    }
    return 0;
}
