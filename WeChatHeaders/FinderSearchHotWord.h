//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderEventInfo, NSData, NSString;

@interface FinderSearchHotWord : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int actionType; // @dynamic actionType;
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) FinderEventInfo *eventInfo; // @dynamic eventInfo;
@property(nonatomic) unsigned long long hotwordId; // @dynamic hotwordId;
@property(retain, nonatomic) NSString *hotwordText; // @dynamic hotwordText;
@property(retain, nonatomic) NSString *link; // @dynamic link;
@property(retain, nonatomic) NSString *reasonWording; // @dynamic reasonWording;
@property(retain, nonatomic) NSData *sessionBuffer; // @dynamic sessionBuffer;

@end

