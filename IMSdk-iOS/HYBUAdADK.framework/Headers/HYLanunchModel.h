//
//  HYLanunchModel.h
//  mybaseprj
//
//  Created by oceanMAC on 2022/9/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class HYLanunchItemModel;

@interface HYLanunchModel : NSObject

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, strong) NSString * msg;
@property (nonatomic, strong) NSString * time;
@property (nonatomic, strong) HYLanunchItemModel * data;

@end

@interface HYLanunchItemModel : NSObject

@property (nonatomic, assign) BOOL is_show;
@property (nonatomic, strong) NSString * ID;
@property (nonatomic, strong) NSString * bid;
@property (nonatomic, strong) NSString * appid;
@property (nonatomic, strong) NSString * splashid;
@property (nonatomic, strong) NSString * insertid;
@property (nonatomic, strong) NSString * bannerid;
@property (nonatomic, assign) NSInteger show_times;
@property (nonatomic, strong) NSString * linkhtml;
@property (nonatomic, strong) NSString * shareid;
@property (nonatomic, assign) NSInteger version;
@property (nonatomic, assign) NSInteger ad_type;

@end

NS_ASSUME_NONNULL_END
