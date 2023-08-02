//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderLiveBaseCgi.h"

@class NSData, NSString, WCFinderDataItem;

@interface WCFinderFeedStreamPreviewLiveCGI : WCFinderLiveBaseCgi
{
    WCFinderDataItem *_dataItem;
    NSString *_livePkId;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    unsigned long long _commentScene;
    long long _previewDelaySec;
    NSData *_multiStyleInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *multiStyleInfo; // @synthesize multiStyleInfo=_multiStyleInfo;
@property(nonatomic) long long previewDelaySec; // @synthesize previewDelaySec=_previewDelaySec;
@property(nonatomic) unsigned long long commentScene; // @synthesize commentScene=_commentScene;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) NSString *livePkId; // @synthesize livePkId=_livePkId;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (_Bool)shouldAutoProcessingToastWithError:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderFeedPreviewDataItem:(id)arg1 commentScene:(unsigned long long)arg2 liveTaskId:(id)arg3 multiStyleInfo:(id)arg4 previewDelaySec:(long long)arg5 successBlock:(CDUnknownBlockType)arg6 failBlock:(CDUnknownBlockType)arg7;

@end

