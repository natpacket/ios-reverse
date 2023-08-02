//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BrandNotificationCellViewModel.h"

@class CContact, NSMutableArray;

@interface BrandAttributedNotificationCellViewModel : BrandNotificationCellViewModel
{
    NSMutableArray *m_messageTextArr;
    CContact *m_brandContact;
}

+ (_Bool)canCreateViewModelWithMsgWrap:(id)arg1;
- (void).cxx_destruct;
- (id)messageAttributedStringArr;
- (id)messageAttributedStringAtIndex:(unsigned long long)arg1;
- (unsigned int)messageAttributedStringMaxLineCountAtIndex:(unsigned long long)arg1;
- (unsigned long long)messageAttributedStringCount;
- (id)arrText;
- (id)notifyMsg;
- (double)timeLabelTopMargin;
- (double)firstMessageAttributedStringTopSpace;
- (struct CGSize)messageLabelSizeAtIndex:(unsigned long long)arg1;
- (struct CGSize)messageLabelSize;
- (id)messageLabelStyles;
- (id)messageText;
- (double)viewHeight;
- (id)headerImgUrl;
- (id)contactLabelStr;
- (id)brandContact;
- (void)updateBrandContact;
- (id)cellViewClassName;

@end

