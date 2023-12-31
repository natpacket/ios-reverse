//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderStreamProfilePageModel.h"

@class NSArray, NSData, NSMutableArray, NSString;
@protocol WCFinderProfileMusicListPageViewModelDelegate;

@interface WCFinderProfileMusicListPageViewModel : WCFinderStreamProfilePageModel
{
    _Bool _fetchFailed;
    _Bool _continueFlag;
    _Bool _loading;
    id <WCFinderProfileMusicListPageViewModelDelegate> _delegate;
    NSMutableArray *_mutContentVMS;
    NSData *_lastBuff;
    NSString *_username;
}

+ (_Bool)allowLimitMode;
+ (_Bool)shouldDisplay:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(retain, nonatomic) NSMutableArray *mutContentVMS; // @synthesize mutContentVMS=_mutContentVMS;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(nonatomic) _Bool fetchFailed; // @synthesize fetchFailed=_fetchFailed;
@property(nonatomic) __weak id <WCFinderProfileMusicListPageViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)reportParamsBlock;
- (void)requestPageData:(CDUnknownBlockType)arg1;
- (void)requestPageData;
@property(readonly, nonatomic) unsigned long long commentScene;
@property(readonly, nonatomic) NSArray *contentVMS;
- (id)displayName;
- (id)viewPageClassName;
- (id)init;
- (id)fillPageDataWithHeadData:(id)arg1;

@end

