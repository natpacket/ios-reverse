//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseMessageCellView.h"

@class AppRingBackMessageViewModel, UIImageView;

@interface AppRingBackMessageCellView : BaseMessageCellView
{
    UIImageView *_bubbleView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *bubbleView; // @synthesize bubbleView=_bubbleView;
- (_Bool)shouldLayoutIfNeeded;
- (void)setHighlighted:(_Bool)arg1;
- (void)onTouchUpInside;
- (void)layoutContentView;

// Remaining properties
@property(readonly, nonatomic) AppRingBackMessageViewModel *viewModel;

@end

