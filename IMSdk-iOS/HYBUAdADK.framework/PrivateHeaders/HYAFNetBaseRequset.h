//
//  AFNetBaseRequset.h
//  doutuKeybord
//
//  Created by Yang Li on 2019/6/11.
//  Copyright © 2019 Yang Li. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AFNetworking.h>

NS_ASSUME_NONNULL_BEGIN

@interface HYAFNetBaseRequset : NSObject

+ (id)GET:(NSString *)path parameters:(NSDictionary *)params complationHandle:(void(^)(id responseObject, NSError *error))completed;

/** 对AFHTTPSessionManager的POST请求方法进行了封装 */
+ (id)POST:(NSString *)path parameters:(NSDictionary *)params complationHandle:(void(^)(id responseObject, NSError *error))completed;
@end

NS_ASSUME_NONNULL_END
