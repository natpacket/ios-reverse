//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TingPlayerStateMachine : NSObject
{
    int _status;
    CDUnknownBlockType _statusChangedHandler;
    NSArray *_routes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *routes; // @synthesize routes=_routes;
@property(copy, nonatomic) CDUnknownBlockType statusChangedHandler; // @synthesize statusChangedHandler=_statusChangedHandler;
@property(nonatomic) int status; // @synthesize status=_status;
- (void)onEvent:(int)arg1 userInfo:(id)arg2;
- (void)onEvent:(int)arg1;
- (id)init;

@end

