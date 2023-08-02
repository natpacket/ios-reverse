//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TPSubtitleParserWrapper : NSObject
{
    struct ITPSubtitleParser *_subtitleParser;
    struct TPSubtitleParserCallbackWrapper *_subtitleCb;
}

- (void)stop;
- (void)setRenderParams:(CDStruct_1b95e4bb)arg1;
- (map_3f958a91)getSubtitleText:(long long)arg1;
- (int)selectTracksAsync:(vector_cd3186ef)arg1 opaque:(long long)arg2;
- (int)selectTrackAsync:(int)arg1 opaque:(long long)arg2;
- (vector_fdf80d0c)getTrackInfo;
- (void)pauseAsync;
- (void)startAsync;
- (void)loadAsync;
- (void)dealloc;
- (id)initWithUrl:(id)arg1 httpHeader:(id)arg2 callback:(id)arg3 outputType:(int)arg4;

@end
