//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class MMWebViewBackgroundAlbumAudioExtInfo, NSString;

@interface MMWebViewBackgroundAlbumAudioInfo : NSObject <PBCoding>
{
    unsigned int _durantion;
    unsigned int _offset;
    NSString *_domain;
    NSString *_albumId;
    NSString *_audioId;
    MMWebViewBackgroundAlbumAudioExtInfo *_extInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_extInfo;
+ (void)PBArrayAdd_domain;
+ (void)PBArrayAdd_offset;
+ (void)PBArrayAdd_durantion;
+ (void)PBArrayAdd_audioId;
+ (void)PBArrayAdd_albumId;
- (void).cxx_destruct;
@property(retain, nonatomic) MMWebViewBackgroundAlbumAudioExtInfo *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) unsigned int offset; // @synthesize offset=_offset;
@property(nonatomic) unsigned int durantion; // @synthesize durantion=_durantion;
@property(copy, nonatomic) NSString *audioId; // @synthesize audioId=_audioId;
@property(copy, nonatomic) NSString *albumId; // @synthesize albumId=_albumId;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
