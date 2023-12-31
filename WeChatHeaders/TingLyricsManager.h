//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface TingLyricsManager : NSObject
{
    NSMutableDictionary *_resolverList;
    NSMutableArray *_pullingLyricsList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *pullingLyricsList; // @synthesize pullingLyricsList=_pullingLyricsList;
@property(retain, nonatomic) NSMutableDictionary *resolverList; // @synthesize resolverList=_resolverList;
- (id)lyricsFor:(id)arg1 withCurrentTime:(double)arg2 preferCount:(unsigned long long)arg3;
- (id)lyricFor:(id)arg1 withCurrentTime:(double)arg2;
- (id)resolverFor:(id)arg1;
- (_Bool)addResolverFor:(id)arg1 withLyrics:(id)arg2;
- (void)addResolverForListenId:(id)arg1;
- (void)addResolverForListenId:(id)arg1 presetLyric:(id)arg2;
- (void)addResolverForTingItem:(id)arg1;

@end

