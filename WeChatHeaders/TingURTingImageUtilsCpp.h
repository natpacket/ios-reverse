//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TingURTingImageUtils-Protocol.h"

@class NSString;

@interface TingURTingImageUtilsCpp : NSObject <TingURTingImageUtils>
{
}

+ (id)sharedInstance;
- (void)generateMinibarBackground:(id)arg1 imageInfo:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)generatePlayerBackground:(id)arg1 imageInfo:(id)arg2 callback:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

