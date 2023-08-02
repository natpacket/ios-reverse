//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TXCDispatchQueue, UIView;
@protocol TXIGlContext, TXIVideoRenderViewDelegate;

@protocol TXIVideoRenderViewInterface <NSObject>
@property(readonly, nonatomic) struct CGSize viewSize;
@property(nonatomic) __weak id <TXIVideoRenderViewDelegate> renderDelegate;
- (void)showFocusViewAtPoint:(struct CGPoint)arg1;
- (void)snapshotWithImageSize:(struct CGSize)arg1 fillMode:(unsigned long long)arg2 rotation:(unsigned long long)arg3 onComplete:(void (^)(UIImage *))arg4;
- (void)render;
- (_Bool)prepareToRender;
- (void)embedViewIn:(UIView *)arg1;
- (id)initWithQueue:(TXCDispatchQueue *)arg1 context:(id <TXIGlContext>)arg2;
@end
