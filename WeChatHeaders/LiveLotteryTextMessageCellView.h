//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TextMessageCellView.h"

@class UIButton;

@interface LiveLotteryTextMessageCellView : TextMessageCellView
{
    UIButton *m_sourceButton;
}

- (void).cxx_destruct;
- (void)anchorClickLotteryDetail:(id)arg1 lotteryInfo:(id)arg2 taskId:(id)arg3;
- (void)audienceClickLotteryDetail:(id)arg1 lotteryInfo:(id)arg2 taskId:(id)arg3 anchorNickName:(id)arg4 objectId:(unsigned long long)arg5 liveId:(unsigned long long)arg6 lotteryType:(unsigned int)arg7 couponRecordInfo:(id)arg8;
- (void)reportClick:(unsigned long long)arg1 audience:(int)arg2 lotteryId:(id)arg3;
- (void)tagWeAppLotteryLink:(id)arg1 messageWrap:(id)arg2;
- (void)initSourceLabel;
- (void)layoutContentView;
- (id)operationMenuItems;
- (_Bool)canShowRevokeMsgMenuItem;
- (_Bool)touchIntoSelectCopyState;
- (void)setViewModel:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;

@end

