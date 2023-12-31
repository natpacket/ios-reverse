//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderVideoTemplateInfo, RecommendedMusicInfo;

@interface WCShortVideoToolBarInitParams : NSObject
{
    _Bool _canRelayoutSubviews;
    _Bool _needsTemplateEffect;
    unsigned long long _toolItems;
    unsigned long long _cameraMode;
    unsigned long long _scene;
    RecommendedMusicInfo *_patMusicInfo;
    unsigned long long _uiStyle;
    FinderVideoTemplateInfo *_templateInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderVideoTemplateInfo *templateInfo; // @synthesize templateInfo=_templateInfo;
@property(nonatomic) _Bool needsTemplateEffect; // @synthesize needsTemplateEffect=_needsTemplateEffect;
@property(nonatomic) unsigned long long uiStyle; // @synthesize uiStyle=_uiStyle;
@property(retain, nonatomic) RecommendedMusicInfo *patMusicInfo; // @synthesize patMusicInfo=_patMusicInfo;
@property(nonatomic) _Bool canRelayoutSubviews; // @synthesize canRelayoutSubviews=_canRelayoutSubviews;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long cameraMode; // @synthesize cameraMode=_cameraMode;
@property(nonatomic) unsigned long long toolItems; // @synthesize toolItems=_toolItems;

@end

