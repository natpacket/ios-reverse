//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseServer.h"

@interface GCCommonServer : GCBaseServer
{
}

- (void)getRemindUserList:(id)arg1 context:(id)arg2 pageLimit:(unsigned int)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)reportEmptyGameRedpoint:(CDUnknownBlockType)arg1;
- (void)getLiteConfig:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
