//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface MSEFavVideoTask : NSObject <PBCoding>
{
    unsigned int _videoLen;
    NSString *_videoUrlStr;
}

+ (void)initialize;
+ (void)PBArrayAdd_videoLen;
+ (void)PBArrayAdd_videoUrlStr;
- (void).cxx_destruct;
@property(nonatomic) unsigned int videoLen; // @synthesize videoLen=_videoLen;
@property(retain, nonatomic) NSString *videoUrlStr; // @synthesize videoUrlStr=_videoUrlStr;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

