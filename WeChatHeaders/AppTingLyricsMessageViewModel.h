//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageViewModel.h"

@class TingShareLyricsItem;

@interface AppTingLyricsMessageViewModel : CommonMessageViewModel
{
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)sourceIcon;
- (_Bool)isSupportSourceViewBottomClick;
- (id)sourceTitle;
- (_Bool)shouldShowSourceViewInContent;
- (_Bool)isShowSourceView;
- (double)cellHeight;
@property(readonly, nonatomic) TingShareLyricsItem *shareLyricsItem;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end
