//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UITableViewCell, WCFinderNotifyCenterCellViewModel, WCFinderNotifyUnifiedTableViewCell;

@protocol WCFinderNotifyUnifiedCellDelegate <NSObject>

@optional
- (void)notifyCenterCellDidClickThankButton:(WCFinderNotifyUnifiedTableViewCell *)arg1;
- (void)notifyCenterCellHeightChanged:(WCFinderNotifyUnifiedTableViewCell *)arg1;
- (void)notifyCenterCell:(UITableViewCell *)arg1 didClickThumbWithViewModel:(WCFinderNotifyCenterCellViewModel *)arg2;
- (void)notifyCenterCell:(UITableViewCell *)arg1 didClickAvatarWithViewModel:(WCFinderNotifyCenterCellViewModel *)arg2;
@end

