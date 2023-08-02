//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class EditImageAttr, EditVideoAttr, NSString;

@interface WCMomentsPostAssetInfo : NSObject <NSCopying>
{
    _Bool _isEdited;
    NSString *_assetId;
    long long _assetType;
    long long _mediaSource;
    EditImageAttr *_imageEditAttr;
    EditVideoAttr *_videoEditAttr;
    NSString *_uploadHash;
    struct CGSize _uploadMediaSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize uploadMediaSize; // @synthesize uploadMediaSize=_uploadMediaSize;
@property(copy, nonatomic) NSString *uploadHash; // @synthesize uploadHash=_uploadHash;
@property(retain, nonatomic) EditVideoAttr *videoEditAttr; // @synthesize videoEditAttr=_videoEditAttr;
@property(retain, nonatomic) EditImageAttr *imageEditAttr; // @synthesize imageEditAttr=_imageEditAttr;
@property(nonatomic) _Bool isEdited; // @synthesize isEdited=_isEdited;
@property(nonatomic) long long mediaSource; // @synthesize mediaSource=_mediaSource;
@property(nonatomic) long long assetType; // @synthesize assetType=_assetType;
@property(copy, nonatomic) NSString *assetId; // @synthesize assetId=_assetId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSightDraft:(id)arg1 fromSource:(long long)arg2;
- (id)initWithImage:(id)arg1 fromSource:(long long)arg2;
- (id)initWithAssetId:(id)arg1 assetType:(long long)arg2 fromSource:(long long)arg3;

@end
