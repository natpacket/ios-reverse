//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCLiveBlurButtonBackView.h"

@class MMUIButton, UIView;

@interface MMFinderLiveCommentBlurButtonBackView : WCLiveBlurButtonBackView
{
    _Bool _canShowTalkButton;
    UIView *_seperateLineView;
    MMUIButton *_commentTalkButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *commentTalkButton; // @synthesize commentTalkButton=_commentTalkButton;
@property(retain, nonatomic) UIView *seperateLineView; // @synthesize seperateLineView=_seperateLineView;
@property(nonatomic) _Bool canShowTalkButton; // @synthesize canShowTalkButton=_canShowTalkButton;
- (void)layoutSeperateLineView;
- (void)layoutCommentTalkButton;
- (void)layoutUI;

@end

