//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OMJCamResourceManager : NSObject
{
    SharedPtr_8810e4e6 _backingResourceManager;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) SharedPtr_8810e4e6 backingResourceManager; // @synthesize backingResourceManager=_backingResourceManager;
- (_Bool)isMusicLoadedWithID:(id)arg1;
- (void)cancelLoadMusicWithTaskID:(int)arg1;
- (int)loadMusicWithMusicID:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)getBeautyAdjustmentDescWithMaterialID:(id)arg1;
- (_Bool)isMaterialLoadedWithInfo:(id)arg1;
- (void)cancelLoadMaterialWithTaskID:(int)arg1;
- (int)loadMaterialWithInfo:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)removeTemplateWithTemplateID:(id)arg1 version:(unsigned long long)arg2;
- (id)getTemplateInfoWithTemplateID:(id)arg1 version:(unsigned long long)arg2;
- (_Bool)isTemplateLoadedWithTemplateID:(id)arg1 version:(unsigned long long)arg2;
- (void)cancelAll;
- (void)cancelLoadWithTaskID:(int)arg1;
- (int)loadTemplateWithTemplateID:(id)arg1 loadPriority:(long long)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (int)loadTemplateWithTemplateID:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (int)loadBuiltinCommonResourcesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)isBuiltinCommonResourcesLoaded;
- (id)initWithBackingResourceManager:(const void *)arg1;

@end
