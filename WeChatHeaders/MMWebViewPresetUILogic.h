//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;
@protocol MMWebViewPresetUILogicDelegate;

@interface MMWebViewPresetUILogic : NSObject
{
    id <MMWebViewPresetUILogicDelegate> _delegate;
    NSMutableDictionary *_functionHandlers;
    NSDictionary *_functions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *functions; // @synthesize functions=_functions;
@property(retain, nonatomic) NSMutableDictionary *functionHandlers; // @synthesize functionHandlers=_functionHandlers;
@property(nonatomic) __weak id <MMWebViewPresetUILogicDelegate> delegate; // @synthesize delegate=_delegate;
- (id)handlerForFunction:(id)arg1;
- (void)handlePresetUIConfigs:(id)arg1 permissionList:(id)arg2;
- (id)init;

@end

