//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MJTemplateListParams : NSObject
{
    unsigned long long _eventId;
    NSString *_priorityTemplateId;
    unsigned long long _scene;
    NSString *_categoryKey;
    NSString *_musicId;
}

+ (id)defaultParams;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *musicId; // @synthesize musicId=_musicId;
@property(copy, nonatomic) NSString *categoryKey; // @synthesize categoryKey=_categoryKey;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *priorityTemplateId; // @synthesize priorityTemplateId=_priorityTemplateId;
@property(nonatomic) unsigned long long eventId; // @synthesize eventId=_eventId;

@end

