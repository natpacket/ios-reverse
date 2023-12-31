//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface QMarkerPayload : NSObject
{
    _Bool _forceLoad;
    _Bool _visibility;
    _Bool _interactive;
    _Bool _avoidAnnotation;
    _Bool _avoidOtherAnnotations;
    int _priority;
    int _minScaleLevel;
    int _maxScaleLevel;
    int _geotype;
    int _iconType;
    double _alpha;
    NSString *_iconName;
    struct CGPoint _anchor;
    CDStruct_34734122 _coordinate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool avoidOtherAnnotations; // @synthesize avoidOtherAnnotations=_avoidOtherAnnotations;
@property(nonatomic) _Bool avoidAnnotation; // @synthesize avoidAnnotation=_avoidAnnotation;
@property(nonatomic) int iconType; // @synthesize iconType=_iconType;
@property(nonatomic) int geotype; // @synthesize geotype=_geotype;
@property(nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
@property(retain, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(nonatomic) struct CGPoint anchor; // @synthesize anchor=_anchor;
@property(nonatomic) _Bool interactive; // @synthesize interactive=_interactive;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) _Bool visibility; // @synthesize visibility=_visibility;
@property(nonatomic) _Bool forceLoad; // @synthesize forceLoad=_forceLoad;
@property(nonatomic) int maxScaleLevel; // @synthesize maxScaleLevel=_maxScaleLevel;
@property(nonatomic) int minScaleLevel; // @synthesize minScaleLevel=_minScaleLevel;
@property(nonatomic) int priority; // @synthesize priority=_priority;
- (id)init;

@end

