//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderStreamProfilePageModel.h"

@class NSArray, NSData, NSMutableArray, NSString;
@protocol WCFinderProfileMJTempPageModelDelegate;

@interface WCFinderProfileMJTempPageModel : WCFinderStreamProfilePageModel
{
    _Bool _hasMore;
    _Bool _hasError;
    _Bool _isLoading;
    unsigned long long _refreshTime;
    id <WCFinderProfileMJTempPageModelDelegate> _delegate;
    NSString *_username;
    NSMutableArray *_mutContentVMS;
    NSData *_lastBuff;
}

+ (id)overviewSectionTypes;
+ (_Bool)allowLimitMode;
+ (_Bool)shouldDisplay:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(retain, nonatomic) NSMutableArray *mutContentVMS; // @synthesize mutContentVMS=_mutContentVMS;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) __weak id <WCFinderProfileMJTempPageModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool hasError; // @synthesize hasError=_hasError;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
- (id)reportParamsBlock;
- (void)_requestData:(_Bool)arg1 pageResolver:(CDUnknownBlockType)arg2;
- (void)requestNextPage;
- (void)requestFirstPage;
- (id)viewPageClassName;
- (id)displayName;
@property(readonly, nonatomic) NSArray *contentVMS;
- (id)init;
- (id)fillPageDataWithHeadData:(id)arg1;
- (id)createOverviewSection:(id)arg1 count:(long long)arg2;
- (id)parseOverviewSection:(long long)arg1 item:(id)arg2 headData:(id)arg3;

@end

