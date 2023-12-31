//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCFinderMegaVideoDataExt-Protocol.h"
#import "WCTTableCoding-Protocol.h"

@class NSString, WCFinderContact, WCFinderMegaVideoAttach, WCMegaVideo;

@interface WCFinderMegaVideo : NSObject <WCFinderMegaVideoDataExt, WCTTableCoding, PBCoding>
{
    WCMegaVideo *_video;
    WCFinderContact *_contact;
    NSString *_username;
    unsigned long long _cacheTime;
    WCFinderMegaVideoAttach *_attach;
    NSString *_videoId;
    NSString *_videoNonceId;
}

+ (void)__wcdb_index_7:(void *)arg1;
+ (void)__wcdb_index_6:(void *)arg1;
+ (void)__wcdb_column_constraint_5:(void *)arg1;
+ (id)swift_videoNonceId;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)videoNonceId;
+ (id)swift_video;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)video;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)username;
+ (id)swift_cacheTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)cacheTime;
+ (id)swift_videoId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)videoId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
+ (void)initialize;
+ (void)PBArrayAdd_videoNonceId;
+ (void)PBArrayAdd_video;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_videoId;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *videoNonceId; // @synthesize videoNonceId=_videoNonceId;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(retain, nonatomic) WCFinderMegaVideoAttach *attach; // @synthesize attach=_attach;
@property(nonatomic) unsigned long long cacheTime; // @synthesize cacheTime=_cacheTime;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) WCMegaVideo *video; // @synthesize video=_video;
@property(readonly, copy) NSString *description;
- (id)nickName;
- (id)headURLString;
- (_Bool)isMine;
- (id)shortNonceId;
- (id)shortVideoId;
- (id)userName;
- (id)initWithFinderMegaVideo:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

