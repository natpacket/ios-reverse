//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMPMImageInfo : NSObject
{
    NSString *_uuid;
    unsigned long long _address;
    unsigned long long _size;
}

+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (id)swift_size;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)size;
+ (id)swift_address;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)address;
+ (id)swift_uuid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)uuid;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) unsigned long long address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;

@end

