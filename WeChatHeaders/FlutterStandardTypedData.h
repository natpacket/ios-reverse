//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface FlutterStandardTypedData : NSObject
{
    unsigned char _elementSize;
    unsigned int _elementCount;
    NSData *_data;
    long long _type;
}

+ (id)typedDataWithData:(id)arg1 type:(long long)arg2;
+ (id)typedDataWithFloat64:(id)arg1;
+ (id)typedDataWithFloat32:(id)arg1;
+ (id)typedDataWithInt64:(id)arg1;
+ (id)typedDataWithInt32:(id)arg1;
+ (id)typedDataWithBytes:(id)arg1;
@property(readonly, nonatomic) unsigned char elementSize; // @synthesize elementSize=_elementSize;
@property(readonly, nonatomic) unsigned int elementCount; // @synthesize elementCount=_elementCount;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1 type:(long long)arg2;

@end

