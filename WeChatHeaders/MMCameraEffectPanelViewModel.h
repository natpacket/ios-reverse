//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol MMCameraEffectPanelViewModelDelegate;

@interface MMCameraEffectPanelViewModel : NSObject
{
    id <MMCameraEffectPanelViewModelDelegate> _delegate;
    NSArray *_filterInfos;
    NSArray *_beautyInfos;
    NSArray *_funnyInfos;
}

+ (unsigned long long)templateSceneWithCaptureScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *funnyInfos; // @synthesize funnyInfos=_funnyInfos;
@property(retain, nonatomic) NSArray *beautyInfos; // @synthesize beautyInfos=_beautyInfos;
@property(retain, nonatomic) NSArray *filterInfos; // @synthesize filterInfos=_filterInfos;
@property(nonatomic) __weak id <MMCameraEffectPanelViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)getTemplateScene;
- (void)fetchFunnyInfosWithTargetId:(id)arg1;

@end

