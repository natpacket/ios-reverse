//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIImage;

@protocol EnhanceTranslatingDelegate <NSObject>
- (void)onEnhanceTranslatingLogicDisplay:(UIImage *)arg1 sourceImg:(UIImage *)arg2 sessionId:(unsigned long long)arg3 leftTop:(struct CGPoint)arg4 rightTop:(struct CGPoint)arg5 rightBottom:(struct CGPoint)arg6 leftBottom:(struct CGPoint)arg7;
- (void)onEnhanceTranslatingLogicSwitchToCamera;
- (void)onEnhanceTranslatingLogicFail;
- (void)onEnhanceTranslatingLogicNotStable;
- (void)onEnhanceTranslatingLogicCancel;
- (void)onEnhanceTranslatingLogicBegin;
@end

