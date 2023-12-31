//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TextStateBaseCardContentView;
@protocol TextState3rdPartyHandler;

@protocol TextStateBaseCardContentViewDelegate <NSObject>

@optional
- (void)onTapRedEnvelopeButton:(TextStateBaseCardContentView *)arg1;
- (void)onTapResendButton:(TextStateBaseCardContentView *)arg1;
- (void)onTapNotifyButton:(TextStateBaseCardContentView *)arg1;
- (void)onTapBackground:(TextStateBaseCardContentView *)arg1;
- (void)onTapIconButton:(TextStateBaseCardContentView *)arg1;
- (void)onTapTopic:(NSString *)arg1 cardContentView:(TextStateBaseCardContentView *)arg2;
- (void)doHeadImageAction:(id <TextState3rdPartyHandler>)arg1;
- (void)doSourceAction:(id <TextState3rdPartyHandler>)arg1;
- (void)onTapCommentButton:(TextStateBaseCardContentView *)arg1;
- (void)onTapSelfFavoriteButton:(TextStateBaseCardContentView *)arg1;
- (void)onTapFavoriteButton:(TextStateBaseCardContentView *)arg1 isSelected:(_Bool)arg2;
@end

