//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EmoticonWordListMeta, NSArray, NSString;

@protocol EmoticonInputRecommendMgrExt <NSObject>

@optional
- (void)onLocalRecommendLocalEmojiOcrResultUpdate;
- (void)onLocalRecommendLocalCustomEmoticonSwitchChanged:(_Bool)arg1;
- (void)onMergeRecommendEmoticon:(NSString *)arg1 emoticonWrapList:(NSArray *)arg2 sessionId:(NSString *)arg3 recSessionId:(NSString *)arg4 remoteWordListMeta:(EmoticonWordListMeta *)arg5;
@end

