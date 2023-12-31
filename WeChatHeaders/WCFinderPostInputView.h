//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "WCFinderPostUsualTopicContainerViewDelegate-Protocol.h"

@class NSString, UIButton, WCFinderPostUsualTopicContainerView, WCFinderPostUsualTopicLogic;
@protocol WCFinderPostInputViewDelegate;

@interface WCFinderPostInputView : UIImageView <WCFinderPostUsualTopicContainerViewDelegate>
{
    _Bool _forbidRecommendTopic;
    id <WCFinderPostInputViewDelegate> _delegate;
    UIButton *_expressionButton;
    WCFinderPostUsualTopicLogic *_usualTopicLogic;
    WCFinderPostUsualTopicContainerView *_topicContainerView;
    unsigned long long _commentScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) WCFinderPostUsualTopicContainerView *topicContainerView; // @synthesize topicContainerView=_topicContainerView;
@property(retain, nonatomic) WCFinderPostUsualTopicLogic *usualTopicLogic; // @synthesize usualTopicLogic=_usualTopicLogic;
@property(retain, nonatomic) UIButton *expressionButton; // @synthesize expressionButton=_expressionButton;
@property(nonatomic) _Bool forbidRecommendTopic; // @synthesize forbidRecommendTopic=_forbidRecommendTopic;
@property(nonatomic) __weak id <WCFinderPostInputViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)horizonViewClickItemWith:(id)arg1 inputTextTopicModel:(id)arg2 dataIndex:(long long)arg3;
- (void)updateTopicWithTextTopicModel:(id)arg1;
- (void)updateInputViewStyle:(unsigned long long)arg1;
- (void)reloadExpressionButtonImageMode:(long long)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 inputViewStyle:(unsigned long long)arg2 commentScene:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

