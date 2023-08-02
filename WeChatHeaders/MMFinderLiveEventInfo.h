//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveEventInfo : NSObject
{
    unsigned int _eventId;
    unsigned int _participantIdentity;
    unsigned int _eventStatus;
    unsigned int _streamStatus;
    NSString *_eventToken;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *eventToken; // @synthesize eventToken=_eventToken;
@property(nonatomic) unsigned int streamStatus; // @synthesize streamStatus=_streamStatus;
@property(nonatomic) unsigned int eventStatus; // @synthesize eventStatus=_eventStatus;
@property(nonatomic) unsigned int participantIdentity; // @synthesize participantIdentity=_participantIdentity;
@property(nonatomic) unsigned int eventId; // @synthesize eventId=_eventId;
- (id)genFinderEventInfo;
- (void)updateWithFinderLiveAudienceEventInfo:(id)arg1;
- (void)updateWithFinderLiveEventInfo:(id)arg1;

@end

