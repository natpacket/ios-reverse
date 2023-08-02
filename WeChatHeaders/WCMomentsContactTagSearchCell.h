//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class ContactTagData, MMUILabel, NSString, UIView;

@interface WCMomentsContactTagSearchCell : MMTableViewCell
{
    UIView *_seperatorLine;
    MMUILabel *_nameLabel;
    MMUILabel *_memberCountLabel;
    ContactTagData *_tagData;
    NSString *_query;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) ContactTagData *tagData; // @synthesize tagData=_tagData;
@property(retain, nonatomic) MMUILabel *memberCountLabel; // @synthesize memberCountLabel=_memberCountLabel;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
- (void)updateNameLabelText;
- (void)layoutSubviews;
- (void)initSeperatorLine;
- (void)initMemberCountLabel;
- (void)initNameLabel;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithTagData:(id)arg1 query:(id)arg2;

@end
