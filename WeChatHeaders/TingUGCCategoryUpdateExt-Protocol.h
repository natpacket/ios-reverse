//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMListenCategoryItem, NSString, TingItem;

@protocol TingUGCCategoryUpdateExt <NSObject>

@optional
- (void)onCategoryAddedToLibrary:(MMListenCategoryItem *)arg1;
- (void)onUGCCategoryAddedSong:(TingItem *)arg1 categoryId:(NSString *)arg2;
- (void)onUGCCategoryCreated:(MMListenCategoryItem *)arg1 isOpen:(_Bool)arg2;
- (void)onUGCCategoryUpdated:(MMListenCategoryItem *)arg1;
- (void)onUGCCategoryDeleted:(MMListenCategoryItem *)arg1;
@end
