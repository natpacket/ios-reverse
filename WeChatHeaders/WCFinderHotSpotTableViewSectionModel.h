//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray;

@interface WCFinderHotSpotTableViewSectionModel : NSObject
{
    NSData *_lastBuffer;
    NSMutableArray *_hotWords;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *hotWords; // @synthesize hotWords=_hotWords;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
- (void)fetchServerDataCompletion:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;
- (_Bool)isDataEmpty;
- (void)loadLocalData;
- (id)hotWordAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataCount;

@end

