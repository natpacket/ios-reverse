//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MJTemplateMediaResource : NSObject
{
    unsigned long long _mediaType;
    NSString *_mediaUrl;
    NSString *_mediaId;
    NSString *_mediaFileMd5;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *mediaFileMd5; // @synthesize mediaFileMd5=_mediaFileMd5;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(copy, nonatomic) NSString *mediaUrl; // @synthesize mediaUrl=_mediaUrl;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
- (id)description;
- (id)initWithResource:(id)arg1;

@end

