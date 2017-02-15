//
//  Car.h
//  Toyotas_are_Cars_too!
//
//  Created by Trevor MacGregor on 2017-01-26.
//  Copyright © 2017 Trevor MacGregor. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Car : NSObject

@property(nonatomic) NSString *model;
- (void)drive;
- (id)initWithModel:(NSString *) input;

@end
