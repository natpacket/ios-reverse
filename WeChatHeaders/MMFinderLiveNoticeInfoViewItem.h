//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMFinderLiveNoticeListViewItem-Protocol.h"
#import "WCFinderLiveExt-Protocol.h"

@class FinderLiveNoticeInfo, NSString;
@protocol MMFinderLiveNoticeInfoViewItemDelegate;

@interface MMFinderLiveNoticeInfoViewItem : NSObject <WCFinderLiveExt, MMFinderLiveNoticeListViewItem>
{
    _Bool _isAuthor;
    _Bool _useGrayCouponWhenReserved;
    id <MMFinderLiveNoticeInfoViewItemDelegate> _delegate;
    FinderLiveNoticeInfo *_noticeInfo;
    NSString *_finderUserName;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useGrayCouponWhenReserved; // @synthesize useGrayCouponWhenReserved=_useGrayCouponWhenReserved;
@property(readonly, nonatomic) _Bool isAuthor; // @synthesize isAuthor=_isAuthor;
@property(readonly, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
@property(readonly, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;
@property(nonatomic) __weak id <MMFinderLiveNoticeInfoViewItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 isTop:(_Bool)arg2 noticeId:(id)arg3;
- (void)onFinderLiveNoticeWithNoticeId:(id)arg1 hasPurchaseStateChanged:(_Bool)arg2;
- (void)onFinderLiveNoticeWithNoticeId:(id)arg1 reserveStateChanged:(unsigned long long)arg2;
- (void)didUpdate;
- (void)dealloc;
- (id)initWithNoticeInfo:(id)arg1 isAuthor:(_Bool)arg2 finderUserName:(id)arg3;
@property(readonly, nonatomic) Class cellClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

