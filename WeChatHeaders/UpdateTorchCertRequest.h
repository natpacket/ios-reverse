//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderEventBaseRequest, NSString;

@interface UpdateTorchCertRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderEventBaseRequest *baseReq; // @dynamic baseReq;
@property(nonatomic) _Bool isAccessLocation; // @dynamic isAccessLocation;
@property(nonatomic) _Bool isShowSportStep; // @dynamic isShowSportStep;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(retain, nonatomic) NSString *name; // @dynamic name;

@end

