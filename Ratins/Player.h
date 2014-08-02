//
//  Player.h
//  Ratins
//
//  Created by 양동길 on 2014. 8. 2..
//  Copyright (c) 2014년 양동길. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Player : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *game;
@property (nonatomic, assign) int rating;

@end
