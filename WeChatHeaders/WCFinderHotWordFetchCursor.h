//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AnyPromise, NSData, NSMutableArray, WCFinderSearchHotWord;

@interface WCFinderHotWordFetchCursor : NSObject
{
    _Bool _continueFlag;
    NSMutableArray *_hotWordList;
    WCFinderSearchHotWord *_firstHotword;
    AnyPromise *_currentFetchPromise;
    NSData *_lastBuffer;
    NSData *_objHotwordInfoBuffer;
    WCFinderSearchHotWord *_currentHotword;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderSearchHotWord *currentHotword; // @synthesize currentHotword=_currentHotword;
@property(retain, nonatomic) NSData *objHotwordInfoBuffer; // @synthesize objHotwordInfoBuffer=_objHotwordInfoBuffer;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) AnyPromise *currentFetchPromise; // @synthesize currentFetchPromise=_currentFetchPromise;
@property(retain, nonatomic) WCFinderSearchHotWord *firstHotword; // @synthesize firstHotword=_firstHotword;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSMutableArray *hotWordList; // @synthesize hotWordList=_hotWordList;
- (_Bool)loading;
- (void)requestNextPage;
- (id)takeOneHotwordFromStack;
- (id)nextHotWord;
- (id)initWithHotWordList:(id)arg1 objHotwordInfoBuffer:(id)arg2 lastBuffer:(id)arg3;

@end

