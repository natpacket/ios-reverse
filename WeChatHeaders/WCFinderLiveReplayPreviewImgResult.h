//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMFinderLiveReplayGreateTimeModel, WCFinderLiveReplayPreviewImgInfo;

@interface WCFinderLiveReplayPreviewImgResult : NSObject
{
    MMFinderLiveReplayGreateTimeModel *_greateTimeModel;
    WCFinderLiveReplayPreviewImgInfo *_previewImgInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveReplayPreviewImgInfo *previewImgInfo; // @synthesize previewImgInfo=_previewImgInfo;
@property(retain, nonatomic) MMFinderLiveReplayGreateTimeModel *greateTimeModel; // @synthesize greateTimeModel=_greateTimeModel;
- (double)getPreviewTime;
- (id)getPreviewImgTargetUrl;
- (id)getPreviewImgUrl;

@end

