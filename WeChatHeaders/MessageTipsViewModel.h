//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseChatViewModel.h"

@class CMessageWrap, NSString;

@interface MessageTipsViewModel : BaseChatViewModel
{
    unsigned long long _tipsType;
    CMessageWrap *_msgWrap;
    NSString *_wording;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(nonatomic) unsigned long long tipsType; // @synthesize tipsType=_tipsType;
- (id)systemTextFont;
- (id)getTipsWording;
- (struct CGSize)measure:(struct CGSize)arg1;
- (id)cellViewClassName;
- (id)initWithTipsType:(unsigned long long)arg1 wording:(id)arg2;

@end

