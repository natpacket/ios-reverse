//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, QRButtonInfo;

@interface CoverInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int buttonMode; // @dynamic buttonMode;
@property(retain, nonatomic) QRButtonInfo *firstButton; // @dynamic firstButton;
@property(retain, nonatomic) QRButtonInfo *secondButton; // @dynamic secondButton;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end

