/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIViewController.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "MMPackageDownloadMgrExt.h"

@class NSMutableArray, NSString, MMTableView;
@protocol POICategoryDelegate;

@interface WCTimelinePOICategoryViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, MMPackageDownloadMgrExt> {
	id<POICategoryDelegate> _delegate;
	MMTableView* m_tableView;
	NSMutableArray* m_categoryArray;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableArray* m_categoryArray;
@property(retain, nonatomic) MMTableView* m_tableView;
@property(assign, nonatomic) __weak id<POICategoryDelegate> delegate;
-(void).cxx_destruct;
-(void)handleCategoriesConfig:(id)config;
-(void)onPackageListUpdated:(id)updated;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)didReceiveMemoryWarning;
-(void)initTableHeaderView;
-(void)initTableView;
-(void)initView;
-(void)initData;
-(void)viewDidLoad;
-(void)dealloc;
-(id)init;
@end

