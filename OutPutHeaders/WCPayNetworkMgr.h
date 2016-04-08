/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "PBMessageObserverDelegate.h"
#import "MMService.h"

@class NSString, NSMutableDictionary;

@interface WCPayNetworkMgr : MMService <PBMessageObserverDelegate, MMService> {
	NSMutableDictionary* _startedTimeDic;
	NSMutableDictionary* _callerNames;
	NSMutableDictionary* _callbacks;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableDictionary* callbacks;
-(void).cxx_destruct;
-(void)debugPrintRequestWithCGIWrap:(id)cgiwrap;
-(void)debugPrintResponseWithCGIWrap:(id)cgiwrap;
-(id)nearestOutsideCallerName;
-(void)cleanForKey:(id)key;
-(void)handleErrorAndClean:(id)clean forKey:(id)key completion:(id)completion;
-(void)handleCommonErrorAndCleanForKey:(id)key completion:(id)completion;
-(unsigned long)sendRequest:(id)request cgi:(unsigned long)cgi completion:(id)completion;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(unsigned long)queryFlowDataWithFuncId:(id)funcId mobile:(id)mobile productName:(id)name appId:(id)anId remarks:(id)remarks ticket:(id)ticket completion:(id)completion;
-(unsigned long)getIAPOrderDetailWithOrderID:(id)orderID completion:(id)completion;
-(unsigned long)deleteSingleOrderWithOrderID:(id)orderID payType:(int)type billId:(id)anId completion:(id)completion;
-(unsigned long)commonQueryCmdID:(unsigned long)anId bizParams:(id)params wxParams:(id)params3 completion:(id)completion;
-(BOOL)cancelRequestForEventId:(unsigned long)eventId;
-(void)onServiceClearData;
-(void)onServiceTerminate;
-(void)onServiceEnterForeground;
-(void)onServiceEnterBackground;
-(void)onServiceReloadData;
-(void)onServiceInit;
-(void)dealloc;
@end
