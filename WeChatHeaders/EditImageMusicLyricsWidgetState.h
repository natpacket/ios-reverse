//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EditImageWidgetState.h"

@class NSArray;

@interface EditImageMusicLyricsWidgetState : EditImageWidgetState
{
    NSArray *_lyricsList;
    double _lyricsTimeInterval;
}

- (void).cxx_destruct;
@property(nonatomic) double lyricsTimeInterval; // @synthesize lyricsTimeInterval=_lyricsTimeInterval;
@property(retain, nonatomic) NSArray *lyricsList; // @synthesize lyricsList=_lyricsList;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

