//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

@class MMUIButton, MMUILabel, UIView;
@protocol MMLiveGameJoinTeamHelpViewDelegate;

@interface MMLiveGameJoinTeamHelpView : MMPageSheetBaseView
{
    _Bool _model;
    id <MMLiveGameJoinTeamHelpViewDelegate> _delegate;
    UIView *_contentView;
    UIView *_topAreaView;
    MMUIButton *_leftButton;
    MMUILabel *_titleLabel;
    MMUILabel *_helperLabel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool model; // @synthesize model=_model;
@property(retain, nonatomic) MMUILabel *helperLabel; // @synthesize helperLabel=_helperLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UIView *topAreaView; // @synthesize topAreaView=_topAreaView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <MMLiveGameJoinTeamHelpViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)leftButtonAction;
- (void)pageSheetWillClose:(_Bool)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 model:(_Bool)arg2;

@end

