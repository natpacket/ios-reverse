//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FlutterNavigatorDelegate-Protocol.h"

@class MMFlutterInstance, NSString;

@interface FlutterMultiInstanceNavigatorDelegate : NSObject <FlutterNavigatorDelegate>
{
    MMFlutterInstance *_flutterInstance;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFlutterInstance *flutterInstance; // @synthesize flutterInstance=_flutterInstance;
- (id)pushFromViewController:(id)arg1 plugin:(id)arg2 route:(id)arg3 arguments:(id)arg4;
- (id)initWithFlutterInstance:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

