//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMStoreEmotionBaseAllCell.h"

#import "EmoticonStoreItemExt-Protocol.h"
#import "MMEmoticonStoreDownloadLogicDelegate-Protocol.h"

@class EmotionLinkInfo, NSString, UIView;

@interface MMStoreEmoticonPreviewCell : MMStoreEmotionBaseAllCell <MMEmoticonStoreDownloadLogicDelegate, EmoticonStoreItemExt>
{
    _Bool _disableDownload;
    _Bool _didLoadCacheLinkInfo;
    UIView *_activityMark;
    EmotionLinkInfo *_linkInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didLoadCacheLinkInfo; // @synthesize didLoadCacheLinkInfo=_didLoadCacheLinkInfo;
@property(retain, nonatomic) EmotionLinkInfo *linkInfo; // @synthesize linkInfo=_linkInfo;
@property(nonatomic) _Bool disableDownload; // @synthesize disableDownload=_disableDownload;
@property(retain, nonatomic) UIView *activityMark; // @synthesize activityMark=_activityMark;
- (void)updateAccessibilityLabel;
- (void)layoutBaseViewContainer;
- (void)layoutSubviews;
- (id)getNameTextWithArrow:(id)arg1;
- (_Bool)shouldChangeViewForActivity;
- (void)OnEmoticonStoreItemChanged:(id)arg1;
- (void)updateNameWithArrow;
- (void)updateLinkInfoLayout;
- (void)updateWithLinkInfo:(id)arg1;
- (void)updateActivityName;
- (void)initActivityMarkIfNeeded;
- (void)updateStoreItem:(id)arg1;
- (id)downloadLogicConfig;
- (void)setMsgBrowseStyleWithDownloadable:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

