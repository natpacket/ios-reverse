//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMLiveInfoItem, NSString;

@interface MMLiveMsgTipsExpandViewModel : NSObject
{
    MMLiveInfoItem *_liveInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveInfoItem *liveInfo; // @synthesize liveInfo=_liveInfo;
@property(readonly, nonatomic) NSString *roomId;
@property(readonly, nonatomic) unsigned long long liveId;
@property(readonly, nonatomic) NSString *anchorHeadImgUrl;
@property(readonly, nonatomic) NSString *anchorDisplayName;
@property(readonly, nonatomic) NSString *anchor;
- (id)initWithLiveInfo:(id)arg1;

@end
