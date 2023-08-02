//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageViewModel.h"

@class WCFinderShareToMomentsItem;

@interface WCFinderShareFeedCellViewModel : CommonMessageViewModel
{
    WCFinderShareToMomentsItem *_item;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderShareToMomentsItem *item; // @synthesize item=_item;
- (_Bool)isMemberShipFeed;
- (unsigned long long)authIconType;
- (id)authIconURL;
- (void)getReferImageAsync:(CDUnknownBlockType)arg1 size:(struct CGSize)arg2;
- (_Bool)hasReferImage;
- (id)additionalAccessibilityDescription;
- (id)fullClipInset;
- (_Bool)hadFullInfo;
@property(readonly, nonatomic) double estimateWidth;
- (struct CGSize)pureTextContentViewSize;
- (struct CGSize)defaultContentViewSize;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;
- (void)exposeReport;
- (unsigned long long)mediaPhotoCount;
- (id)desc;
- (_Bool)isLongVideo;
- (_Bool)isVideo;
- (id)fullCoverUrl;
- (id)coverUrl;
- (double)adjustImageRatio;
- (struct CGSize)imageSize;
- (id)nickname;
- (id)avatarUrl;
- (_Bool)isLive;
- (id)refObjectTid;
- (_Bool)isPureText;

@end
