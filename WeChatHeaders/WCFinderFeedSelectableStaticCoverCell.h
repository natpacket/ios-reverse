//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderFeedStaticCoverCollectionViewCell.h"

@class NSString, UIImage, UIImageView, UIView;

@interface WCFinderFeedSelectableStaticCoverCell : WCFinderFeedStaticCoverCollectionViewCell
{
    _Bool _userSelected;
    NSString *_accessibilityLabelPrefix;
    UIImageView *_checkBoxIcon;
    UIView *_checkBoxBGViwe;
    UIImageView *_markIconView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *markIconView; // @synthesize markIconView=_markIconView;
@property(retain, nonatomic) UIView *checkBoxBGViwe; // @synthesize checkBoxBGViwe=_checkBoxBGViwe;
@property(retain, nonatomic) UIImageView *checkBoxIcon; // @synthesize checkBoxIcon=_checkBoxIcon;
@property(retain, nonatomic) NSString *accessibilityLabelPrefix; // @synthesize accessibilityLabelPrefix=_accessibilityLabelPrefix;
@property(nonatomic) _Bool userSelected; // @synthesize userSelected=_userSelected;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)doLayoutSubViews;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImage *markIcon;
- (void)updateMarkIconViewHidden;
@property(nonatomic) _Bool editMode;

@end

