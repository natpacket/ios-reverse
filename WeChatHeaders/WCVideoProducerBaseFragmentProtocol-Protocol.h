//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol WCVideoProducerBaseFragmentProtocol <NSObject>
+ (id)new;
- (void)dismissAnimated:(_Bool)arg1 withCompletion:(void (^)(void))arg2;
- (void)showAnimated:(_Bool)arg1 withCompletion:(void (^)(void))arg2;
- (double)getFragmentVisibleHeight;
- (double)getFragmentHeight;
- (_Bool)isShowing;
- (void)updateContainerFrame:(struct CGRect)arg1;
- (id)initWithContainerFrame:(struct CGRect)arg1;
- (id)init;
@end
