//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WAEJTouchData;

@protocol EJGestureDelegate <NSObject>
- (void)onTouchMoved:(WAEJTouchData *)arg1;
- (void)onTouchCancel:(WAEJTouchData *)arg1;
- (void)onTouchEnd:(WAEJTouchData *)arg1;
- (void)onTouchBegin:(WAEJTouchData *)arg1;
@end

