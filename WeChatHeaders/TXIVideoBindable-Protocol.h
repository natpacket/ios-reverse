//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TXCVideoFrame, TXCVideoFrameResult;
@protocol TXIVideoBindable;

@protocol TXIVideoBindable <NSObject>

@optional
- (void)processVideoFrame:(TXCVideoFrame *)arg1 onComplete:(void (^)(TXCVideoFrame *, NSError *))arg2;
- (void)processVideoFrameResult:(TXCVideoFrameResult *)arg1;
- (id <TXIVideoBindable>)bindTo:(id <TXIVideoBindable>)arg1;
@end

