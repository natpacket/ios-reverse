//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OVCImageTrack : NSObject
{
    SharedPtr_18dc3c11 _backingImageTrack;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) SharedPtr_18dc3c11 backingImageTrack; // @synthesize backingImageTrack=_backingImageTrack;
@property(readonly, nonatomic) unsigned long long orientation;
@property(readonly, nonatomic) unsigned long long aspectRatio;
@property(readonly, nonatomic) NSString *pixelFormatName;
@property(readonly, nonatomic) struct CGSize pixelSize;
@property(readonly, nonatomic) NSString *codecIDName;
- (id)initWithFilePath:(id)arg1;
- (id)initWithBackingImageTrack:(const void *)arg1;

@end
