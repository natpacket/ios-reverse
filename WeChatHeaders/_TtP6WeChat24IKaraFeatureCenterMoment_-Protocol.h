//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDate, NSString, WCMediaItem, WCMediaItemWrap;

@protocol _TtP6WeChat24IKaraFeatureCenterMoment_

@optional
- (void)thumbnailOfMomentMedia:(WCMediaItem *)arg1 downloadedAt:(NSDate *)arg2;
- (void)moment:(WCMediaItemWrap *)arg1 appearedAt:(NSDate *)arg2;
- (void)mediaOfMomentWithIdentified:(NSString *)arg1 atPosition:(long long)arg2 preparedAt:(NSDate *)arg3;
- (void)mediaOfMomentWithIdentified:(NSString *)arg1 atPosition:(long long)arg2 recalledAt:(NSDate *)arg3;
- (void)moment:(WCMediaItemWrap *)arg1 receivedAt:(NSDate *)arg2;
@end

