//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BTBaseRecommendMsgCellViewModel.h"

@class BTRecommendAccountData, NSString;

@interface BTMissedSubsHeaderViewModel : BTBaseRecommendMsgCellViewModel
{
    BTRecommendAccountData *_accountData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BTRecommendAccountData *accountData; // @synthesize accountData=_accountData;
- (void)updateCellHeight:(double)arg1;
- (double)viewHeight;
- (id)contact;
@property(readonly, nonatomic) NSString *descStr;
@property(readonly, nonatomic) _Bool isShowTimeMode;
- (id)itemViewClassName;

@end

