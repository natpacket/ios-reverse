//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TXAudioEffectManager;

@interface ILinkPusherBgmManagerAdaptor : NSObject
{
    TXAudioEffectManager *_audioEffectManager;
}

+ (void)destroySharedIntance;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) TXAudioEffectManager *audioEffectManager; // @synthesize audioEffectManager=_audioEffectManager;
- (id)getAudioEffectManager;
- (void)dealloc;
- (id)initInternal;

@end
