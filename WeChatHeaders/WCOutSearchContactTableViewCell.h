//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class AttributeLabel, MMHeadImageView;

@interface WCOutSearchContactTableViewCell : MMTableViewCell
{
    MMHeadImageView *_headImageView;
    AttributeLabel *_nameLabel;
    AttributeLabel *_phoneLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AttributeLabel *phoneLabel; // @synthesize phoneLabel=_phoneLabel;
@property(retain, nonatomic) AttributeLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void)configureCellWithName:(id)arg1 phone:(id)arg2 mmusername:(id)arg3 headImageURL:(id)arg4 searchText:(id)arg5;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

