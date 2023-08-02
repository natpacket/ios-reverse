//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface WCPayLQTInfo : NSObject <NSCoding>
{
    _Bool _bSupportOfflinePay;
    int _default_card_state;
    NSString *_lqtBankType;
    NSString *_lqtBindSerial;
    NSString *_lqtBankName;
    unsigned long long _lqtTotalBalance;
    unsigned long long _lqtAvailBalance;
    NSString *_lqtLogoUrl;
    NSString *_lqtforbidWord;
    NSString *_lqtforbidTitle;
    NSString *_lqtforbidUrl;
    NSString *_lqtShowWording;
    NSString *_lqtForbidId;
    NSString *_lqtmobile;
}

- (void).cxx_destruct;
@property(nonatomic) int default_card_state; // @synthesize default_card_state=_default_card_state;
@property(nonatomic) _Bool bSupportOfflinePay; // @synthesize bSupportOfflinePay=_bSupportOfflinePay;
@property(retain, nonatomic) NSString *lqtmobile; // @synthesize lqtmobile=_lqtmobile;
@property(retain, nonatomic) NSString *lqtForbidId; // @synthesize lqtForbidId=_lqtForbidId;
@property(retain, nonatomic) NSString *lqtShowWording; // @synthesize lqtShowWording=_lqtShowWording;
@property(retain, nonatomic) NSString *lqtforbidUrl; // @synthesize lqtforbidUrl=_lqtforbidUrl;
@property(retain, nonatomic) NSString *lqtforbidTitle; // @synthesize lqtforbidTitle=_lqtforbidTitle;
@property(retain, nonatomic) NSString *lqtforbidWord; // @synthesize lqtforbidWord=_lqtforbidWord;
@property(retain, nonatomic) NSString *lqtLogoUrl; // @synthesize lqtLogoUrl=_lqtLogoUrl;
@property(nonatomic) unsigned long long lqtAvailBalance; // @synthesize lqtAvailBalance=_lqtAvailBalance;
@property(nonatomic) unsigned long long lqtTotalBalance; // @synthesize lqtTotalBalance=_lqtTotalBalance;
@property(retain, nonatomic) NSString *lqtBankName; // @synthesize lqtBankName=_lqtBankName;
@property(retain, nonatomic) NSString *lqtBindSerial; // @synthesize lqtBindSerial=_lqtBindSerial;
@property(retain, nonatomic) NSString *lqtBankType; // @synthesize lqtBankType=_lqtBankType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
