//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBNonFlattenedFileSystem.h"

@interface MBFlattenedFileSystem : MBNonFlattenedFileSystem
{
}

- (void)releaseMe;
- (void)initializeMe;
- (void)readFilesOfDirectoryAtPath:(id)arg1 localIDPrefix:(id)arg2 array:(id)arg3;
- (id)readHomeDir:(id)arg1;
- (_Bool)accept:(id)arg1;
- (_Bool)writeFile:(id)arg1 data:(id)arg2 isAppend:(_Bool)arg3 error:(id *)arg4;
- (_Bool)unlink:(id)arg1 error:(id *)arg2;
- (id)readDir:(id)arg1 error:(id *)arg2;

@end

