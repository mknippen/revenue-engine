//
//  ThinkGamingStoreUIStyleAppearance.h
//  ThinkGamingStoreUI
//
//  Created by Aaron Junod on 7/3/13.
//  Copyright (c) 2013 ThinkGaming. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ThinkGamingStoreUIViewController.h"

@interface ThinkGamingStoreUIStyleAppearance : NSObject

+ (void) apply;
+ (void) applyToStore:(ThinkGamingStoreUIViewController *)store;

#define tgStoreStyleNavigationBarTintColor @"tgStoreStyleNavigationBarTintColor"
#define tgStoreStyleNavigationBarSolidColor @"tgStoreStyleNavigationBarSolidColor"
#define tgStoreStyleNavigationBarFontColor @"tgStoreStyleNavigationBarFontColor"
#define tgStoreStyleNavigationBarCloseImage @"tgStoreStyleNavigationBarCloseImage"
#define tgStoreStyleFontName @"tgStoreStyleFontName"
#define tgStoreStyleBackgroundImage @"tgStoreStyleBackgroundImage"
#define tgStoreStyleCurrencyLabelFontColor @"tgStoreStyleCurrencyLabelFontColor"
#define tgStoreStyle @""

@end