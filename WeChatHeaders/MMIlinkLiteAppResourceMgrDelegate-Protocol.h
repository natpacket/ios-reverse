//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMIlinkLiteAppResourceInfo, NSString;

@protocol MMIlinkLiteAppResourceMgrDelegate <NSObject>
- (void)onDownloadResource:(MMIlinkLiteAppResourceInfo *)arg1 errorType:(unsigned long long)arg2 errorCode:(int)arg3;
- (void)onCheckResource:(NSString *)arg1 errorType:(unsigned long long)arg2 errorCode:(int)arg3;
- (void)configParameters:(void *)arg1;
@end
