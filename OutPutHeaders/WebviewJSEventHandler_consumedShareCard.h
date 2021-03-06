/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IWCShareCardPkgExt.h"
#import "WebviewJSEventHandlerBase.h"
#import "WCNewShareCardConsumedViewDelegate.h"

@class WCNewShareCardConsumedView, NSString;

@interface WebviewJSEventHandler_consumedShareCard : WebviewJSEventHandlerBase <IWCShareCardPkgExt, WCNewShareCardConsumedViewDelegate> {
	NSString* _consumedCardId;
	NSString* _consumedCode;
	WCNewShareCardConsumedView* _newconsumedView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)onShareCardConsumedViewCloseBtnClick;
-(void)onShareCardAfterConsumed:(BOOL)consumed;
-(void)onMsgNotifyShareCardConsumed:(id)consumed sharedCardId:(id)anId consumedBoxId:(id)anId3 subscribeAppUserName:(id)name subscribeWording:(id)wording retMsg:(id)msg;
-(void)handleJSEvent:(id)event HandlerFacade:(id)facade ExtraData:(id)data;
-(void)dealloc;
@end

