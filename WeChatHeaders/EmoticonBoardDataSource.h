//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EmoticonBoardDataSource : NSObject
{
}

+ (id)getCameraEmoticonListWithNeedCheckImageExist:(_Bool)arg1;
+ (id)getCustomEmoticonListWithNeedCheckImageExist:(_Bool)arg1 andShowGameEmoticon:(_Bool)arg2;
+ (id)checkImageExistInEmoticonWrapArray:(id)arg1 abortOnFailure:(_Bool)arg2;
+ (id)getEmoticonListWithPid:(id)arg1 needCheckImageExist:(_Bool)arg2;
+ (id)getCustomOrCameraEmoticonListWithPageWrap:(id)arg1;
+ (id)getStoreEmoticonListWithPageWrap:(id)arg1;
+ (id)getEmoticonListWithPageWrap:(id)arg1;
+ (id)getIPEmoticonIPTipPageWrapWithPid:(id)arg1;
+ (id)getIPEmoticonPageWrapWithIPSetKey:(id)arg1;
+ (id)getCameraEmoticonPageWrapWithShowCameraEntry:(_Bool)arg1;
+ (id)getCustomEmoticonPageWrapWithShowCustomEntry:(_Bool)arg1 AndshowGameEmoticon:(_Bool)arg2;
+ (id)getStoreEmoticonPageWrapWithPackWrap:(id)arg1;
+ (id)getStoreEmoticonPageWrapWithRecommandItem:(id)arg1;
+ (id)tabItemFromRecommandItem:(id)arg1;
+ (id)tabItemFromPackWrap:(id)arg1;
+ (id)getTabRecommandItemsWithStickerPackages:(id)arg1 recommandMaxCount:(long long)arg2;
+ (id)getRecommandBoardDataWithRecommandItemArray:(id)arg1;
+ (id)getIPTipEmoticonBoardDataWithPackageArray:(id)arg1;
+ (id)getIPMergedEmoticonBoardDataWithPackageArray:(id)arg1;
+ (id)getEmoticonBoardDataWithPackageArray:(id)arg1 andCouldShowTip:(_Bool)arg2;

@end

