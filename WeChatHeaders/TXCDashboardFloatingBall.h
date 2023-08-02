//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class TXCDashboardWindow;

@interface TXCDashboardFloatingBall : UIButton
{
    CDUnknownBlockType _onClick;
    TXCDashboardWindow *_containerWindow;
    struct CGPoint _originPoint;
}

+ (id)defaultFloatingBall;
- (void).cxx_destruct;
@property(nonatomic) struct CGPoint originPoint; // @synthesize originPoint=_originPoint;
@property(retain, nonatomic) TXCDashboardWindow *containerWindow; // @synthesize containerWindow=_containerWindow;
@property(copy, nonatomic) CDUnknownBlockType onClick; // @synthesize onClick=_onClick;
- (void)didClick;
- (void)handlePanGesture:(id)arg1;
- (void)createContainerWindow;
- (void)show:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

