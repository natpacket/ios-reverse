//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderGroupLiveChatSaveToLocalBaseHandler.h"

@class NSString;

@interface WCFinderGroupLiveChatSaveToLocalFileHandler : WCFinderGroupLiveChatSaveToLocalBaseHandler
{
    unsigned int _lastCRC32;
    NSString *_filePath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) unsigned int lastCRC32; // @synthesize lastCRC32=_lastCRC32;
- (void)setupFilePath:(id)arg1;
- (_Bool)finishSaveAndUpdateTag:(id)arg1 tag:(unsigned long long)arg2;
- (_Bool)finishSaveAndUpdateTag:(id)arg1;
- (void)clear;
- (id)loadWithFilePath:(id)arg1;
- (_Bool)checkFreeTmpSpaceWriteSize:(unsigned long long)arg1;
- (_Bool)save:(id)arg1 filePath:(id)arg2;

@end
