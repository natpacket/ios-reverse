//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "WCFinderInvalidTipsViewDelegate-Protocol.h"

@class NSString, WCFinderInvalidTipsInfo, WCFinderInvalidTipsView;

@interface WCFinderInvalidViewController : MMUIViewController <WCFinderInvalidTipsViewDelegate>
{
    WCFinderInvalidTipsInfo *_tipsInfo;
    WCFinderInvalidTipsView *_invalidTipsView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderInvalidTipsView *invalidTipsView; // @synthesize invalidTipsView=_invalidTipsView;
@property(retain, nonatomic) WCFinderInvalidTipsInfo *tipsInfo; // @synthesize tipsInfo=_tipsInfo;
- (void)finderInvalidTipsViewDidClickConfirmButton:(id)arg1;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (id)initWithInvalidTipsInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

