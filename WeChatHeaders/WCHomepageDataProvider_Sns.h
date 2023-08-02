//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;
@protocol WCHomePageDataProviderDelegate, WCHomePageDataProviderStarDelegate;

@interface WCHomepageDataProvider_Sns : MMObject
{
    NSString *fpHash;
    _Bool isWorking;
    NSString *jumpToItemId;
    id <WCHomePageDataProviderDelegate> delegate;
    NSString *username;
    id <WCHomePageDataProviderStarDelegate> _starDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCHomePageDataProviderStarDelegate> starDelegate; // @synthesize starDelegate=_starDelegate;
@property(retain, nonatomic) NSString *username; // @synthesize username;
@property(nonatomic) __weak id <WCHomePageDataProviderDelegate> delegate; // @synthesize delegate;
- (void)updateStarListFromResponse:(id)arg1 byRequest:(id)arg2;
- (void)procssCgiFailResponse:(id)arg1;
- (void)procssCgiSuccessResponse:(id)arg1 request:(id)arg2;
- (void)startCgiRequest:(id)arg1;
- (long long)responseRetCode2HomePageRetCode:(int)arg1;
- (void)requestForSnsHomepageRequest:(id)arg1 minID:(id)arg2 source:(long long)arg3 filterType:(unsigned int)arg4 username:(id)arg5;
- (void)requestForSnsHomepageOnlySightAndPhotoRequest:(id)arg1 minID:(id)arg2 source:(long long)arg3;
- (void)requestForSnsHomepageRequest:(id)arg1 minID:(id)arg2 source:(long long)arg3;
- (void)requestForSnsHomepageRequest:(id)arg1 source:(long long)arg2 filterType:(unsigned int)arg3 username:(id)arg4 pullType:(unsigned int)arg5;
- (void)requestForSnsHomepageRequest:(id)arg1 source:(long long)arg2 filterType:(unsigned int)arg3 username:(id)arg4;
- (void)requestForSnsHomepageOnlySightAndPhotoRequest:(id)arg1 source:(long long)arg2;
- (void)requestForSnsHomepageRequest:(id)arg1 source:(long long)arg2;
- (id)converListToList:(id)arg1;
- (void)forceUpdateOnlySightAndPhotoWithReferID:(id)arg1;
- (void)updatePrePage:(id)arg1;
- (void)updateOnlySightAndPhotoWithReferID:(id)arg1 bottomID:(id)arg2;
- (void)updateOnlySightAndPhotoWithReferID:(id)arg1;
- (void)fetchDataBeforeJumpToItemId:(id)arg1;
- (void)forceUpdateWithReferID:(id)arg1;
- (void)updateHeadWithSource:(long long)arg1;
- (void)updateWithReferID:(id)arg1 bottomID:(id)arg2;
- (void)updateWithReferID:(id)arg1;

@end

