//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface EJTouch : NSObject
{
    unsigned long long _identifier;
    double _force;
    double _maximumPossibleForce;
    UIView *_view;
    struct CGPoint _locationInView;
    struct CGPoint _locationInScriptView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) double maximumPossibleForce; // @synthesize maximumPossibleForce=_maximumPossibleForce;
@property(nonatomic) double force; // @synthesize force=_force;
@property(nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property(nonatomic) struct CGPoint locationInScriptView; // @synthesize locationInScriptView=_locationInScriptView;
@property(nonatomic) struct CGPoint locationInView; // @synthesize locationInView=_locationInView;
- (id)initWithExtTouch:(id)arg1 scriptView:(id)arg2;

@end

