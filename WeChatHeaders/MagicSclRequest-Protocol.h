//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSNumber, NSString;

@protocol MagicSclRequest
- (void)scrollFrameSetRootId:(NSString *)arg1 frameSetId:(NSString *)arg2 listViewPortHeight:(NSNumber *)arg3 itemOffset:(NSNumber *)arg4 error:(id *)arg5;
- (void)resizeFrameSetRootId:(NSString *)arg1 frameSetId:(NSString *)arg2 width:(NSNumber *)arg3 height:(NSNumber *)arg4 error:(id *)arg5;
- (void)redrawFrameSetRootId:(NSString *)arg1 frameSetId:(NSString *)arg2 error:(id *)arg3;
- (void)detachFrameSetRootId:(NSString *)arg1 frameSetId:(NSString *)arg2 error:(id *)arg3;
- (void)attachFrameSetRootId:(NSString *)arg1 frameSetId:(NSString *)arg2 extra:(NSString *)arg3 error:(id *)arg4;
- (void)destroyFrameSetRootId:(NSString *)arg1 frameSetId:(NSString *)arg2 error:(id *)arg3;
- (NSString *)createFrameSetRootId:(NSString *)arg1 name:(NSString *)arg2 viewId:(NSNumber *)arg3 error:(id *)arg4;
- (void)preInitFrameSetRootId:(NSString *)arg1 name:(NSString *)arg2 data:(NSString *)arg3 extInfo:(NSString *)arg4 completion:(void (^)(NSNumber *, FlutterError *))arg5;
- (void)changeFrameSetDataRootId:(NSString *)arg1 data:(NSString *)arg2 extInfo:(NSString *)arg3 error:(id *)arg4;
- (void)redrawFrameSetRootRootId:(NSString *)arg1 error:(id *)arg2;
- (void)resumeFrameSetRootRootId:(NSString *)arg1 error:(id *)arg2;
- (void)pauseFrameSetRootRootId:(NSString *)arg1 error:(id *)arg2;
- (void)destroyFrameSetRootRootId:(NSString *)arg1 error:(id *)arg2;
- (NSString *)createFrameSetRootBizName:(NSString *)arg1 path:(NSString *)arg2 query:(NSString *)arg3 error:(id *)arg4;
@end

