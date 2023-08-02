//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageViewModel.h"

#import "IAPPEmoticonDownloadExt-Protocol.h"

@class CEmoticonWrap, NSString;

@interface AppEmoticonMessageViewModel : CommonMessageViewModel <IAPPEmoticonDownloadExt>
{
    _Bool _hasTryAutoDownload;
    int _iconType;
    double _currentProgress;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
@property(nonatomic) _Bool hasTryAutoDownload; // @synthesize hasTryAutoDownload=_hasTryAutoDownload;
@property(nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
@property(nonatomic) int iconType; // @synthesize iconType=_iconType;
- (void)getReferImageAsync:(CDUnknownBlockType)arg1 size:(struct CGSize)arg2;
- (_Bool)hasReferImage;
- (void)onAppEmoticonDownloadFinished:(id)arg1;
- (void)onAppEmoticonDownloading:(id)arg1;
@property(readonly, nonatomic) _Bool isDownloading;
@property(readonly, nonatomic) _Bool isDownloaded;
@property(readonly, nonatomic) CEmoticonWrap *emoticonWrap;
- (id)additionalAccessibilityDescription;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)cellViewClassName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

