/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PBMessageObserverDelegate.h"
#import "UIAlertViewDelegate.h"

@class JSAPIAuthWrap, NSMutableArray, NSArray, NSString, NSMutableDictionary;
@protocol MMJSApiVerifyMgrDelegate;

@interface MMJSApiVerifyMgr : XXUnknownSuperclass <PBMessageObserverDelegate, UIAlertViewDelegate> {
	NSMutableDictionary* _dictUrl2JSApiPermissions;
	NSMutableDictionary* _dictApiName2Index;
	id<MMJSApiVerifyMgrDelegate> _mgrDelegate;
	NSMutableDictionary* _dictRealTimeVerify;
	NSMutableDictionary* _dictOfflineVerify;
	NSMutableDictionary* _dictApiAuthInfo;
	NSMutableArray* _jsAuthQueue;
	BOOL _isHandlingJSAuth;
	NSMutableDictionary* _dictAuthFuncBlock;
	NSString* _alertTile;
	JSAPIAuthWrap* _makingAuthWrap;
	NSMutableDictionary* _dictVerifyOverhead;
	NSArray* _groupAuthInfoList;
	NSMutableDictionary* _dictHidedMenuitemByPage;
	NSMutableDictionary* _dictScopeAuthInfo;
	NSMutableDictionary* _dictUrl2AppId;
	NSArray* _verifyInfoList;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<MMJSApiVerifyMgrDelegate> mgrDelegate;
-(void).cxx_destruct;
-(void)idKeyReportForVerifyFail:(id)verifyFail;
-(void)kvJSCallReport:(id)report permissionValue:(unsigned char)value isSuccess:(BOOL)success errorCode:(int)code baseErrorCode:(int)code5 funcName:(id)name;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)handleJSAPICallBack:(id)back err_msg:(id)msg failBlock:(id)block;
-(void)sendSetAuthRequest:(id)request;
-(int)getPermissionIndex:(id)index;
-(int)getPermissionIndexFromApiName:(id)apiName;
-(void)handlePreVerifyJSAPI:(id)jsapi;
-(void)handleRealtimeVerifyJSAPI:(id)jsapi;
-(void)handleSetAuth:(id)auth;
-(void)handleJSOAuth:(id)auth;
-(void)handleJSAuthFail:(id)fail errDesc:(id)desc authWrap:(id)wrap;
-(id)getScopeAuthInfo:(id)info apiName:(id)name;
-(id)getApiAuthInfo:(id)info;
-(void)checkJSAuthQueue;
-(void)addJSAuthToQueue:(id)queue funcBlock:(id)block failHandleBlock:(id)block3;
-(void)askUsrToMakeAuth:(id)makeAuth authWrap:(id)wrap failBlock:(id)block;
-(id)funcBlockKey:(id)key;
-(id)failHandleBlockKey:(id)key;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(id)getAppIdForUrl:(id)url;
-(BOOL)isMenuItemHidenByPage:(id)page;
-(void)hideAllNonBaseMenuItem;
-(void)showAllNonBaseMenuItem;
-(void)showMenuitemBatch:(id)batch;
-(void)hideMenuitemBatch:(id)batch;
-(id)getAuthorizedWebMonitorEvents:(id)events withCurEvent:(id)curEvent;
-(id)getPermissionedWebEventsForOfflineH5:(id)offlineH5;
-(void)modifyPermissionValue:(id)value url:(id)url permissionValue:(unsigned char)value3;
-(void)checkJSAPIAuth:(id)auth url:(id)url functionDef:(id)def funcBlock:(id)block failHandleBlock:(id)block5;
-(void)saveScopeAuthInfo:(id)info;
-(void)saveJSAPIAuthInfo:(id)info;
-(void)startupRealTimeVerifyJSAPI:(id)jsapi url:(id)url functionDef:(id)def funcBlock:(id)block failHandleBlock:(id)block5;
-(void)startupPreVerifyJSAPI:(id)jsapi url:(id)url failHandleBlock:(id)block;
-(unsigned char)getJSApiPermission:(id)permission url:(id)url;
-(void)saveJSApiPermissions:(id)permissions url:(id)url WithCheckedPreVerifyList:(BOOL)checkedPreVerifyList;
-(void)saveJSApiPermissions:(id)permissions url:(id)url;
-(id)init;
@end

