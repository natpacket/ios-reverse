//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BTRecoFlowUtil : NSObject
{
}

+ (id)cellReuseIdentifierForFeedStyleFlag:(int)arg1 itemShowType:(unsigned long long)arg2 hasDigest:(_Bool)arg3;
+ (_Bool)isItemShowTypeValidValue:(unsigned long long)arg1;
+ (_Bool)isRecoFlowFuncSectionWithType:(unsigned long long)arg1;
+ (_Bool)shouldCellShowBottomSeperateLineWithSectionData:(id)arg1 andNextSectionData:(id)arg2 isLastSectionData:(_Bool)arg3;
+ (id)genOpenParamsWithIndexPath:(id)arg1 sectionData:(id)arg2;
+ (id)tableView:(id)arg1 cellForIndexPath:(id)arg2 sectionData:(id)arg3 shouldShowBottomSeperateLine:(_Bool)arg4;
+ (_Bool)isAllRecoFlowCardsUnsupportedWithCardMsgArr:(id)arg1;
+ (_Bool)isSupportedRecoFlowStyleWithCardMsg:(id)arg1;
+ (void)reigisterTableViewCells:(id)arg1;
+ (id)buildXButton;
+ (id)buildWebImageView;

@end

