//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMListenCategoryItem, NSArray, NSString;

@protocol ITingBizExt <NSObject>

@optional
- (void)onTingFlutterEnabledChanged:(_Bool)arg1;
- (void)onTingListenTimeUpdated:(unsigned long long)arg1 forScene:(unsigned int)arg2;
- (void)onTingUgcCategoryUpdated:(MMListenCategoryItem *)arg1;
- (void)onTingUgcCategoryCreated:(MMListenCategoryItem *)arg1;
- (void)onTingUgcCategoriesDeleted:(NSArray *)arg1;
- (void)onTingListenItem:(NSString *)arg1 categoryId:(NSString *)arg2 likeStatusChanged:(_Bool)arg3 isPublic:(_Bool)arg4;
@end

