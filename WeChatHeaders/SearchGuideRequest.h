//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ChildMode, LbsLocationNew, NSMutableArray, NSString;

@interface SearchGuideRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long businessType; // @dynamic businessType;
@property(retain, nonatomic) ChildMode *childMode; // @dynamic childMode;
@property(nonatomic) unsigned long long configParam; // @dynamic configParam;
@property(retain, nonatomic) NSMutableArray *extReqParams; // @dynamic extReqParams;
@property(retain, nonatomic) NSString *guideInfo; // @dynamic guideInfo;
@property(nonatomic) unsigned int h5Version; // @dynamic h5Version;
@property(retain, nonatomic) NSString *language; // @dynamic language;
@property(retain, nonatomic) LbsLocationNew *location; // @dynamic location;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;

@end
