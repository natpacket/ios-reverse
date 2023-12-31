//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;
@protocol WebviewJSEventHandlerBaseDelegate;

@interface WebviewJSEventHandlerFacade : NSObject
{
    NSMutableDictionary *m_functionHandlers;
    NSMutableDictionary *m_functionCallExtraDataMap;
    NSDictionary *m_functionMap;
    id <WebviewJSEventHandlerBaseDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WebviewJSEventHandlerBaseDelegate> m_delegate; // @synthesize m_delegate;
- (void)OnWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)setJSFunctionMap:(id)arg1;
- (id)extraDataForNextJSEventCalled:(id)arg1;
- (_Bool)canHandleJSEvent:(id)arg1;
- (id)handlerForFunction:(id)arg1;
- (id)getExistedHandlerForFunction:(id)arg1;
- (id)getExtraDataForEvent:(id)arg1;
- (void)handleOpenFinderChattingUI:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (id)init;

@end

