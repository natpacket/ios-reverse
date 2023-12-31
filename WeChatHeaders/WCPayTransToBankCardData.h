//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableArray, NSString, WCPayTransToBankCardReceiver, WarningNotice;

@interface WCPayTransToBankCardData : MMObject
{
    unsigned int _m_enterTimeScene;
    unsigned int _m_uiTransferAmount;
    unsigned int _m_uiPondage;
    unsigned int _m_uiInputType;
    WCPayTransToBankCardReceiver *_m_selectReceiver;
    NSString *_m_nsTransferDesc;
    WarningNotice *_noticeItem;
    NSMutableArray *_m_otherReceiverHistory;
    NSMutableArray *_m_myReceiverHistory;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *m_myReceiverHistory; // @synthesize m_myReceiverHistory=_m_myReceiverHistory;
@property(retain, nonatomic) NSMutableArray *m_otherReceiverHistory; // @synthesize m_otherReceiverHistory=_m_otherReceiverHistory;
@property(retain, nonatomic) WarningNotice *noticeItem; // @synthesize noticeItem=_noticeItem;
@property(nonatomic) unsigned int m_uiInputType; // @synthesize m_uiInputType=_m_uiInputType;
@property(nonatomic) unsigned int m_uiPondage; // @synthesize m_uiPondage=_m_uiPondage;
@property(nonatomic) unsigned int m_uiTransferAmount; // @synthesize m_uiTransferAmount=_m_uiTransferAmount;
@property(retain, nonatomic) NSString *m_nsTransferDesc; // @synthesize m_nsTransferDesc=_m_nsTransferDesc;
@property(nonatomic) unsigned int m_enterTimeScene; // @synthesize m_enterTimeScene=_m_enterTimeScene;
@property(retain, nonatomic) WCPayTransToBankCardReceiver *m_selectReceiver; // @synthesize m_selectReceiver=_m_selectReceiver;
- (_Bool)isSelectFromHistory;

@end

