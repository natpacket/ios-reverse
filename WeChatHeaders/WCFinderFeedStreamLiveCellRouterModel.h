//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FeedsPreviewJoinLiveMultiStyleInfo_ManueTriggerJoinLive, MMFinderLiveFeedTransferLogic, MMLiveEnterRoomActionModel;

@interface WCFinderFeedStreamLiveCellRouterModel : NSObject
{
    MMLiveEnterRoomActionModel *_enterActionModel;
    FeedsPreviewJoinLiveMultiStyleInfo_ManueTriggerJoinLive *_feedStreamJoinLiveStyleInfo;
    MMFinderLiveFeedTransferLogic *_transferCtx;
    unsigned long long _fromSource;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long fromSource; // @synthesize fromSource=_fromSource;
@property(retain, nonatomic) MMFinderLiveFeedTransferLogic *transferCtx; // @synthesize transferCtx=_transferCtx;
@property(retain, nonatomic) FeedsPreviewJoinLiveMultiStyleInfo_ManueTriggerJoinLive *feedStreamJoinLiveStyleInfo; // @synthesize feedStreamJoinLiveStyleInfo=_feedStreamJoinLiveStyleInfo;
@property(retain, nonatomic) MMLiveEnterRoomActionModel *enterActionModel; // @synthesize enterActionModel=_enterActionModel;

@end
