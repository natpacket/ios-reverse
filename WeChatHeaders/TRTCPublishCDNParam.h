//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TRTCPublishCDNParam : NSObject
{
    int _appId;
    int _bizId;
    NSString *_url;
    NSString *_streamId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) int bizId; // @synthesize bizId=_bizId;
@property(nonatomic) int appId; // @synthesize appId=_appId;
- (id)init;
- (struct ThirdPartyCdnConfig)convertToCppParams;

@end

