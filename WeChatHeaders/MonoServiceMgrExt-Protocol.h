//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AudioMonoServiceObj, VideoMonoServiceObj;

@protocol MonoServiceMgrExt <NSObject>

@optional
- (void)onVideoMonoServiceBussinessRemoved:(VideoMonoServiceObj *)arg1 inMainScene:(_Bool)arg2;
- (void)onVideoMonoServiceBussinessAdded:(VideoMonoServiceObj *)arg1 inMainScene:(_Bool)arg2;
- (void)onAudioMonoServiceBussinessRemoved:(AudioMonoServiceObj *)arg1 inMainScene:(_Bool)arg2;
- (void)onAudioMonoServiceBussinessAdded:(AudioMonoServiceObj *)arg1 inMainScene:(_Bool)arg2;
@end

