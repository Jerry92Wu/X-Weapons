//
//  NSString+AvailableMobileNumber.h
//  checkPhoneNumber and checkEmail
//
//  Created by WuChunlong on 16/7/14.
//  Copyright © 2016年 WuChunlong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (AvailableMobileNumber)

- (BOOL)isMobileNumber;

+ (BOOL)isMobileNumber:(NSString *)mobileNum;

@end
