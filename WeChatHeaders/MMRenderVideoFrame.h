//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TRTCVideoRenderDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, UIImageView;

@interface MMRenderVideoFrame : NSObject <TRTCVideoRenderDelegate>
{
    UIImageView *_localVideoView1;
    NSMutableDictionary *_userVideoViews1;
    NSMutableArray *_remoteVideoQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *remoteVideoQueue; // @synthesize remoteVideoQueue=_remoteVideoQueue;
@property(retain, nonatomic) NSMutableDictionary *userVideoViews1; // @synthesize userVideoViews1=_userVideoViews1;
@property(retain, nonatomic) UIImageView *localVideoView1; // @synthesize localVideoView1=_localVideoView1;
- (id)getRemoteVideo:(id)arg1;
- (void)onRenderVideoFrame:(id)arg1 userId:(id)arg2 streamType:(long long)arg3;
- (void)addUser:(id)arg1 videoView:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

