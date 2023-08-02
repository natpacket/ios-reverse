//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveCommentPubbleCell.h"

#import "ILinkEventExt-Protocol.h"

@class NSString;

@interface MMFinderLiveTableStyleCommentPubbleCell : MMLiveCommentPubbleCell <ILinkEventExt>
{
    NSString *_signAccessibilityStr;
    NSString *_selfAccessibilityStr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *selfAccessibilityStr; // @synthesize selfAccessibilityStr=_selfAccessibilityStr;
@property(retain, nonatomic) NSString *signAccessibilityStr; // @synthesize signAccessibilityStr=_signAccessibilityStr;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)updateSelfAccessibility;
- (void)updateAccessibility:(id)arg1;
- (id)getSelfAccessibility;
- (id)getHandledAccessibilityStr:(id)arg1;
- (void)updateCommentLabelOrigin;
- (void)layoutCommentLabel;
- (void)setCommentLabel:(id)arg1;
- (void)layoutSubviews;
- (id)finderPubbleCellFrame;
- (id)initWithCellFrame:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
