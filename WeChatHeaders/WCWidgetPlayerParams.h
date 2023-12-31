//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, NSString, RecommendedMusicInfo, UIView;

@interface WCWidgetPlayerParams : NSObject
{
    _Bool _isBGMMusicMute;
    _Bool _isAutoReplay;
    _Bool _isAudioModuleEnabled;
    int _audioModuleScene;
    UIView *_overlayView;
    RecommendedMusicInfo *_bgmMusicInfo;
    CALayer *_overlayViewLayer;
    NSString *_audioModuleIdentifier;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAudioModuleEnabled; // @synthesize isAudioModuleEnabled=_isAudioModuleEnabled;
@property(retain, nonatomic) NSString *audioModuleIdentifier; // @synthesize audioModuleIdentifier=_audioModuleIdentifier;
@property(retain, nonatomic) CALayer *overlayViewLayer; // @synthesize overlayViewLayer=_overlayViewLayer;
@property(nonatomic) int audioModuleScene; // @synthesize audioModuleScene=_audioModuleScene;
@property(nonatomic) _Bool isAutoReplay; // @synthesize isAutoReplay=_isAutoReplay;
@property(nonatomic) _Bool isBGMMusicMute; // @synthesize isBGMMusicMute=_isBGMMusicMute;
@property(retain, nonatomic) RecommendedMusicInfo *bgmMusicInfo; // @synthesize bgmMusicInfo=_bgmMusicInfo;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
- (_Bool)hasValidWidget;
- (id)description;
- (id)init;

@end

