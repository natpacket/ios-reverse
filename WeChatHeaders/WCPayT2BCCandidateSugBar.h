//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "WCPayT2BCCandidateViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIScrollView;
@protocol WCPayT2BCCandidateSugBarDelegate;

@interface WCPayT2BCCandidateSugBar : UIView <UIScrollViewDelegate, WCPayT2BCCandidateViewDelegate>
{
    id <WCPayT2BCCandidateSugBarDelegate> _m_delegate;
    NSMutableArray *_m_resultsArray;
    NSMutableArray *_m_candidateViewArray;
    NSString *_m_inputText;
    UIScrollView *_scrollView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSString *m_inputText; // @synthesize m_inputText=_m_inputText;
@property(retain, nonatomic) NSMutableArray *m_candidateViewArray; // @synthesize m_candidateViewArray=_m_candidateViewArray;
@property(retain, nonatomic) NSMutableArray *m_resultsArray; // @synthesize m_resultsArray=_m_resultsArray;
@property(nonatomic) __weak id <WCPayT2BCCandidateSugBarDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onClickCandidateView:(id)arg1;
- (void)reloadCandidateView;
- (void)restScrollView;
- (void)reloadCandidateViewWithMatchResults:(id)arg1 inputText:(id)arg2;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

