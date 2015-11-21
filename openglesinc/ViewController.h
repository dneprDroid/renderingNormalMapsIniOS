//
//  ViewController.h
//  openglesinc
//
//  Created by Harold Serrano on 2/9/15.
//  Copyright (c) 2015 www.haroldserrano.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>
#import "Character.h"

@interface ViewController : GLKViewController{

    Character* character;
    float previousTouchPoint;
    float currentTouchPoint;
}


@property (strong, nonatomic) EAGLContext *context;

@end
