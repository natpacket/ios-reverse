//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

#import "WCTColumnCoding-Protocol.h"

@class FinderJumpInfo, NSData, NSString;

@interface FinderNotification : WXPBGeneratedMessage <WCTColumnCoding>
{
}

+ (void)initialize;
+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) NSData *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) NSString *link; // @dynamic link;
@property(retain, nonatomic) NSString *miniappName; // @dynamic miniappName;
@property(nonatomic) unsigned int notificationType; // @dynamic notificationType;
@property(nonatomic) unsigned int subType; // @dynamic subType;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *udfKvJson; // @dynamic udfKvJson;

@end

