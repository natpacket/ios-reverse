//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class DescCarouselInfo, FinderLiveInfo, FinderLivePreJoinLiveInfo, FinderNpsSurveyTaskConf, FinderObjectDigest, FinderPurchaseLivePreviewInfo, NSMutableArray;

@interface FinderObjectAsyncLoadInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *adItemInfo; // @dynamic adItemInfo;
@property(retain, nonatomic) NSMutableArray *adLeadInfo; // @dynamic adLeadInfo;
@property(retain, nonatomic) NSMutableArray *commJumpinfo; // @dynamic commJumpinfo;
@property(retain, nonatomic) DescCarouselInfo *descCarouselInfo; // @dynamic descCarouselInfo;
@property(retain, nonatomic) NSMutableArray *feedJumpInfo; // @dynamic feedJumpInfo;
@property(retain, nonatomic) NSMutableArray *hotspotJumpinfo; // @dynamic hotspotJumpinfo;
@property(retain, nonatomic) NSMutableArray *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) FinderLiveInfo *liveInfo; // @dynamic liveInfo;
@property(retain, nonatomic) FinderNpsSurveyTaskConf *npsSurveyConf; // @dynamic npsSurveyConf;
@property(retain, nonatomic) FinderObjectDigest *objectDigest; // @dynamic objectDigest;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) FinderLivePreJoinLiveInfo *preJoinliveInfo; // @dynamic preJoinliveInfo;
@property(retain, nonatomic) FinderPurchaseLivePreviewInfo *purchaseLivePreviewInfo; // @dynamic purchaseLivePreviewInfo;

@end

