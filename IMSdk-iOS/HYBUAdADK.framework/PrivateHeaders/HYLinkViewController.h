//
//  HYLinkViewController.h
//  mybaseprj
//
//  Created by oceanMAC on 2022/9/23.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HYLinkViewController : UIViewController

- (instancetype)initWithLinkNetWorkTip:(NSString *)netWorkTip;



- (void)showViewControllerRootVC:(void (^)(BOOL rootVC))rootVC;

@end

NS_ASSUME_NONNULL_END
