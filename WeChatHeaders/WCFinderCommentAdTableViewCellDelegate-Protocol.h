//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIButton, WCFinderCommentAdTableViewCell, WCFinderJumpInfo;

@protocol WCFinderCommentAdTableViewCellDelegate <NSObject>

@optional
- (void)commentAdCell:(WCFinderCommentAdTableViewCell *)arg1 longPressAtSection:(unsigned long long)arg2;
- (void)commentAdCell:(WCFinderCommentAdTableViewCell *)arg1 clickFullTextAtSection:(unsigned long long)arg2 isExpand:(_Bool)arg3;
- (void)commentAdCell:(WCFinderCommentAdTableViewCell *)arg1 clickJumpInfo:(WCFinderJumpInfo *)arg2 atSection:(unsigned long long)arg3;
- (void)commentAdCell:(WCFinderCommentAdTableViewCell *)arg1 clickFeedbackButton:(UIButton *)arg2 atSection:(unsigned long long)arg3;
- (void)commentAdCell:(WCFinderCommentAdTableViewCell *)arg1 clickNicknameAtSection:(unsigned long long)arg2;
- (void)commentAdCell:(WCFinderCommentAdTableViewCell *)arg1 clickAvatarAtSection:(unsigned long long)arg2;
@end

