//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BTMissedSubsBaseItemCell.h"

@class BTMissedSubsReaderItemViewModel, BTRichTextTagView, MMWebImageView;

@interface BTMissedSubsReaderItemCell : BTMissedSubsBaseItemCell
{
    MMWebImageView *_coverImgView;
    BTRichTextTagView *_titleTextView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BTRichTextTagView *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) MMWebImageView *coverImgView; // @synthesize coverImgView=_coverImgView;
- (unsigned long long)contentViewRaddiCorners;
- (void)layoutSubviews;
- (void)configureLayout;
- (void)setViewModel:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) BTMissedSubsReaderItemViewModel *viewModel; // @dynamic viewModel;

@end

