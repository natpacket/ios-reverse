//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface TorchCert : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long certId; // @dynamic certId;
@property(retain, nonatomic) NSString *fromIcon; // @dynamic fromIcon;
@property(retain, nonatomic) NSString *fromNickname; // @dynamic fromNickname;
@property(nonatomic) _Bool isAccessLocation; // @dynamic isAccessLocation;
@property(nonatomic) _Bool isBanned; // @dynamic isBanned;
@property(nonatomic) _Bool isJoinRunWith; // @dynamic isJoinRunWith;
@property(nonatomic) _Bool isLightTorch; // @dynamic isLightTorch;
@property(nonatomic) _Bool isShowSportStep; // @dynamic isShowSportStep;
@property(retain, nonatomic) NSMutableArray *locations; // @dynamic locations;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) unsigned long long sportStep; // @dynamic sportStep;

@end
