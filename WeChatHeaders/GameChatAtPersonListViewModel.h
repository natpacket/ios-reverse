//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet, NSString;
@protocol GCAtPersonListViewModelDelegate, GCAtPersonListViewModelViewDelegate, OS_dispatch_queue;

@interface GameChatAtPersonListViewModel : NSObject
{
    _Bool _isPreloadDB;
    _Bool _isFirstShow;
    id <GCAtPersonListViewModelDelegate> _delegate;
    id <GCAtPersonListViewModelViewDelegate> _viewDelegate;
    NSArray *_allAndRobotModelArr;
    NSMutableArray *_recentAtArray;
    NSMutableArray *_managerArray;
    NSMutableArray *_otherMemberArray;
    NSString *_chatRoomName;
    NSString *_myUserName;
    NSArray *_adminNameList;
    NSMutableSet *_otherMemberNameSet;
    NSString *_ownerUserName;
    NSObject<OS_dispatch_queue> *_requestQueue;
    double _startTime;
    double _fullUpdateStartTime;
    double _fullUpdateCostTime;
}

- (void).cxx_destruct;
@property(nonatomic) double fullUpdateCostTime; // @synthesize fullUpdateCostTime=_fullUpdateCostTime;
@property(nonatomic) double fullUpdateStartTime; // @synthesize fullUpdateStartTime=_fullUpdateStartTime;
@property(nonatomic) _Bool isFirstShow; // @synthesize isFirstShow=_isFirstShow;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // @synthesize requestQueue=_requestQueue;
@property(copy, nonatomic) NSString *ownerUserName; // @synthesize ownerUserName=_ownerUserName;
@property(nonatomic) _Bool isPreloadDB; // @synthesize isPreloadDB=_isPreloadDB;
@property(retain, nonatomic) NSMutableSet *otherMemberNameSet; // @synthesize otherMemberNameSet=_otherMemberNameSet;
@property(copy, nonatomic) NSArray *adminNameList; // @synthesize adminNameList=_adminNameList;
@property(copy, nonatomic) NSString *myUserName; // @synthesize myUserName=_myUserName;
@property(readonly, nonatomic) NSString *chatRoomName; // @synthesize chatRoomName=_chatRoomName;
@property(retain, nonatomic) NSMutableArray *otherMemberArray; // @synthesize otherMemberArray=_otherMemberArray;
@property(retain, nonatomic) NSMutableArray *managerArray; // @synthesize managerArray=_managerArray;
@property(retain, nonatomic) NSMutableArray *recentAtArray; // @synthesize recentAtArray=_recentAtArray;
@property(copy, nonatomic) NSArray *allAndRobotModelArr; // @synthesize allAndRobotModelArr=_allAndRobotModelArr;
@property(nonatomic) __weak id <GCAtPersonListViewModelViewDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
@property(nonatomic) __weak id <GCAtPersonListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getAtAllLastTimeKey;
- (id)get24HourCheckKey;
- (id)getPullVersionKey;
- (double)canAtAllLeftTime;
- (void)recordAtAll;
- (_Bool)isAllMemberShow;
- (id)getAtModelFromSimpleData:(id)arg1;
- (id)getAtModelFromContact:(id)arg1;
- (void)reloadOtherMemberArray;
- (void)requestRecentlyAtList;
- (id)searchList:(id)arg1;
- (void)handleAllMemeberNameListResponse:(id)arg1 lastVersion:(id)arg2;
- (void)requestAtListData;
- (_Bool)checkFallInto24Hour;
- (void)loadLocalAtListData:(_Bool)arg1;
- (void)delayPreloadAtListData:(long long)arg1;
@property(readonly, nonatomic) _Bool isOwner;
- (void)setOwnerUserName:(id)arg1 andAdminNameList:(id)arg2;
- (id)initWithChatRoomName:(id)arg1;

@end

