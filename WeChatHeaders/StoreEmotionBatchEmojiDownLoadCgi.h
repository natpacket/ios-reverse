//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "StoreEmotionBaseCgi.h"

@class NSMutableArray;

@interface StoreEmotionBatchEmojiDownLoadCgi : StoreEmotionBaseCgi
{
    unsigned int _maxCountPerRequest;
    CDUnknownBlockType _onFinishBlock;
    NSMutableArray *_waitForRequestMd5List;
    NSMutableArray *_emojiInfoList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *emojiInfoList; // @synthesize emojiInfoList=_emojiInfoList;
@property(retain, nonatomic) NSMutableArray *waitForRequestMd5List; // @synthesize waitForRequestMd5List=_waitForRequestMd5List;
@property(nonatomic) unsigned int maxCountPerRequest; // @synthesize maxCountPerRequest=_maxCountPerRequest;
@property(copy, nonatomic) CDUnknownBlockType onFinishBlock; // @synthesize onFinishBlock=_onFinishBlock;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (_Bool)continueRequestIfNeeded;
- (_Bool)startRequestWithMd5List:(id)arg1;
- (id)init;

@end
