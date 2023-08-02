//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAAppMessageBaseCellView.h"

#import "IMsgExt-Protocol.h"

@class RichTextView, UIImageView, WANativeAppViewModel;

@interface WANativeAppCellView : WAAppMessageBaseCellView <IMsgExt>
{
    RichTextView *m_titleLabel;
    RichTextView *m_detailLabel;
    UIImageView *m_thumbImageView;
}

- (void).cxx_destruct;
- (void)OnMsgDownloadThumbOK:(id)arg1 MsgWrap:(id)arg2;
- (void)onTouchUpInside;
- (id)defaultThumbImage;
- (void)addThumbImageView;
- (void)addDetailLabel;
- (void)addTitleLabel;
- (void)layoutContentView;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) WANativeAppViewModel *viewModel; // @dynamic viewModel;

@end

