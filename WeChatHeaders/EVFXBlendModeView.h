//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UILabel;

@interface EVFXBlendModeView : UIView
{
    UILabel *m_BlendModeLabel;
    int m_BlendModeIndex;
    NSArray *m_BlendModeTexts;
    NSString *_currentBlendModeText;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak NSString *currentBlendModeText; // @synthesize currentBlendModeText=_currentBlendModeText;
- (id)switchBlendMode;
- (void)initBlendModeLabel;
- (void)initBlendModeText;
- (id)init;

@end

