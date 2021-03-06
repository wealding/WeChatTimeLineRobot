/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "IBrandServiceSearchExt.h"
#import "contactInfoDelegate.h"

@class BSBusinessContent, CContact, NSString, NSMutableDictionary;
@protocol SearchContactDataProviderDelegate;

@interface SearchContactDataProvider : XXUnknownSuperclass <contactInfoDelegate, IBrandServiceSearchExt> {
	BOOL _isFromAddFriendScene;
	id<SearchContactDataProviderDelegate> _delegate;
	NSString* _keyword;
	BSBusinessContent* _content;
	CContact* _contact;
	NSMutableDictionary* _dicItemViews;
	unsigned long _requestEventID;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned long requestEventID;
@property(retain, nonatomic) NSMutableDictionary* dicItemViews;
@property(retain, nonatomic) CContact* contact;
@property(retain, nonatomic) BSBusinessContent* content;
@property(retain, nonatomic) NSString* keyword;
@property(assign, nonatomic) __weak id<SearchContactDataProviderDelegate> delegate;
@property(assign, nonatomic) BOOL isFromAddFriendScene;
-(void).cxx_destruct;
-(void)onGetSearchDetailPageResponse:(id)response eventID:(unsigned long)anId;
-(void)newMessageFromContactInfo:(id)contactInfo;
-(void)showContactInfoView:(id)view resultRow:(unsigned long)row;
-(id)getResultItemAtIndexPath:(id)indexPath;
-(id)getKeywordList;
-(BOOL)hasFoundContact;
-(void)handleDidCancelSearch;
-(void)handleSearchResultDataLoadMore;
-(void)handleSearchResultDataSelectWithIndexPath:(id)indexPath;
-(BOOL)hasMoreResultData;
-(id)makeSearchResultCellInTableView:(id)tableView atIndexPath:(id)indexPath;
-(float)heightForRowInSearchResultAtIndexPath:(id)indexPath;
-(int)numberOfRowInSearchResultSection:(int)searchResultSection;
-(int)numberOfSectionInSearchResult;
-(void)initData;
-(id)initWithBSContent:(id)bscontent andFoundContact:(id)contact andSearchKeyword:(id)keyword andLocation:(id)location andDelegate:(id)delegate;
-(void)dealloc;
@end

