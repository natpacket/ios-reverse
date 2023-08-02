//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderLiveExt-Protocol.h"

@class MMFinderLiveContentVM, MMFinderProfileLiveNoticeContext, NSString, WCFinderContact, WCFinderLiveNoticCardParams, WCFinderMemberShipZonePushParams;
@protocol WCFinderMemberShipZoneHeaderDataDelegate;

@interface WCFinderMemberShipZoneHeaderData : NSObject <WCFinderLiveExt>
{
    MMFinderProfileLiveNoticeContext *_liveNoticeContext;
    _Bool _isAuthor;
    _Bool _allowPost;
    _Bool _allowLive;
    NSString *_title;
    NSString *_zoneDesc;
    NSString *_memberBenefitsURL;
    MMFinderLiveContentVM *_livingContentVM;
    WCFinderLiveNoticCardParams *_liveNoticeParams;
    WCFinderMemberShipZonePushParams *_pushParams;
    id <WCFinderMemberShipZoneHeaderDataDelegate> _delegate;
    WCFinderContact *_contact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak id <WCFinderMemberShipZoneHeaderDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderMemberShipZonePushParams *pushParams; // @synthesize pushParams=_pushParams;
@property(retain, nonatomic) WCFinderLiveNoticCardParams *liveNoticeParams; // @synthesize liveNoticeParams=_liveNoticeParams;
@property(retain, nonatomic) MMFinderLiveContentVM *livingContentVM; // @synthesize livingContentVM=_livingContentVM;
@property(nonatomic) _Bool allowLive; // @synthesize allowLive=_allowLive;
@property(nonatomic) _Bool allowPost; // @synthesize allowPost=_allowPost;
@property(copy, nonatomic) NSString *memberBenefitsURL; // @synthesize memberBenefitsURL=_memberBenefitsURL;
@property(copy, nonatomic) NSString *zoneDesc; // @synthesize zoneDesc=_zoneDesc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool isAuthor; // @synthesize isAuthor=_isAuthor;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 hasPurchase:(_Bool)arg2 noticeId:(id)arg3 aggregateType:(unsigned int)arg4;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 didChangeReservedState:(unsigned long long)arg2 withNoticeIds:(id)arg3 failureNoticeIds:(id)arg4 opType:(unsigned long long)arg5 aggregateType:(unsigned int)arg6;
- (void)onFinderLiveDidRevokeNoticeInfo:(id)arg1;
@property(readonly, nonatomic) MMFinderProfileLiveNoticeContext *liveNoticeContext;
- (void)doNotifyChanged;
- (void)notifyChanged;
- (_Bool)isEqualToHeaderData:(id)arg1;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)dealloc;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

