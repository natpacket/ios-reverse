//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderGetLiveInfoResp_LiveClosePageControlInfo, FinderGetLiveInfoResp_LiveCoverImage, FinderGetLiveInfoResp_LivePreviewJoinliveControlInfo, FinderJumpInfo, FinderLiveAbnormalClosedPageInfo, FinderLiveInfo, NSMutableArray, NSString;

@interface FinderGetLiveInfoResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveAbnormalClosedPageInfo *abnormalClosePage; // @dynamic abnormalClosePage;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int bizLiveNewFansNum; // @dynamic bizLiveNewFansNum;
@property(retain, nonatomic) FinderGetLiveInfoResp_LiveClosePageControlInfo *closePageControlInfo; // @dynamic closePageControlInfo;
@property(retain, nonatomic) FinderGetLiveInfoResp_LiveCoverImage *liveCover; // @dynamic liveCover;
@property(retain, nonatomic) FinderJumpInfo *liveDataDetailsJump; // @dynamic liveDataDetailsJump;
@property(retain, nonatomic) FinderLiveInfo *liveInfo; // @dynamic liveInfo;
@property(retain, nonatomic) FinderJumpInfo *liveLoyaltyCardJump; // @dynamic liveLoyaltyCardJump;
@property(nonatomic) unsigned int liveNewFansNum; // @dynamic liveNewFansNum;
@property(retain, nonatomic) NSMutableArray *liveSuggestionJump; // @dynamic liveSuggestionJump;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(retain, nonatomic) FinderGetLiveInfoResp_LivePreviewJoinliveControlInfo *previewJoinliveControlInfo; // @dynamic previewJoinliveControlInfo;
@property(retain, nonatomic) NSString *recommendReason; // @dynamic recommendReason;
@property(nonatomic) unsigned int refreshInterval; // @dynamic refreshInterval;
@property(nonatomic) unsigned int replayPrivilege; // @dynamic replayPrivilege;
@property(retain, nonatomic) NSString *sessionBuffer; // @dynamic sessionBuffer;

@end
