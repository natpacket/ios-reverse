//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class UILabel;

@interface WCFinderLandScapeTableViewSectionHeader : UITableViewHeaderFooterView
{
    UILabel *_headerLabel;
}

+ (id)headerID;
+ (double)headerH;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
- (void)layoutSubviews;
- (void)updateWithTitle:(id)arg1;
- (void)setupLayout;
- (void)setup;
- (id)initWithReuseIdentifier:(id)arg1;

@end
