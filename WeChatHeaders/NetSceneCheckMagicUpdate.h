//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSString;

@interface NetSceneCheckMagicUpdate : MMObject <PBMessageObserverDelegate>
{
    CDUnknownBlockType _completionHandler;
    NSString *_mPackageId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *mPackageId; // @synthesize mPackageId=_mPackageId;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (id)getDefaultConditions;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)checkMagicPkgUpdateWithCondition:(id)arg1 base:(id)arg2 patch:(id)arg3 check:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)dealloc;

@end

