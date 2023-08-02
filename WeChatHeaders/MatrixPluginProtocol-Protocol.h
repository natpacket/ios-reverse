//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MatrixIssue, NSError, NSString;
@protocol MatrixPluginListenerDelegate;

@protocol MatrixPluginProtocol <NSObject>
+ (NSString *)getTag;
- (void)reportError:(NSError *)arg1;
- (void)reportIssueCompleteWithIssue:(MatrixIssue *)arg1 success:(_Bool)arg2;
- (void)reportIssue:(MatrixIssue *)arg1;
- (void)setupPluginListener:(id <MatrixPluginListenerDelegate>)arg1;
- (void)destroy;
- (void)stop;
- (_Bool)start;
@end

