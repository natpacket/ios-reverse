//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class Color, NSMutableArray, NSString, TextInfo;

@interface OnlineUser : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *chatUserData; // @dynamic chatUserData;
@property(retain, nonatomic) Color *iconColor; // @dynamic iconColor;
@property(retain, nonatomic) NSString *leftIcon; // @dynamic leftIcon;
@property(nonatomic) _Bool needFold; // @dynamic needFold;
@property(nonatomic) unsigned long long status; // @dynamic status;
@property(retain, nonatomic) NSString *statusDesc; // @dynamic statusDesc;
@property(retain, nonatomic) NSString *statusIcon; // @dynamic statusIcon;
@property(retain, nonatomic) TextInfo *textDesc; // @dynamic textDesc;

@end

