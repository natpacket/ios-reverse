//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class RichTextView;

@interface WCFinderPostTopicBubbleCollectionViewCell : UICollectionViewCell
{
    RichTextView *_contentTextView;
}

+ (double)getTextViewWidthWithText:(id)arg1;
+ (double)getBubbleWidthWithText:(id)arg1;
+ (id)getStandardRichTextView;
- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *contentTextView; // @synthesize contentTextView=_contentTextView;
- (void)updateBubbleWithTopicInfo:(id)arg1;
- (void)updateBubbleTips:(id)arg1;

@end
