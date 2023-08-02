//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "WARichTextViewHelperDelegate-Protocol.h"

@class NSString, UILabel;
@protocol IWARichTextViewHelper;

@interface WAFullScreenPrivacyInfoViewController : MMUIViewController <WARichTextViewHelperDelegate>
{
    NSString *_wording;
    UILabel *_titleLabel;
    id <IWARichTextViewHelper> _richTextHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IWARichTextViewHelper> richTextHelper; // @synthesize richTextHelper=_richTextHelper;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *wording; // @synthesize wording=_wording;
- (void)onLinkClicked:(id)arg1 linkRect:(struct CGRect)arg2;
- (void)onReturn;
- (void)updateNavigationItems;
- (id)navigationBarBackgroundColor;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithWording:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

