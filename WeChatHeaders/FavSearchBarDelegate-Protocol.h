//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FavSearchBar, NSString;

@protocol FavSearchBarDelegate <NSObject>
- (void)onBeginEditing;
- (void)onStartSearch:(_Bool)arg1;
- (void)onDeleteType:(NSString *)arg1;
- (void)onDeleteTag:(NSString *)arg1;
- (void)onSearchBarMoved:(FavSearchBar *)arg1;
@end

