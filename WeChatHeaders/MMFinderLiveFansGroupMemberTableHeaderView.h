//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUILabel;

@interface MMFinderLiveFansGroupMemberTableHeaderView : UIView
{
    MMUILabel *_fansGroupNameLabel;
    MMUILabel *_fansGroupNameTipLabel;
}

+ (double)preferHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *fansGroupNameTipLabel; // @synthesize fansGroupNameTipLabel=_fansGroupNameTipLabel;
@property(retain, nonatomic) MMUILabel *fansGroupNameLabel; // @synthesize fansGroupNameLabel=_fansGroupNameLabel;
- (void)layoutFansGroupNameLabel;
- (void)layoutFansGroupNameTipLabel;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
