//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TextState3rdPartyDataItem : NSObject
{
    unsigned int _type;
    NSString *_buffer;
    NSString *_keyBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *keyBuffer; // @synthesize keyBuffer=_keyBuffer;
@property(retain, nonatomic) NSString *buffer; // @synthesize buffer=_buffer;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (_Bool)isEqualToDataItem:(id)arg1;
- (id)jumpInfo;
- (id)initWithJumpInfo:(id)arg1;

@end
