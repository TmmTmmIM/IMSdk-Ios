//
//  HYGetLanuchData.h
//  mybaseprj
//
//  Created by oceanMAC on 2022/9/27.
//

#import "HYAFNetBaseRequset.h"
#import "HYLanunchModel.h"
#import <YYKit/YYKit.h>

NS_ASSUME_NONNULL_BEGIN

@class  HYLanunchItemModel;
@interface HYGetLanuchData : HYAFNetBaseRequset

+ (id)getLanuchData:(NSString *)bid url:(NSString *)url completionHandle:(void(^)(HYLanunchItemModel *model, BOOL success))completed;

@end

NS_ASSUME_NONNULL_END
