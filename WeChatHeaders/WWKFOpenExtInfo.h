//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSData, NSString, WWKFContentSendMsgInfo;

@interface WWKFOpenExtInfo : MMObject
{
    _Bool _bPopVCWhenLeave;
    _Bool _showPageSheet;
    NSString *_entityId;
    WWKFContentSendMsgInfo *_quickSendMsgInfo;
    NSData *_spamContext;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showPageSheet; // @synthesize showPageSheet=_showPageSheet;
@property(retain, nonatomic) NSData *spamContext; // @synthesize spamContext=_spamContext;
@property(nonatomic) _Bool bPopVCWhenLeave; // @synthesize bPopVCWhenLeave=_bPopVCWhenLeave;
@property(retain, nonatomic) WWKFContentSendMsgInfo *quickSendMsgInfo; // @synthesize quickSendMsgInfo=_quickSendMsgInfo;
@property(copy, nonatomic) NSString *entityId; // @synthesize entityId=_entityId;

@end
