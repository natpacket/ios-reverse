//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TPPlayerBaseMediaParams, TPPlayerConfigParams, TPPlayerDrmParams, TPPlayerGeneralTrackingParams;

@interface TPGeneralPlayFlowParams : NSObject
{
    TPPlayerConfigParams *_playerConfigParams;
    TPPlayerBaseMediaParams *_playerBaseMediaParams;
    TPPlayerDrmParams *_playerDrmParams;
    TPPlayerGeneralTrackingParams *_playerGeneralTrackingParams;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TPPlayerGeneralTrackingParams *playerGeneralTrackingParams; // @synthesize playerGeneralTrackingParams=_playerGeneralTrackingParams;
@property(retain, nonatomic) TPPlayerDrmParams *playerDrmParams; // @synthesize playerDrmParams=_playerDrmParams;
@property(retain, nonatomic) TPPlayerBaseMediaParams *playerBaseMediaParams; // @synthesize playerBaseMediaParams=_playerBaseMediaParams;
@property(retain, nonatomic) TPPlayerConfigParams *playerConfigParams; // @synthesize playerConfigParams=_playerConfigParams;
- (id)init;

@end

