//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUILabel, WCMusicLoadingHintView;

@interface WCMusicSearchHintView : UIView
{
    unsigned long long _mode;
    MMUILabel *_hintLabel;
    WCMusicLoadingHintView *_loadingView;
    struct UIEdgeInsets _contentEdgeInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCMusicLoadingHintView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MMUILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
- (void)layoutSubviews;
- (void)setupSubviews;
- (void)setLoadingTextFont:(id)arg1;
- (void)setLoadingTextColor:(id)arg1;
- (void)updateLoadingText:(id)arg1;
- (void)updateHintTextColor:(id)arg1;
- (void)updateHintTextFont:(id)arg1;
- (void)updateHintText:(id)arg1;
- (void)hideAllSubviewsExcept:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

