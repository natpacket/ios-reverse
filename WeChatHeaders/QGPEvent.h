//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QGPBaseModel.h"

@class NSString;

@interface QGPEvent : QGPBaseModel
{
    NSString *_eventType;
    NSString *_layerId;
}

+ (id)errorMsgForCode:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *layerId; // @synthesize layerId=_layerId;
@property(retain, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
- (id)init;

@end

