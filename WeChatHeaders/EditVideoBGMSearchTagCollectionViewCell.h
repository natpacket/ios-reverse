//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UILabel;

@interface EditVideoBGMSearchTagCollectionViewCell : UICollectionViewCell
{
    NSString *_tagName;
    UILabel *_tagLabel;
}

+ (struct CGSize)sizeForItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
- (void)updataWithItem:(id)arg1;
- (void)addTagNameLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

