//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MagicSclBizHostApi-Protocol.h"
#import "MagicSclRequest-Protocol.h"

@interface _TtC6WeChat21MagicSclFlutterPlugin : NSObject <MagicSclRequest, MagicSclBizHostApi>
{
    // Error parsing type: , name: handlers
    // Error parsing type: , name: rootIdToHandlerName
}

- (void).cxx_destruct;
- (id)init;
- (void)invokeBizName:(id)arg1 apiName:(id)arg2 data:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)scrollFrameSetRootId:(id)arg1 frameSetId:(id)arg2 listViewPortHeight:(id)arg3 itemOffset:(id)arg4 error:(id *)arg5;
- (void)resizeFrameSetRootId:(id)arg1 frameSetId:(id)arg2 width:(id)arg3 height:(id)arg4 error:(id *)arg5;
- (void)redrawFrameSetRootId:(id)arg1 frameSetId:(id)arg2 error:(id *)arg3;
- (void)detachFrameSetRootId:(id)arg1 frameSetId:(id)arg2 error:(id *)arg3;
- (void)attachFrameSetRootId:(id)arg1 frameSetId:(id)arg2 extra:(id)arg3 error:(id *)arg4;
- (void)destroyFrameSetRootId:(id)arg1 frameSetId:(id)arg2 error:(id *)arg3;
- (id)createFrameSetRootId:(id)arg1 name:(id)arg2 viewId:(id)arg3 error:(id *)arg4;
- (void)preInitFrameSetRootId:(id)arg1 name:(id)arg2 data:(id)arg3 extInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)changeFrameSetDataRootId:(id)arg1 data:(id)arg2 extInfo:(id)arg3 error:(id *)arg4;
- (void)redrawFrameSetRootRootId:(id)arg1 error:(id *)arg2;
- (void)resumeFrameSetRootRootId:(id)arg1 error:(id *)arg2;
- (void)pauseFrameSetRootRootId:(id)arg1 error:(id *)arg2;
- (void)destroyFrameSetRootRootId:(id)arg1 error:(id *)arg2;
- (id)createFrameSetRootBizName:(id)arg1 path:(id)arg2 query:(id)arg3 error:(id *)arg4;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;

@end

