//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FlutterBinaryMessenger;

@interface FlutterMemoryHost : NSObject
{
    NSObject<FlutterBinaryMessenger> *_binaryMessenger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger; // @synthesize binaryMessenger=_binaryMessenger;
- (void)freeImageCacheWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithBinaryMessenger:(id)arg1;

@end

