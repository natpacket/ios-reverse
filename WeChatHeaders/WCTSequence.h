//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCTSequence : NSObject
{
    int _seq;
    NSString *_name;
}

+ (id)tableName;
+ (id)swift_seq;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)seq;
+ (id)swift_name;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)name;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) int seq; // @synthesize seq=_seq;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;

@end
