//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSRegularExpression, NSString;
@protocol WCPayCurrencyInputLogicDelegate;

@interface WCPayCurrencyInputLogic : NSObject <UITextFieldDelegate>
{
    unsigned int _m_maxLength;
    id <WCPayCurrencyInputLogicDelegate> _m_delegate;
    NSRegularExpression *_m_pattern;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRegularExpression *m_pattern; // @synthesize m_pattern=_m_pattern;
@property(nonatomic) unsigned int m_maxLength; // @synthesize m_maxLength=_m_maxLength;
@property(nonatomic) __weak id <WCPayCurrencyInputLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)isNumeric:(id)arg1;
- (void)callDelegateString:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (id)initWithDelegate:(id)arg1 MaxLength:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

