//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "MMStarRatingViewDelegate-Protocol.h"

@class FinderNpsSurveyQuestion, FinderNpsSurveyTaskConf, MMStarRatingView, NSMutableArray, NSString, UILabel;

@interface WCFinderNpsSurveyView : MMUIView <MMStarRatingViewDelegate>
{
    CDUnknownBlockType _answerButtonClickedBlock;
    CDUnknownBlockType _starRatingViewClickedBlock;
    FinderNpsSurveyTaskConf *_taskConf;
    FinderNpsSurveyQuestion *_surveyQuestion;
    UILabel *_questionLabel;
    NSMutableArray *_answerButtonList;
    MMStarRatingView *_starRatingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMStarRatingView *starRatingView; // @synthesize starRatingView=_starRatingView;
@property(retain, nonatomic) NSMutableArray *answerButtonList; // @synthesize answerButtonList=_answerButtonList;
@property(retain, nonatomic) UILabel *questionLabel; // @synthesize questionLabel=_questionLabel;
@property(retain, nonatomic) FinderNpsSurveyQuestion *surveyQuestion; // @synthesize surveyQuestion=_surveyQuestion;
@property(retain, nonatomic) FinderNpsSurveyTaskConf *taskConf; // @synthesize taskConf=_taskConf;
@property(copy, nonatomic) CDUnknownBlockType starRatingViewClickedBlock; // @synthesize starRatingViewClickedBlock=_starRatingViewClickedBlock;
@property(copy, nonatomic) CDUnknownBlockType answerButtonClickedBlock; // @synthesize answerButtonClickedBlock=_answerButtonClickedBlock;
- (void)starRatingView:(id)arg1 scorePercentDidChange:(double)arg2;
- (void)onAnswerButtonClicked:(id)arg1;
- (void)flexLayoutQuestionLabelAndStarRatingView;
- (void)flexLayoutQuestionLabelAndAnswerButtonList;
- (void)addQuestionLabelAndStarRatingView;
- (void)addQuestionLabelAndAnswerButtonList;
- (void)removeStarRatingView;
- (void)removeAnswerButtonList;
- (void)updateTaskConf:(id)arg1 surveyQuestion:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
