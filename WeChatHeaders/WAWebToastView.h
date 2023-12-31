//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUILabel, SightIconView, UIImageView;
@protocol WAWebToastViewDelegate;

@interface WAWebToastView : UIView
{
    double _fShowDuration;
    UIView *_bkgView;
    UIImageView *_tipIconView;
    MMUILabel *_label;
    SightIconView *_loadingIndicator;
    long long _seqID;
    id <WAWebToastViewDelegate> _delegate;
}

+ (void)bringToastToFront;
+ (void)adjustPosition:(id)arg1;
+ (void)removeToastInView:(id)arg1;
+ (void)removeToast;
+ (void)hideToast:(CDUnknownBlockType)arg1;
+ (void)tryCreateNewToastInView:(id)arg1;
+ (id)showLoading:(id)arg1 duration:(double)arg2 inView:(id)arg3;
+ (id)showToast:(id)arg1 andText:(id)arg2 duration:(double)arg3 inView:(id)arg4;
+ (id)addToastInView:(id)arg1;
+ (id)getCurrentToastViewIfHave;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WAWebToastViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long seqID; // @synthesize seqID=_seqID;
- (void)delayHideWithSeqID:(id)arg1;
- (void)hide:(CDUnknownBlockType)arg1 seqID:(long long)arg2;
- (void)showLoading:(id)arg1;
- (void)showToast:(id)arg1 andText:(id)arg2;
- (void)setupLoadingUI:(id)arg1;
- (void)setupToastUI:(id)arg1 image:(id)arg2;
- (void)setupHybridUI:(id)arg1 image:(id)arg2;
- (void)setupTextUI:(id)arg1;
- (void)adjustToastPosition;
- (id)contentDescription;
- (void)setDuration:(double)arg1;
- (id)init;

@end

