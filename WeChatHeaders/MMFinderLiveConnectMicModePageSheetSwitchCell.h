//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel, UISwitch, UIView;
@protocol MMFinderLiveConnectMicModePageSheetSwitchCellDelegate;

@interface MMFinderLiveConnectMicModePageSheetSwitchCell : UITableViewCell
{
    UISwitch *_toggleSwitch;
    id <MMFinderLiveConnectMicModePageSheetSwitchCellDelegate> _delegate;
    UILabel *_titleLabel;
    UIView *_separatorBar;
}

+ (id)reuseId;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorBar; // @synthesize separatorBar=_separatorBar;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <MMFinderLiveConnectMicModePageSheetSwitchCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UISwitch *toggleSwitch; // @synthesize toggleSwitch=_toggleSwitch;
- (void)onSwitchToggled;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) NSString *title;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
