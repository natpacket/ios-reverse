//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WCFinderMediaInfo;

@interface WCFinderFeedMediaWrapParam : NSObject
{
    _Bool _genArrDataSource;
    _Bool _useSystemPlayer;
    _Bool _ignoreCache;
    _Bool _forceUpdateMultiLevel;
    int _setMaxBitrate;
    NSString *_fileFormat;
    unsigned long long _liveCoverPreferredAspectRatio;
    unsigned long long _scene;
    WCFinderMediaInfo *_mediaInfo;
}

+ (id)defaultParamWithMediaInfo:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool forceUpdateMultiLevel; // @synthesize forceUpdateMultiLevel=_forceUpdateMultiLevel;
@property(nonatomic) int setMaxBitrate; // @synthesize setMaxBitrate=_setMaxBitrate;
@property(retain, nonatomic) WCFinderMediaInfo *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool ignoreCache; // @synthesize ignoreCache=_ignoreCache;
@property(nonatomic) unsigned long long liveCoverPreferredAspectRatio; // @synthesize liveCoverPreferredAspectRatio=_liveCoverPreferredAspectRatio;
@property(nonatomic) _Bool useSystemPlayer; // @synthesize useSystemPlayer=_useSystemPlayer;
@property(nonatomic) _Bool genArrDataSource; // @synthesize genArrDataSource=_genArrDataSource;
@property(copy, nonatomic) NSString *fileFormat; // @synthesize fileFormat=_fileFormat;

@end

