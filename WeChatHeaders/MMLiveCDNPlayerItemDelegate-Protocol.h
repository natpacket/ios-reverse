//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMLiveCDNPlayerItem, NSDictionary;

@protocol MMLiveCDNPlayerItemDelegate <NSObject>

@optional
- (_Bool)isLiveCDNPlayerItemNeedStopRenderPixel:(MMLiveCDNPlayerItem *)arg1;
- (void)onLiveCDNPlayerItem:(MMLiveCDNPlayerItem *)arg1 pixelBufferRefresh:(struct __CVBuffer *)arg2;
- (void)onMMLiveCDNPlayerItemWillChangeDelegate:(MMLiveCDNPlayerItem *)arg1;
- (void)onLiveCDNPlayerItem:(MMLiveCDNPlayerItem *)arg1 netStatus:(NSDictionary *)arg2;
- (void)onLiveCDNPlayerItem:(MMLiveCDNPlayerItem *)arg1 playEvent:(int)arg2 withParam:(NSDictionary *)arg3;
@end

