//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MAVLogger <NSObject>
- (void)mavLogError:(NSString *)arg1;
- (void)mavLogWarning:(NSString *)arg1;
- (void)mavLogDebug:(NSString *)arg1;
- (void)mavLogInfo:(NSString *)arg1;
@end
