//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, QRButtonInfo, TitleInfo;

@interface HalfPage : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) QRButtonInfo *leftButton; // @dynamic leftButton;
@property(retain, nonatomic) QRButtonInfo *rightButton; // @dynamic rightButton;
@property(retain, nonatomic) TitleInfo *titleInfo; // @dynamic titleInfo;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;
@property(retain, nonatomic) NSMutableArray *wordingList; // @dynamic wordingList;
@property(nonatomic) int wordingType; // @dynamic wordingType;

@end

