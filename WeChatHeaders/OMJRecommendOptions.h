//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OMJRecommendOptions : NSObject
{
    unsigned long long _mode;
    NSString *_scene;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (id)description;
- (id)initWithMode:(unsigned long long)arg1 scene:(id)arg2;

@end
