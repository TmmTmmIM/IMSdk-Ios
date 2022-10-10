//
//  HYLinkManager.h
//  tstebuad
//
//  Created by oceanMAC on 2022/10/10.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HYLinkManager : NSObject

+(HYLinkManager *)shared;

- (void)loadWithWindow:(UIWindow *)window recordName:(NSString *)recordName recordID:(NSString *)recordID netWorkTip:(NSString *)netWorkTip enter:(void (^)(BOOL pt))enter;


@end

NS_ASSUME_NONNULL_END
