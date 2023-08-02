//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class LiteAppStore, MMLiteAppViewController;

@interface MMLiteAppView : UIView
{
    LiteAppStore *_store;
    CDUnknownBlockType _onBodySizeChangeBlock;
    _Bool _autoHeight;
    _Bool _autoWidth;
    _Bool _isRealAppear;
    MMLiteAppViewController *_vc;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRealAppear; // @synthesize isRealAppear=_isRealAppear;
@property(retain, nonatomic) MMLiteAppViewController *vc; // @synthesize vc=_vc;
- (void)willMoveToWindow:(id)arg1;
- (void)updateByUIWindow:(id)arg1;
- (void)setAutoWidth:(_Bool)arg1;
- (void)setAutoHeight:(_Bool)arg1;
- (void)setOnBodySizeChangeBlock:(CDUnknownBlockType)arg1;
- (void)setStore:(id)arg1;
- (id)getStore;
- (void)setFrame:(struct CGRect)arg1;
- (void)attachLiteAppView:(id)arg1;
- (void)attachLiteAppView:(id)arg1 path:(id)arg2 page:(id)arg3 query:(id)arg4 signatureKey:(id)arg5 isTransparent:(_Bool)arg6 startReport:(id)arg7;
- (id)init;

@end

