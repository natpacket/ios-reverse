//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class NSString, WCMegaVideo;

@interface WCFinderVideoAttachment : NSObject <WCTColumnCoding, PBCoding>
{
    unsigned long long _videoId;
    WCMegaVideo *_video;
    NSString *_videoNonceId;
}

+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_videoNonceId;
+ (void)PBArrayAdd_video;
+ (void)PBArrayAdd_videoId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *videoNonceId; // @synthesize videoNonceId=_videoNonceId;
@property(retain, nonatomic) WCMegaVideo *video; // @synthesize video=_video;
@property(nonatomic) unsigned long long videoId; // @synthesize videoId=_videoId;
- (id)genVideoAttachment;
@property(readonly, copy) NSString *description;
- (id)initWithMegaVideo:(id)arg1;
- (id)initWithFinderVideoAttachment:(id)arg1;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

