//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FlutterKeySecondaryResponder-Protocol.h"
#import "UIIndirectScribbleInteractionDelegate-Protocol.h"

@class FlutterTextInputView, FlutterTextInputViewAccessibilityHider, NSMutableDictionary, NSString, NSTimer, UIViewController;
@protocol FlutterIndirectScribbleDelegate, FlutterTextInputDelegate, FlutterViewResponder;

@interface FlutterTextInputPlugin : NSObject <FlutterKeySecondaryResponder, UIIndirectScribbleInteractionDelegate>
{
    NSTimer *_enableFlutterTextInputViewAccessibilityTimer;
    WeakPtr_193805a4 _engine;
    id <FlutterTextInputDelegate> _textInputDelegate;
    UIViewController *_viewController;
    id <FlutterIndirectScribbleDelegate> _indirectScribbleDelegate;
    NSMutableDictionary *_scribbleElements;
    NSMutableDictionary *_autofillContext;
    FlutterTextInputView *_activeView;
    FlutterTextInputViewAccessibilityHider *_inputHider;
    id <FlutterViewResponder> _viewResponder;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <FlutterViewResponder> viewResponder; // @synthesize viewResponder=_viewResponder;
@property(retain, nonatomic) FlutterTextInputViewAccessibilityHider *inputHider; // @synthesize inputHider=_inputHider;
@property(retain, nonatomic) FlutterTextInputView *activeView; // @synthesize activeView=_activeView;
@property(readonly, nonatomic) NSMutableDictionary *autofillContext; // @synthesize autofillContext=_autofillContext;
@property(retain, nonatomic) NSMutableDictionary *scribbleElements; // @synthesize scribbleElements=_scribbleElements;
@property(nonatomic) id <FlutterIndirectScribbleDelegate> indirectScribbleDelegate; // @synthesize indirectScribbleDelegate=_indirectScribbleDelegate;
@property(nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) id <FlutterTextInputDelegate> textInputDelegate; // @synthesize textInputDelegate=_textInputDelegate;
- (_Bool)handlePress:(id)arg1;
- (void)resetViewResponder;
- (void)setupIndirectScribbleInteraction:(id)arg1;
- (void)indirectScribbleInteraction:(id)arg1 requestElementsInRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGRect)indirectScribbleInteraction:(id)arg1 frameForElement:(id)arg2;
- (void)indirectScribbleInteraction:(id)arg1 didFinishWritingInElement:(id)arg2;
- (void)indirectScribbleInteraction:(id)arg1 willBeginWritingInElement:(id)arg2;
- (_Bool)indirectScribbleInteraction:(id)arg1 shouldDelayFocusForElement:(id)arg2;
- (void)indirectScribbleInteraction:(id)arg1 focusElementIfNeeded:(id)arg2 referencePoint:(struct CGPoint)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)indirectScribbleInteraction:(id)arg1 isElementFocused:(id)arg2;
- (void)clearTextInputClient;
- (void)setTextInputEditingState:(id)arg1;
- (void)addToInputParentViewIfNeeded:(id)arg1;
- (void)resetAllClientIds;
- (void)changeInputViewsAutofillVisibility:(_Bool)arg1;
- (void)cleanUpViewHierarchy:(_Bool)arg1 clearText:(_Bool)arg2 delayRemoval:(_Bool)arg3;
- (id)textInputViews;
- (id)hostView;
- (id)getOrCreateAutofillableView:(id)arg1 isPasswordAutofill:(_Bool)arg2;
- (id)updateAndShowAutofillViews:(id)arg1 focusedField:(id)arg2 isPasswordRelated:(_Bool)arg3;
- (id)createInputViewWith:(id)arg1;
- (void)setTextInputClient:(int)arg1 withConfiguration:(id)arg2;
- (void)triggerAutofillSave:(_Bool)arg1;
- (void)hideTextInput;
- (void)enableActiveViewAccessibility;
- (void)showTextInput;
- (void)setSelectionRects:(id)arg1;
- (void)updateMarkedRect:(id)arg1;
- (void)setEditableSizeAndTransform:(id)arg1;
- (void)handleMethodCall:(id)arg1 result:(CDUnknownBlockType)arg2;
- (id)textInputView;
- (void)removeEnableFlutterTextInputViewAccessibilityTimer;
- (void)dealloc;
- (id)init;
- (id)initWithEngine:(WeakPtr_193805a4)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

