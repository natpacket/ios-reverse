//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QMarker.h"

@class NSDictionary, NSString;

@interface QPointEventMarker : QMarker
{
    _Bool _avoidOtherAnnotations;
    int _geotype;
    int _markerID;
    NSString *_iconPath;
    NSDictionary *_eventInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *eventInfo; // @synthesize eventInfo=_eventInfo;
- (void)setAvoidOtherAnnotations:(_Bool)arg1;
- (_Bool)avoidOtherAnnotations;
- (void)setIconPath:(id)arg1;
- (id)iconPath;
- (int)markerID;
- (void)setMarkerID:(int)arg1;
- (int)geotype;
- (void)setGeotype:(int)arg1;

@end

