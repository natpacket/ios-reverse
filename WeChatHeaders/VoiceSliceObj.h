//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface VoiceSliceObj : NSObject
{
    int _loc;
    int _len;
    unsigned long long _timestamp;
    NSString *_content;
    struct _NSRange _range;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(nonatomic) int len; // @synthesize len=_len;
@property(nonatomic) int loc; // @synthesize loc=_loc;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)containIndex:(long long)arg1;
- (id)init;

@end
