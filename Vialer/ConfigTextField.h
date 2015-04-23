//
//  ConfigTextField.h
//  Vialer
//
//  Created by Karsten Westra on 23/04/15.
//  Copyright (c) 2015 VoIPGRID. All rights reserved.
//

#import <UIKit/UIKit.h>

IB_DESIGNABLE
@interface ConfigTextField : UIView

- (void)setupPlaceHolder:(NSString*)placeholder labelText:(NSString*)text;

@end
