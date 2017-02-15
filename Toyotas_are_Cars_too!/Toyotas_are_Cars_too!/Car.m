//
//  Car.m
//  Toyotas_are_Cars_too!
//
//  Created by Trevor MacGregor on 2017-01-26.
//  Copyright © 2017 Trevor MacGregor. All rights reserved.
//

#import "Car.h"

@implementation Car

- (void)drive
{
    NSLog(@"%@", _model);
}

- (id)initWithModel:(NSString *) model;
{
    _model = model;
    return self;
}

@end
