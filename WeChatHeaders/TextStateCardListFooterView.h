//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel, NSString;

@interface TextStateCardListFooterView : UIView
{
    _Bool _showPublishEntry;
    NSString *_footnote;
    CDUnknownBlockType _tapPublishButtonHandler;
    MMUILabel *_footnoteLabel;
    MMUIButton *_publishButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *publishButton; // @synthesize publishButton=_publishButton;
@property(retain, nonatomic) MMUILabel *footnoteLabel; // @synthesize footnoteLabel=_footnoteLabel;
@property(copy, nonatomic) CDUnknownBlockType tapPublishButtonHandler; // @synthesize tapPublishButtonHandler=_tapPublishButtonHandler;
@property(nonatomic) _Bool showPublishEntry; // @synthesize showPublishEntry=_showPublishEntry;
@property(retain, nonatomic) NSString *footnote; // @synthesize footnote=_footnote;
- (void)onTapPublishButton;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

