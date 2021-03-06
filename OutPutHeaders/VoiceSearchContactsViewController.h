/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIViewController.h"
#import "WeChat-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"

@class MMTableView, NSString, UILabel;
@protocol VoiceSearchContactsViewDelegate;

@interface VoiceSearchContactsViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource> {
	BOOL m_hasResults;
	MMTableView* m_tableView;
	UILabel* m_emptyLabelView;
	BOOL m_isFirstControl;
	unsigned long m_voiceID;
	NSString* m_errorLabelTextString;
	id<VoiceSearchContactsViewDelegate> m_voiceSearchContactsViewDelegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<VoiceSearchContactsViewDelegate> m_voiceSearchContactsViewDelegate;
-(void).cxx_destruct;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)viewDidBePoped:(BOOL)view;
-(void)backToPreView:(id)preView;
-(void)viewDidLayoutSubviews;
-(void)willDisappear;
-(void)viewDidAppear:(BOOL)view;
-(void)willAppear;
-(void)didAppear;
-(void)loadView;
-(id)initByResults:(BOOL)results;
-(void)onTopBarFrameChanged;
-(void)setErrorLabelViewText:(id)text;
-(void)initTableView;
@end

