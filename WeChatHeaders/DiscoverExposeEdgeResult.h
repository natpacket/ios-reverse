//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface DiscoverExposeEdgeResult : NSObject
{
    unsigned int _actionCode;
    unsigned int _syncScene;
    unsigned int _edgeLogId;
    NSString *_edgeLogVal;
    NSArray *_resultCodeArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *resultCodeArray; // @synthesize resultCodeArray=_resultCodeArray;
@property(retain, nonatomic) NSString *edgeLogVal; // @synthesize edgeLogVal=_edgeLogVal;
@property(nonatomic) unsigned int edgeLogId; // @synthesize edgeLogId=_edgeLogId;
@property(nonatomic) unsigned int syncScene; // @synthesize syncScene=_syncScene;
@property(nonatomic) unsigned int actionCode; // @synthesize actionCode=_actionCode;
- (id)debugInfo;
- (_Bool)buildEdgeResult:(id)arg1;

@end

