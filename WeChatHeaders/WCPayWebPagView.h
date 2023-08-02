//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PAGView.h"

#import "WCPaySingleDownloadLogicExt-Protocol.h"

@class NSMutableDictionary, NSString, PAGImage, WCPaySingleDownloadLogic;
@protocol WCPayWebPagViewDelegate;

@interface WCPayWebPagView : PAGView <WCPaySingleDownloadLogicExt>
{
    _Bool _isNeedFlush;
    _Bool _isForceUpdate;
    int _replaceIndex;
    id <WCPayWebPagViewDelegate> _delegate;
    NSMutableDictionary *_extraInfoDict;
    NSString *_pagUrl;
    WCPaySingleDownloadLogic *_singleDownloadLogic;
    PAGImage *_relplacePagImage;
}

- (void).cxx_destruct;
@property(nonatomic) int replaceIndex; // @synthesize replaceIndex=_replaceIndex;
@property(retain, nonatomic) PAGImage *relplacePagImage; // @synthesize relplacePagImage=_relplacePagImage;
@property(retain, nonatomic) WCPaySingleDownloadLogic *singleDownloadLogic; // @synthesize singleDownloadLogic=_singleDownloadLogic;
@property(nonatomic) _Bool isForceUpdate; // @synthesize isForceUpdate=_isForceUpdate;
@property(retain, nonatomic) NSString *pagUrl; // @synthesize pagUrl=_pagUrl;
@property(nonatomic) _Bool isNeedFlush; // @synthesize isNeedFlush=_isNeedFlush;
@property(retain, nonatomic) NSMutableDictionary *extraInfoDict; // @synthesize extraInfoDict=_extraInfoDict;
@property(nonatomic) __weak id <WCPayWebPagViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onDownloadTaskCompletion:(long long)arg1 taskUrl:(id)arg2 extraInfo:(id)arg3 filePath:(id)arg4 totalLength:(unsigned long long)arg5;
- (void)startLoadPagData;
- (void)setPagURL:(id)arg1 forceUpdate:(_Bool)arg2 pagLoadDelegate:(id)arg3;
- (void)setPagURL:(id)arg1;
- (void)setReplaceImage:(id)arg1 index:(int)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
