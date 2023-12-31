//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMFinderLiveAdvertisementVideoPlugin, MMFinderLiveCommentPlugin, MMFinderLiveConnectMicPlugin, MMLiveBaseTask;
@protocol MMFinderLiveTaskFunctionPlugin;

@interface MMFinderLiveTaskPluginObj : NSObject
{
    MMFinderLiveAdvertisementVideoPlugin *_adVideo;
    MMFinderLiveCommentPlugin *_comment;
    MMFinderLiveConnectMicPlugin *_connectMic;
    MMLiveBaseTask<MMFinderLiveTaskFunctionPlugin> *_liveTask;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMLiveBaseTask<MMFinderLiveTaskFunctionPlugin> *liveTask; // @synthesize liveTask=_liveTask;
@property(retain, nonatomic) MMFinderLiveConnectMicPlugin *connectMic; // @synthesize connectMic=_connectMic;
@property(retain, nonatomic) MMFinderLiveCommentPlugin *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) MMFinderLiveAdvertisementVideoPlugin *adVideo; // @synthesize adVideo=_adVideo;
- (void)registerPlugin:(unsigned long long)arg1;
- (id)initWithLiveTask:(id)arg1;

@end

