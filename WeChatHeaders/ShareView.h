//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;
@protocol ShareViewDelegate><NSObject;

@interface ShareView : UIView
{
    id <ShareViewDelegate><NSObject> _delegate;
    UILabel *_shareLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *shareLabel; // @synthesize shareLabel=_shareLabel;
@property(nonatomic) __weak id <ShareViewDelegate><NSObject> delegate; // @synthesize delegate=_delegate;
- (void)onClickShareLabel;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
