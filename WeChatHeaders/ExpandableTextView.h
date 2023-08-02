//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RichTextView.h"

#import "ILinkEventExt-Protocol.h"

@class ExpandableTextViewConfig, NSString;
@protocol ExpandableTextViewDelegate;

@interface ExpandableTextView : RichTextView <ILinkEventExt>
{
    _Bool _isExpand;
    id <ExpandableTextViewDelegate> _expandDelegate;
    ExpandableTextViewConfig *_config;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ExpandableTextViewConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak id <ExpandableTextViewDelegate> expandDelegate; // @synthesize expandDelegate=_expandDelegate;
@property(nonatomic) _Bool isExpand; // @synthesize isExpand=_isExpand;
- (void)onTextClicked:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)setContent:(id)arg1;
- (void)setFWidth:(double)arg1;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
