//
//  HYGLExpressInsertManager.h
//  mybaseprj
//
//  Created by oceanMAC on 2022/9/30.
//

#import <Foundation/Foundation.h>
#import <GoogleMobileAds/GoogleMobileAds.h>

NS_ASSUME_NONNULL_BEGIN

@interface HYGLExpressInsertManager : NSObject

+(HYGLExpressInsertManager *)shared;

- (void)getGLExpressInsert;

- (void)showGLExpressInsert:(void (^)(BOOL sucess))success;

-(void)addBannerADWithFrame:(CGRect)rect view:(UIView *)view rootVC:(UIViewController *)vc;

- (void)closeBannerAD;

@end

NS_ASSUME_NONNULL_END
