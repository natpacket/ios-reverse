//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface WCFinderPlayRateOperationView : UIView
{
    CDUnknownBlockType _shownAction;
    CDUnknownBlockType _dismissAction;
    CDUnknownBlockType _selectAction;
    UIView *_maskView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *maskView; // @synthesize maskView=_maskView;
@property(copy, nonatomic) CDUnknownBlockType selectAction; // @synthesize selectAction=_selectAction;
@property(copy, nonatomic) CDUnknownBlockType dismissAction; // @synthesize dismissAction=_dismissAction;
@property(copy, nonatomic) CDUnknownBlockType shownAction; // @synthesize shownAction=_shownAction;
- (void)onSelect:(CDUnknownBlockType)arg1;
- (void)onDismiss:(CDUnknownBlockType)arg1;
- (void)onShown:(CDUnknownBlockType)arg1;
- (void)onPlayRate:(id)arg1;
- (void)onDismissAction;
- (void)showOnView:(id)arg1 withVM:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

