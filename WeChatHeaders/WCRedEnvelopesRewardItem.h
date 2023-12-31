//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSString;

@interface WCRedEnvelopesRewardItem : NSObject <NSCoding, PBCoding>
{
    unsigned int _createTime;
    NSString *_userName;
    unsigned long long _receiveAmount;
    NSString *_sendId;
    NSString *_ticket;
}

+ (id)fromServerObj:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_ticket;
+ (void)PBArrayAdd_sendId;
+ (void)PBArrayAdd_receiveAmount;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_userName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(retain, nonatomic) NSString *sendId; // @synthesize sendId=_sendId;
@property(nonatomic) unsigned long long receiveAmount; // @synthesize receiveAmount=_receiveAmount;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(readonly, copy) NSString *description;
- (_Bool)isFreeItem;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

