//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WCCanvasClickEventManagerDelegate-Protocol.h"

@class NSString, UIButton, UIColor, UILabel, WCAdURLTintColorImageView, WCCanvasClickEventManager, WCCanvasComponentSidebarButtonInfo;
@protocol WCCanvasComponentDelegate;

@interface WCCanvasSidebarComponentButtonView : UIView <WCCanvasClickEventManagerDelegate>
{
    WCAdURLTintColorImageView *_iconView;
    UILabel *_wordingLabel;
    UIButton *_actionButton;
    WCCanvasClickEventManager *_clickManager;
    UIColor *_textColor;
    WCCanvasComponentSidebarButtonInfo *_buttonInfo;
    id <WCCanvasComponentDelegate> _canvasDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCCanvasComponentDelegate> canvasDelegate; // @synthesize canvasDelegate=_canvasDelegate;
@property(retain, nonatomic) WCCanvasComponentSidebarButtonInfo *buttonInfo; // @synthesize buttonInfo=_buttonInfo;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) WCCanvasClickEventManager *clickManager; // @synthesize clickManager=_clickManager;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *wordingLabel; // @synthesize wordingLabel=_wordingLabel;
@property(retain, nonatomic) WCAdURLTintColorImageView *iconView; // @synthesize iconView=_iconView;
- (id)reportMgr;
- (void)buttonReportAddExposureCount;
- (void)buttonWillDisappearInMainScreen;
- (void)buttonWillAppearInMainScreen;
- (void)onActionButtonClicked;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1 textColor:(id)arg2 buttonInfo:(id)arg3 canvasDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

