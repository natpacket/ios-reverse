//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class CommRequestSource, NSString;

@interface WAContactUpdateTaskWrap : MMObject
{
    _Bool _isForce;
    unsigned long long _updateType;
    NSString *_updateKey;
    CommRequestSource *_requestSource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CommRequestSource *requestSource; // @synthesize requestSource=_requestSource;
@property(nonatomic) _Bool isForce; // @synthesize isForce=_isForce;
@property(copy, nonatomic) NSString *updateKey; // @synthesize updateKey=_updateKey;
@property(nonatomic) unsigned long long updateType; // @synthesize updateType=_updateType;
- (_Bool)isEqualToTaskWrap:(id)arg1;

@end

