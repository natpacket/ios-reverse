//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderLiveQRCodePosterStyle : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(retain, nonatomic) NSString *authIconUrl; // @dynamic authIconUrl;
@property(retain, nonatomic) NSString *bgSubType; // @dynamic bgSubType;
@property(nonatomic) int bgType; // @dynamic bgType;
@property(retain, nonatomic) NSString *fgColor; // @dynamic fgColor;
@property(retain, nonatomic) NSString *finderLogoColor; // @dynamic finderLogoColor;
@property(nonatomic) unsigned int styleId; // @dynamic styleId;

@end

