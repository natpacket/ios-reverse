//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageViewModel.h"

#import "MMGroupLiveMgrExt-Protocol.h"

@class NSString;

@interface MMLiveMessageViewModel : CommonMessageViewModel <MMGroupLiveMgrExt>
{
    double _cacheTitleHeight;
    unsigned int _currentLiveStatus;
    _Bool _isLiveEnded;
    NSString *_liveTitle;
    NSString *_liveStatus;
    unsigned long long _liveId;
}

+ (id)summayText:(id)arg1;
+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isLiveEnded; // @synthesize isLiveEnded=_isLiveEnded;
@property(readonly, nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(readonly, nonatomic) NSString *liveStatus; // @synthesize liveStatus=_liveStatus;
@property(readonly, nonatomic) NSString *liveTitle; // @synthesize liveTitle=_liveTitle;
- (void)updateCurrentLiveStatus:(int)arg1;
- (void)onLiveClosedResult:(id)arg1 andLiveId:(unsigned long long)arg2;
- (void)onGetLiveInfoWithResult:(id)arg1 liveId:(unsigned long long)arg2 andRoomId:(id)arg3 andLiveInfo:(id)arg4;
- (double)titleHeight;
- (id)additionalAccessibilityDescription;
- (id)sourceTag;
- (id)sourceTitle;
- (id)sourceIcon;
- (_Bool)isShowSourceView;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;
- (void)dealloc;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

