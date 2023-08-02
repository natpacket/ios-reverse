//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface FlutterKeyboardManager : NSObject
{
    struct unique_ptr<fml::WeakPtrFactory<FlutterKeyboardManager>, std::default_delete<fml::WeakPtrFactory<FlutterKeyboardManager>>> _weakFactory;
    NSMutableArray *_primaryResponders;
    NSMutableArray *_secondaryResponders;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSMutableArray *secondaryResponders; // @synthesize secondaryResponders=_secondaryResponders;
@property(readonly, retain, nonatomic) NSMutableArray *primaryResponders; // @synthesize primaryResponders=_primaryResponders;
- (void)dispatchToSecondaryResponders:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)handlePress:(id)arg1 nextAction:(CDUnknownBlockType)arg2;
- (WeakPtr_989ab64a)getWeakPtr;
- (void)dealloc;
- (void)addSecondaryResponder:(id)arg1;
- (void)addPrimaryResponder:(id)arg1;
- (id)init;

@end

