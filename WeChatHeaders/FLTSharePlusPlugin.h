//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FlutterPlugin-Protocol.h"

@class NSString;

@interface FLTSharePlusPlugin : NSObject <FlutterPlugin>
{
}

+ (void)shareFiles:(id)arg1 withMimeType:(id)arg2 withSubject:(id)arg3 withText:(id)arg4 withController:(id)arg5 atSource:(struct CGRect)arg6;
+ (void)shareText:(id)arg1 subject:(id)arg2 withController:(id)arg3 atSource:(struct CGRect)arg4;
+ (void)share:(id)arg1 withController:(id)arg2 atSource:(struct CGRect)arg3;
+ (void)registerWithRegistrar:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
