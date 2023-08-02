//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

@interface WCFinderLBSCardWordingListView : UIView
{
    NSArray *_wordings;
    NSMutableArray *_wordingLabels;
    unsigned long long _lineNumber;
    double _layoutWidth;
}

+ (double)heightWithWordings:(id)arg1 lineNumber:(unsigned long long)arg2 width:(double)arg3;
+ (id)layoutPropertiesWithWordings:(id)arg1 lineNumber:(unsigned long long)arg2 width:(double)arg3;
- (void).cxx_destruct;
@property(nonatomic) double layoutWidth; // @synthesize layoutWidth=_layoutWidth;
@property(nonatomic) unsigned long long lineNumber; // @synthesize lineNumber=_lineNumber;
@property(retain, nonatomic) NSMutableArray *wordingLabels; // @synthesize wordingLabels=_wordingLabels;
@property(copy, nonatomic) NSArray *wordings; // @synthesize wordings=_wordings;
- (id)createDescWordingLabel;
- (void)ensureWordingLabels;
- (void)updateUI;
- (void)updateWithWordings:(id)arg1 lineNumber:(unsigned long long)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

