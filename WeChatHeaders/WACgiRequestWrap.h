//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WACgiRequest;

@interface WACgiRequestWrap : NSObject
{
    unsigned int _eventId;
    WACgiRequest *_request;
    CDUnknownBlockType _completion;
    long long _startTimeStamp;
}

+ (id)requestWrapWithEventId:(unsigned int)arg1 request:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(nonatomic) long long startTimeStamp; // @synthesize startTimeStamp=_startTimeStamp;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) WACgiRequest *request; // @synthesize request=_request;
@property(nonatomic) unsigned int eventId; // @synthesize eventId=_eventId;

@end

