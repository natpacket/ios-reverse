//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MMFinderLiveGiftCustomizationCommitLogic : NSObject
{
    NSMutableDictionary *_commitQueues;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *commitQueues; // @synthesize commitQueues=_commitQueues;
- (void)commitChangesToGiftCustomizationModel:(id)arg1 withTaskId:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end
