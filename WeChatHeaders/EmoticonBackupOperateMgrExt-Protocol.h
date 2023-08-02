//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AddEmoticonWrap, NSArray, NSString;

@protocol EmoticonBackupOperateMgrExt <NSObject>

@optional
- (void)onUploadEmoticonQueueChanged;
- (void)onMoveBackupEmoticonFailed:(NSArray *)arg1;
- (void)onMoveBackupEmoticonOK:(NSArray *)arg1;
- (void)onStickyBackupEmoticonFailed:(NSArray *)arg1;
- (void)onStickyBackupEmoticonOK:(NSArray *)arg1;
- (void)onAddBackupEmoticonFailed:(NSString *)arg1 reason:(unsigned long long)arg2;
- (void)onAddBackupEmoticonOK:(NSString *)arg1 addEmoticonWrap:(AddEmoticonWrap *)arg2;
- (void)onAddBackupEmoticonPendingUpload:(NSString *)arg1;
- (void)onDeleteBackupEmoticonFailed:(NSArray *)arg1;
- (void)onDeleteBackupEmoticonOK:(NSArray *)arg1;
@end

