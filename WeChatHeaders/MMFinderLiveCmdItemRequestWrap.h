//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderCmdItem, FinderCmdRet;

@interface MMFinderLiveCmdItemRequestWrap : NSObject
{
    FinderCmdItem *_cmdItem;
    FinderCmdRet *_cmdRet;
    CDUnknownBlockType _completeCallBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType completeCallBlock; // @synthesize completeCallBlock=_completeCallBlock;
@property(retain, nonatomic) FinderCmdRet *cmdRet; // @synthesize cmdRet=_cmdRet;
@property(retain, nonatomic) FinderCmdItem *cmdItem; // @synthesize cmdItem=_cmdItem;

@end
