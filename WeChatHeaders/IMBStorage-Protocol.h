//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MBErrorInfo, NSArray, NSString;

@protocol IMBStorage <NSObject>
- (MBErrorInfo *)setLocalData:(NSString *)arg1 otherBizName:(NSString *)arg2 key:(NSString *)arg3 data:(NSString *)arg4 dataType:(NSString *)arg5;
- (NSArray *)getLocalData:(NSString *)arg1 otherBizName:(NSString *)arg2 key:(NSString *)arg3;
@end

