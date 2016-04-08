/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "MMService.h"

@class NSMutableArray, NSString;

@interface WebCacheMgr : MMService <MMService> {
	NSMutableArray* _needCachedUrlList;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)clearAllCache;
-(BOOL)canUrlBeCached:(id)cached;
-(void)clearNeedCacheUrlList;
-(void)addNeedCacheUrl:(id)url;
-(id)cachePathForUrl:(id)url;
-(id)baseCachesPath;
-(void)onServiceInit;
-(void)onServiceReloadData;
-(id)init;
@end
