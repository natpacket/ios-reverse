//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, UILabel;
@protocol WCFinderInvalidMusicTopicViewDelegate;

@interface WCFinderInvalidMusicTopicView : UIView
{
    int _errorCode;
    id <WCFinderInvalidMusicTopicViewDelegate> _delegate;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIButton *_confirmButton;
    NSString *_errMsg;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak id <WCFinderInvalidMusicTopicViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onConfirmButtonClick;
- (void)layoutUI;
- (id)initWithFrame:(struct CGRect)arg1 errorCode:(int)arg2 errMsg:(id)arg3;

@end
