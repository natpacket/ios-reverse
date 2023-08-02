//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString, WCVideoProducerMusicOperation;

@interface WCVideoProducerSearchRequest : NSObject <NSCopying>
{
    NSString *_searchKey;
    NSMutableArray *_resultMusicOperationList;
    WCVideoProducerMusicOperation *_currentResultMusicOperation;
    double _searchRequestBeginTime;
    double _searchRequestEndTime;
}

- (void).cxx_destruct;
@property(nonatomic) double searchRequestEndTime; // @synthesize searchRequestEndTime=_searchRequestEndTime;
@property(nonatomic) double searchRequestBeginTime; // @synthesize searchRequestBeginTime=_searchRequestBeginTime;
@property(retain, nonatomic) WCVideoProducerMusicOperation *currentResultMusicOperation; // @synthesize currentResultMusicOperation=_currentResultMusicOperation;
@property(retain, nonatomic) NSMutableArray *resultMusicOperationList; // @synthesize resultMusicOperationList=_resultMusicOperationList;
@property(copy, nonatomic) NSString *searchKey; // @synthesize searchKey=_searchKey;
- (void)_searchResultDidStopPlayingMusic;
- (void)_searchResultDidStartPlayingMusic:(id)arg1 atIndex:(long long)arg2;
- (void)_searchResultDidSelectMusic:(id)arg1 atIndex:(long long)arg2;
- (void)_searchResultDidFinish;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSearchKey:(id)arg1;
- (id)init;

@end
