//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveMinimizeConnectMicUserAttachWidgetObj.h"

@class UIImageView;

@interface MMFinderLiveMinimizeAudioMicUserHeadImageAttachWidgetObj : MMFinderLiveMinimizeConnectMicUserAttachWidgetObj
{
    UIImageView *_contentImageView;
    struct CGRect _normalizedFrame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect normalizedFrame; // @synthesize normalizedFrame=_normalizedFrame;
@property(retain, nonatomic) UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
- (id)contentView;
- (unsigned long long)currentViewType;
@property(readonly, nonatomic) unsigned long long currentUIType;
- (double)leftForContentViewWithNormalizedContainerSize:(struct CGSize)arg1;
- (double)topForContentViewWithNormalizedContainerSize:(struct CGSize)arg1;
- (struct CGSize)sizeForContentViewWithNormalizedContainerSize:(struct CGSize)arg1;
- (id)getSnapshotUserInfoImage;
- (void)createContentImageView;
- (void)layoutUI;
- (_Bool)checkRootViewIsValid;
- (void)refresh;

@end

