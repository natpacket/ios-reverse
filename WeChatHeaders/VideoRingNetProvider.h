//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VideoRingNetProvider : NSObject
{
}

- (id)applyRingToneProcess:(unsigned long long)arg1 withRing:(id)arg2;
- (id)getMyGlobalRingTone;
- (id)fillUpFinderItemForRing:(id)arg1 useCache:(_Bool)arg2;
- (id)fetchRingToneDetailForFriend:(id)arg1 selfIsCaller:(_Bool)arg2;
- (id)promiseAllExclusiveRingsWithSequence:(unsigned long long)arg1;
- (id)setMessageRingType:(unsigned int)arg1;
- (id)setRingToneWithType:(unsigned long long)arg1 ring:(id)arg2 userName:(id)arg3 op:(unsigned long long)arg4 scene:(unsigned long long)arg5 extraInfo:(id)arg6;
- (id)searchMusicRingWithQuery:(id)arg1 offset:(unsigned int)arg2 searchID:(unsigned long long)arg3;

@end

