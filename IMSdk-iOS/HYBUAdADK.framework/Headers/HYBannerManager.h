//
//  HYBannerManager.h
//  mybaseprj
//
//  Created by oceanMAC on 2022/9/23.
//

#import <Foundation/Foundation.h>
#import <BUAdSDK/BUAdSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface HYBannerManager : NSObject

+(HYBannerManager *)shared;

- (void)showBannerADWithFrame:(CGRect)rect VC:(UIViewController *)viewCtl;

- (void)closeBannerAD;

@end

NS_ASSUME_NONNULL_END
