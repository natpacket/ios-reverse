//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MMPMStackInfo : NSObject
{
    unsigned int m_skip;
    unsigned int m_fcount;
    unsigned long long m_frames[128];
    unsigned long long m_stackHash;
    NSString *m_symbolNames;
}

+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (id)swift_symbolNames;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)symbolNames;
+ (id)swift_stackFrames;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)stackFrames;
+ (id)swift_stackHash;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)stackHash;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) NSArray *stackSymbols;
- (void)setSymbolNames:(id)arg1;
- (id)symbolNames;
- (void)setStackFrames:(id)arg1;
- (id)stackFrames;
- (void)setStackHash:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long stackHash;

@end
