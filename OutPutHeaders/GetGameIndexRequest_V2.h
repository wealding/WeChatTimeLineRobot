/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, NSString, BaseRequest;

@interface GetGameIndexRequest_V2 : WXPBGeneratedMessage {
}
@property(assign, nonatomic) BOOL isNeedActiveAppIdList;
@property(retain, nonatomic) NSString* country;
@property(retain, nonatomic) NSMutableArray* installedAppList;
@property(retain, nonatomic) NSString* lang;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end
