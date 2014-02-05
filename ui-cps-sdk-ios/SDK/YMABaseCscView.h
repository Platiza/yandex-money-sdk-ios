//
//  YMABaseCscView.h
//  ui-cps-sdk-ios
//
//  Created by mertvetcov on 05.02.14.
//  Copyright (c) 2014 Yandex.Money. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol YMABaseCscViewDelegate <NSObject>

- (void)startPaymentWithCsc:(NSString *)csc;

@end

@interface YMABaseCscView : UIView

@property(nonatomic, weak) id<YMABaseCscViewDelegate> delegate;

- (void)stopPaymentWithError:(NSError *)error;

@end