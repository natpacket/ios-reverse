//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageCellView.h"

@class UILabel, WCPayC2CFestivalMsgViewModel;

@interface WCPayC2CFestivalMsgCellView : CommonMessageCellView
{
    UILabel *m_descLabel;
    UILabel *m_titleLabel;
}

- (void).cxx_destruct;
- (void)onTouchUpInside;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutContentView;
- (void)updateStatus;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) WCPayC2CFestivalMsgViewModel *viewModel; // @dynamic viewModel;

@end

