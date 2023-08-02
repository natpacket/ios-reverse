//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@protocol GameVideoAlbumDataFetcherDelegate;

@interface GameVideoAlbumDataFetcher : MMObject
{
    _Bool _isReachEnding;
    _Bool _isRequesting;
    unsigned int _totalCount;
    unsigned int _newCount;
    id <GameVideoAlbumDataFetcherDelegate> _delegate;
    unsigned long long _startTag;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(nonatomic) unsigned int newCount; // @synthesize newCount=_newCount;
@property(nonatomic) unsigned long long startTag; // @synthesize startTag=_startTag;
@property(nonatomic) _Bool isReachEnding; // @synthesize isReachEnding=_isReachEnding;
@property(nonatomic) unsigned int totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) __weak id <GameVideoAlbumDataFetcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned int pageSize;
- (id)parseTags:(id)arg1;
- (id)parseRecommendTags:(id)arg1;
- (void)fetchMoreVideoList;
- (id)parseAlbumVideoItem:(id)arg1;
- (void)loadRecommendVideoListCache;
- (void)fetchRecommendVideoList;
- (void)resetIndex;

@end
