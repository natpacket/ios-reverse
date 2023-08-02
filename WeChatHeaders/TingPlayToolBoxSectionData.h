//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface TingPlayToolBoxSectionData : NSObject
{
    unsigned long long _type;
    NSString *_title;
    CDUnknownBlockType _moreHandler;
    NSObject *_userData;
    NSMutableArray *_items;
    CDUnknownBlockType _activityJumpHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType activityJumpHandler; // @synthesize activityJumpHandler=_activityJumpHandler;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSObject *userData; // @synthesize userData=_userData;
@property(copy, nonatomic) CDUnknownBlockType moreHandler; // @synthesize moreHandler=_moreHandler;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (_Bool)hasAudioSubTitleItem;
- (_Bool)hasRecommendItem;
- (double)sectionHeight;
- (id)sectionTitle;

@end

