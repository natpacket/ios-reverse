//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString, QVisualLayer;

@protocol QVisualLayerDelegate <NSObject>

@optional
- (void)onVisualLayerLog:(QVisualLayer *)arg1 log:(NSString *)arg2 logLevel:(int)arg3;
- (void)onVisualLayerEvent:(QVisualLayer *)arg1 eventType:(NSString *)arg2 eventInfoJson:(NSString *)arg3;
- (void)visualLayerDidFinshLoading:(QVisualLayer *)arg1 withError:(NSError *)arg2;
@end

