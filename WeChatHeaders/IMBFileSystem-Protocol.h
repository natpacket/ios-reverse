//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSDictionary, NSString;

@protocol IMBFileSystem <NSObject>
- (NSData *)readFile:(NSString *)arg1 position:(long long)arg2 length:(long long)arg3 error:(id *)arg4;

@optional
- (NSData *)getFileDataByPath:(NSString *)arg1;
- (void)releaseMe;
- (void)initializeMe;
- (_Bool)accept:(NSString *)arg1;
- (_Bool)mkdir:(NSString *)arg1 recursive:(_Bool)arg2 error:(id *)arg3;
- (_Bool)writeFile:(NSString *)arg1 data:(NSData *)arg2 isAppend:(_Bool)arg3 error:(id *)arg4;
- (_Bool)unlink:(NSString *)arg1 error:(id *)arg2;
- (NSDictionary *)stat:(NSString *)arg1 recursive:(_Bool)arg2 error:(id *)arg3;
- (NSArray *)readDir:(NSString *)arg1 error:(id *)arg2;
- (_Bool)access:(NSString *)arg1 error:(id *)arg2;
@end

