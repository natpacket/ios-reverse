//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ILinkEventExt-Protocol.h"

@class NSString, UIScrollView;

@interface XMailBindWechatRegMailViewController : MMUIViewController <ILinkEventExt>
{
    UIScrollView *m_scrollView;
    NSString *_mailAddr;
    NSString *_loginUrl;
    NSString *_headUrl;
    CDUnknownBlockType _onClickConfirmBlock;
    CDUnknownBlockType _onClickUseOtherMailBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onClickUseOtherMailBlock; // @synthesize onClickUseOtherMailBlock=_onClickUseOtherMailBlock;
@property(copy, nonatomic) CDUnknownBlockType onClickConfirmBlock; // @synthesize onClickConfirmBlock=_onClickConfirmBlock;
@property(retain, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(retain, nonatomic) NSString *loginUrl; // @synthesize loginUrl=_loginUrl;
@property(retain, nonatomic) NSString *mailAddr; // @synthesize mailAddr=_mailAddr;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onClickConfirmBtn:(id)arg1;
- (void)onReturn;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

