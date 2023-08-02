//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ReaderMessageCellView.h"

@class ImageTextReaderMessageViewModel, UIImageView;

@interface ImageTextReaderMessageCellView : ReaderMessageCellView
{
    UIImageView *m_bgImageView;
}

- (void).cxx_destruct;
- (id)operationMenuItems;
- (void)addFavorite;
- (void)forwardMessage;
- (void)jumpOpItem:(id)arg1;
- (void)jumpWeappOpWrap:(id)arg1;
- (void)onClicked;
- (void)onOPButtonClicked:(id)arg1;
- (void)onHeadImageClick;
- (void)tryPreloadWeAppTaskIfNeeded;
- (void)layoutContentView;
- (_Bool)canBeReused;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) ImageTextReaderMessageViewModel *viewModel; // @dynamic viewModel;

@end
