//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface InternalAppTerminateManager : NSObject
{
    struct list<liteav::LogUploaderInterface::InstanceInfo, std::__1::allocator<liteav::LogUploaderInterface::InstanceInfo>> _instance_info_list;
}

+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onAppTerminate;
- (void)deleteInstanceInfo:(unsigned int)arg1 roomId:(const basic_string_8a3d048a *)arg2 userId:(const basic_string_8a3d048a *)arg3 strRole:(const basic_string_8a3d048a *)arg4;
- (void)saveInstanceInfo:(unsigned int)arg1 roomId:(const basic_string_8a3d048a *)arg2 userId:(const basic_string_8a3d048a *)arg3 strRole:(const basic_string_8a3d048a *)arg4;
- (id)init;

@end

