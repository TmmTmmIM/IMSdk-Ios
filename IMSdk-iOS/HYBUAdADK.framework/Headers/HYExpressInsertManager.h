//
//  HYExpressInsertManager.h
//  mybaseprj
//
//  Created by oceanMAC on 2022/9/23.
//

#import <Foundation/Foundation.h>
#import <BUAdSDK/BUAdSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface HYExpressInsertManager : NSObject

+(HYExpressInsertManager *)shared;

- (void)PreloadExpressInsert;

//获取
- (void)showVideoAD:(UINavigationController *)nav State:(void (^)(BOOL sucess))success;

@end

NS_ASSUME_NONNULL_END
