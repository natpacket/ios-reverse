//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WCPlayerHttpMediaWrap;

@interface WCPlayerHttpMediaDownloadInfo : NSObject
{
    _Bool _bTaskStart;
    unsigned int _count;
    float _duration;
    long long _createTime;
    unsigned long long _moovoffset;
    unsigned long long _moovlength;
    NSString *_nsIdentifier;
    WCPlayerHttpMediaWrap *_mediaWrap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPlayerHttpMediaWrap *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
@property(retain, nonatomic) NSString *nsIdentifier; // @synthesize nsIdentifier=_nsIdentifier;
@property(nonatomic) float duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long moovlength; // @synthesize moovlength=_moovlength;
@property(nonatomic) unsigned long long moovoffset; // @synthesize moovoffset=_moovoffset;
@property(nonatomic) long long createTime; // @synthesize createTime=_createTime;
@property(nonatomic) _Bool bTaskStart; // @synthesize bTaskStart=_bTaskStart;
@property(nonatomic) unsigned int count; // @synthesize count=_count;
- (id)description;
- (_Bool)isSameMediaWrap:(id)arg1;
- (id)initWithMediaWrap:(id)arg1;

@end

