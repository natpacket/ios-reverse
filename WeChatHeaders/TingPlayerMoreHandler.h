//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMScrollActionSheetDelegate-Protocol.h"
#import "RecentForwardScrollViewDelegate-Protocol.h"
#import "SharePreConfirmViewDelegate-Protocol.h"

@class MMListenCategoryItem, MMListenCommentInfo, MMScrollActionSheet, MMUIViewController, NSString, SharePreConfirmView, TingItem, TingPlayerContext;
@protocol TingPlayerMoreHandlerDelegate;

@interface TingPlayerMoreHandler : NSObject <RecentForwardScrollViewDelegate, SharePreConfirmViewDelegate, MMScrollActionSheetDelegate>
{
    id <TingPlayerMoreHandlerDelegate> _delegate;
    MMListenCategoryItem *_categoryItem;
    MMListenCommentInfo *_commentInfo;
    TingPlayerContext *_playingContext;
    TingItem *_item;
    MMUIViewController *_viewController;
    MMScrollActionSheet *_scrollActionSheet;
    SharePreConfirmView *_sharePreConfirmView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SharePreConfirmView *sharePreConfirmView; // @synthesize sharePreConfirmView=_sharePreConfirmView;
@property(nonatomic) __weak MMScrollActionSheet *scrollActionSheet; // @synthesize scrollActionSheet=_scrollActionSheet;
@property(nonatomic) __weak MMUIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) TingItem *item; // @synthesize item=_item;
@property(retain, nonatomic) TingPlayerContext *playingContext; // @synthesize playingContext=_playingContext;
@property(retain, nonatomic) MMListenCommentInfo *commentInfo; // @synthesize commentInfo=_commentInfo;
@property(retain, nonatomic) MMListenCategoryItem *categoryItem; // @synthesize categoryItem=_categoryItem;
@property(nonatomic) __weak id <TingPlayerMoreHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportAction:(int)arg1;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)showQQMusicVipConfirmWinWithAppId:(id)arg1 andMid:(id)arg2;
- (void)showMusicVipConfirmWin:(id)arg1;
- (void)OnSharePreConfirmViewCancel:(id)arg1;
- (void)OnSharePreConfirmViewSend:(id)arg1;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
- (void)showMoreActions;
- (void)openMusicAlbum:(id)arg1;
- (void)openAudioQualitySettings;
- (void)openWebview:(id)arg1;
- (id)navigationController;
- (id)initWithItem:(id)arg1 viewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
