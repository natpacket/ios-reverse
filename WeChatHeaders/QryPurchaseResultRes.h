//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, GuideCellItem, LqtDialog, NSString;

@interface QryPurchaseResultRes : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *confirmResultWording; // @dynamic confirmResultWording;
@property(retain, nonatomic) LqtDialog *dialog; // @dynamic dialog;
@property(retain, nonatomic) GuideCellItem *guideCell; // @dynamic guideCell;
@property(retain, nonatomic) NSString *profitDate; // @dynamic profitDate;
@property(retain, nonatomic) NSString *purchaseResultWording; // @dynamic purchaseResultWording;
@property(nonatomic) unsigned int purchaseState; // @dynamic purchaseState;
@property(nonatomic) int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) NSString *traceInfo; // @dynamic traceInfo;
@property(retain, nonatomic) NSString *upgradeWording; // @dynamic upgradeWording;

@end

