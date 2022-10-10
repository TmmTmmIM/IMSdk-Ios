//
//  HYSplashManager.h
//  mybaseprj
//
//  Created by oceanMAC on 2022/9/23.
//

#import <Foundation/Foundation.h>
#import <BUAdSDK/BUAdSDK.h>
#import "HYLanunchModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HYSplashManager : NSObject

+(HYSplashManager *)shared;

@property (nonatomic, strong) HYLanunchItemModel *adModel;
@property (nonatomic, assign) NSInteger index;

@property (nonatomic, strong) NSString *recordID;
@property (nonatomic, strong) NSString *recordName;
@property (nonatomic, strong) UIImage *linkImage;

- (void)registerAppId;

- (void)loadSplashAdWithView:(UIView *)adView close:(void (^)(BOOL close))close;

@end

NS_ASSUME_NONNULL_END
