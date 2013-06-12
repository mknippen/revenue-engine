//
//  IAPAdapter.h
//  ThinkGamingTestHarness
//
//  Created by Aaron Junod on 6/11/13.
//  Copyright (c) 2013 thinkgaming. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <StoreKit/StoreKit.h>


typedef void (^DidDownloadProductsBlock)(BOOL success, NSArray * products);

@interface IAPAdapter : NSObject <SKProductsRequestDelegate>

- (id)initWithProductIds:(NSArray * )productIdentifiers;
- (void)requestProducts:(DidDownloadProductsBlock)didDownloadProductsBlock;

@end