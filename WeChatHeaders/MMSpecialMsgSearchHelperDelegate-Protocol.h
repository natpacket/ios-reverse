//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CBaseContact, CMessageWrap, NSArray, NSIndexPath;

@protocol MMSpecialMsgSearchHelperDelegate <NSObject>

@optional
- (void)msgSearchDidDismissForSpecialMsg;
- (void)didSelectSearchResultForMessageWrapForSpecialMsg:(CMessageWrap *)arg1 indexPath:(NSIndexPath *)arg2 arrKeyword:(NSArray *)arg3;
- (CBaseContact *)getChatContactForSpecialMsg;
- (void)msgSearchBarDoSearchForSpecialMsg;
- (void)msgSearchBarCancelForSpecialMsg;
- (void)msgSearchBarActiveForSpecialMsg;
@end
