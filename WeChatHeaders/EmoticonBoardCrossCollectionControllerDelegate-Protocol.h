//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CEmoticonWrap, EmoticonBoardCrossCollectionEmoticonHeaderModel, EmoticonBoardCrossSectionInfo, EmoticonBoardPageWrap, NSString, PersonalDesigner;

@protocol EmoticonBoardCrossCollectionControllerDelegate <NSObject>

@optional
- (void)onConfirmIPMerge;
- (void)onTrySyncAnotherPartCustomEmoticon;
- (void)onTrySyncAnotherPartCameraEmoticon;
- (void)pushToDesignerProfile:(PersonalDesigner *)arg1 redotReporter:(EmoticonBoardCrossCollectionEmoticonHeaderModel *)arg2;
- (void)hideEmoticonPreview;
- (void)showEmoticonPreviewForWrap:(CEmoticonWrap *)arg1 description:(NSString *)arg2 pageWrapPid:(NSString *)arg3 cellIndex:(unsigned long long)arg4 frame:(struct CGRect)arg5;
- (void)hideQQEmojiPreview;
- (void)showQQEmojiPreviewForKey:(NSString *)arg1 atCenterPoint:(struct CGPoint)arg2 hideDesc:(_Bool)arg3;
- (void)onTapQQEmojiDeleteButton;
- (void)onTapQQEmojiSendButton;
- (void)onTapRecommendWithPid:(NSString *)arg1;
- (void)onTapCameraEmoticonCreateButton;
- (void)onTapEmoticonWrap:(CEmoticonWrap *)arg1 atIndex:(long long)arg2 maxCountPerLine:(unsigned long long)arg3 fromSection:(EmoticonBoardCrossSectionInfo *)arg4;
- (void)onTapQQEmojiWithCode:(NSString *)arg1 isRecentUse:(_Bool)arg2 atIndex:(long long)arg3 maxCountPerLine:(unsigned long long)arg4;
- (void)onPageNeedResetExpand;
- (_Bool)isExpandEnabled;
- (void)onPageExpandToggled;
- (void)onPageScrollEndedWithVelocity:(double)arg1;
- (_Bool)onPageScrollStartWithVelocity:(double)arg1;
- (void)onPageDidScrollWithOffsetY:(double)arg1;
- (void)onPageDidScroll;
- (void)didChangeToPage:(EmoticonBoardPageWrap *)arg1;
@end

