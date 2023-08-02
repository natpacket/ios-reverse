//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, VideoTemplate, WCFinderContact;

@interface WCFinderMJTempInfo : NSObject
{
    WCFinderContact *_finderContact;
    NSString *_coverUrl;
    NSString *_becomeCreatorUrl;
    NSString *_templateMusicId;
    NSString *_topicId;
    VideoTemplate *_videoTemplate;
}

+ (id)newWithTemplateListResponse:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) VideoTemplate *videoTemplate; // @synthesize videoTemplate=_videoTemplate;
@property(retain, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
@property(retain, nonatomic) NSString *templateMusicId; // @synthesize templateMusicId=_templateMusicId;
@property(retain, nonatomic) NSString *becomeCreatorUrl; // @synthesize becomeCreatorUrl=_becomeCreatorUrl;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) WCFinderContact *finderContact; // @synthesize finderContact=_finderContact;
@property(readonly, nonatomic) unsigned long long templateType;
@property(readonly, nonatomic) NSString *templateId;
@property(readonly, nonatomic) NSString *tempTitle;
@property(readonly, nonatomic) long long usedCount;

@end

