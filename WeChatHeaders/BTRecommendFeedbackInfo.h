//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface BTRecommendFeedbackInfo : NSObject
{
    _Bool _bShowFeedback;
    NSArray *_feedbackReasonArr;
    NSString *_negativeFeedbackTitle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *negativeFeedbackTitle; // @synthesize negativeFeedbackTitle=_negativeFeedbackTitle;
@property(nonatomic) _Bool bShowFeedback; // @synthesize bShowFeedback=_bShowFeedback;
@property(retain, nonatomic) NSArray *feedbackReasonArr; // @synthesize feedbackReasonArr=_feedbackReasonArr;

@end

