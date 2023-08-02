//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DefaultFileSystem.h"

@class NSString;

@interface MBNonFlattenedFileSystem : DefaultFileSystem
{
    NSString *mBizName;
    NSString *mPathPrefix;
}

- (void).cxx_destruct;
- (void)releaseMe;
- (void)initializeMe;
- (id)traversePath:(id)arg1;
- (_Bool)accept:(id)arg1;
- (_Bool)writeFile:(id)arg1 data:(id)arg2 isAppend:(_Bool)arg3 error:(id *)arg4;
- (id)readFile:(id)arg1 position:(long long)arg2 length:(long long)arg3 error:(id *)arg4;
- (_Bool)unlink:(id)arg1 error:(id *)arg2;
- (id)stat:(id)arg1 recursive:(_Bool)arg2 error:(id *)arg3;
- (id)readDir:(id)arg1 error:(id *)arg2;
- (_Bool)mkdir:(id)arg1 recursive:(_Bool)arg2 error:(id *)arg3;
- (_Bool)access:(id)arg1 error:(id *)arg2;
- (id)initWithPkgPath:(id)arg1 prefix:(id)arg2;

@end
