//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UITableViewDataSource-Protocol.h"

@class NSArray, NSIndexPath, NSString, UIImage, UITableView;

@protocol MMTableViewMultipleReorderDataSource <UITableViewDataSource>
- (void)tableView:(UITableView *)arg1 moveRowsAtIndexPaths:(NSArray *)arg2 toIndexPaths:(NSArray *)arg3;
- (UIImage *)tableView:(UITableView *)arg1 cellSnapshotImageForIndexPath:(NSIndexPath *)arg2;

@optional
- (NSString *)tableView:(UITableView *)arg1 multipleReorderAccessibilityLabelForRowAtIndexPath:(NSIndexPath *)arg2;
@end

