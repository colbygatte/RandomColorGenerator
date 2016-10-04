//
//  RandomColorGenerator.h
//  RandomColorGenerator
//
//  Created by Mohammad Azam on 10/3/16.
//  Copyright © 2016 Mohammad Azam. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

// create a protocol called RandomColorGeneratorDelegate
// create a method in protocol randomColor with a single parameter UIColor


//
// RandomColorGenerator Protocol
//
@protocol RandomColorGeneratorDelegate
-(void) randomColor:(UIColor *) color;
@end


//
// RandomColorGenerator Class
//
@interface RandomColorGenerator : NSObject

@property (nonatomic, weak) id<RandomColorGeneratorDelegate> delegate;

-(void) generate; 

@end
