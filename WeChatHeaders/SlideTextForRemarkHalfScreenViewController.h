//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIHalfScreenViewController.h"

#import "SlideTextDelegate-Protocol.h"
#import "WSWebViewPluginableProtocol-Protocol.h"

@class NSString, SlideTextJSHandler, UIButton, WSTemplateLogicController, WSWebViewPluginScheduler;

@interface SlideTextForRemarkHalfScreenViewController : MMUIHalfScreenViewController <WSWebViewPluginableProtocol, SlideTextDelegate>
{
    WSWebViewPluginScheduler *pluginScheduler;
    CDUnknownBlockType _doneBlock;
    UIButton *_cancelButton;
    UIButton *_doneButton;
    WSTemplateLogicController *_logicController;
    SlideTextJSHandler *_jsHandler;
    NSString *_helloMsg;
    NSString *_selectedText;
    long long _currentCharLength;
    long long _maxCharLength;
}

- (void).cxx_destruct;
@property(nonatomic) long long maxCharLength; // @synthesize maxCharLength=_maxCharLength;
@property(nonatomic) long long currentCharLength; // @synthesize currentCharLength=_currentCharLength;
@property(retain, nonatomic) NSString *selectedText; // @synthesize selectedText=_selectedText;
@property(retain, nonatomic) NSString *helloMsg; // @synthesize helloMsg=_helloMsg;
@property(retain, nonatomic) SlideTextJSHandler *jsHandler; // @synthesize jsHandler=_jsHandler;
@property(retain, nonatomic) WSTemplateLogicController *logicController; // @synthesize logicController=_logicController;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(copy, nonatomic) CDUnknownBlockType doneBlock; // @synthesize doneBlock=_doneBlock;
@property(retain, nonatomic) WSWebViewPluginScheduler *pluginScheduler; // @synthesize pluginScheduler;
- (unsigned long long)localJSBizType;
- (id)getLocalJSLogic;
- (id)getCurViewController;
- (void)onSelectedTextChanged:(id)arg1;
- (void)onDone;
- (void)viewDidLayoutSubviews;
- (void)initTopView;
- (void)viewDidLoad;
- (void)initLogicController;
- (void)initPlugin;
- (id)initWithHelloMsg:(id)arg1 currentCharLength:(long long)arg2 maxCharLength:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

