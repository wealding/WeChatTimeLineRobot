/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface GetPayFunctionListResponse : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned cacheTime;
@property(assign, nonatomic) unsigned notShowTutorial;
@property(retain, nonatomic) NSString* payFunctionList;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end

