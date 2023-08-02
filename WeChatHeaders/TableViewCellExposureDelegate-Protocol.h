//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexPath, TableViewCellExposureHelper, UITableViewCellExposureInfo, UITableViewSectionExposureInfo;

@protocol TableViewCellExposureDelegate <NSObject>
- (void)onSectionListExposure:(NSArray *)arg1 helper:(TableViewCellExposureHelper *)arg2;
- (void)onItemCellViewListExposure:(NSArray *)arg1 helper:(TableViewCellExposureHelper *)arg2;
- (struct CGRect)getItemCellViewRect:(NSIndexPath *)arg1 helper:(TableViewCellExposureHelper *)arg2;
- (struct CGRect)getSectionRect:(unsigned long long)arg1 helper:(TableViewCellExposureHelper *)arg2;
- (struct CGRect)getExposureVisibleRect:(TableViewCellExposureHelper *)arg1;

@optional
- (void)onSectionEndExposure:(UITableViewSectionExposureInfo *)arg1 helper:(TableViewCellExposureHelper *)arg2;
- (void)onSectionStartExposure:(UITableViewSectionExposureInfo *)arg1 helper:(TableViewCellExposureHelper *)arg2;
- (void)onItemCellViewEndExposure:(UITableViewCellExposureInfo *)arg1 helper:(TableViewCellExposureHelper *)arg2;
- (void)onItemCellViewExposure:(UITableViewCellExposureInfo *)arg1 helper:(TableViewCellExposureHelper *)arg2;
- (void)onItemCellViewStartExposure:(UITableViewCellExposureInfo *)arg1 helper:(TableViewCellExposureHelper *)arg2;
@end
