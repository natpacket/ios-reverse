//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderDataItemExt-Protocol.h"

@class NSData, NSMutableArray, NSMutableSet, NSString;
@protocol WCFinderLikeListViewModelDelegate;

@interface WCFinderLikeListViewModel : NSObject <WCFinderDataItemExt>
{
    _Bool _continueFlag;
    id <WCFinderLikeListViewModelDelegate> _delegate;
    NSMutableArray *_dataItems;
    unsigned long long _refreshTime;
    NSMutableSet *_tidContainSet;
    NSData *_lastBuff;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(retain, nonatomic) NSMutableSet *tidContainSet; // @synthesize tidContainSet=_tidContainSet;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(readonly, nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(retain, nonatomic) NSMutableArray *dataItems; // @synthesize dataItems=_dataItems;
@property(nonatomic) __weak id <WCFinderLikeListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderDataItemDelete:(id)arg1;
- (id)contentVMWithTid:(id)arg1;
- (long long)contentIndexOfTid:(id)arg1;
- (void)fetchMoreLikeList;
- (id)transformDataItems:(id)arg1;
- (void)getLocalFinderDataItem;
- (void)dealloc;
- (id)initWithFinderDataItem:(id)arg1 lastBuffer:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

