//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface FlutterStandardReader : NSObject
{
    NSData *_data;
    struct _NSRange _range;
}

- (id)readValueOfType:(unsigned char)arg1;
- (id)readValue;
- (id)readTypedDataOfType:(long long)arg1;
- (void)readAlignment:(unsigned char)arg1;
- (id)readUTF8;
- (id)readData:(unsigned long long)arg1;
- (unsigned int)readSize;
- (unsigned char)readByte;
- (void)readBytes:(void *)arg1 length:(unsigned long long)arg2;
- (_Bool)hasMore;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end

