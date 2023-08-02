//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SnsAlbumFeedBehaviour, SnsUserBehaviourInfo;

@interface WCTimelinePhotoAlbumUserActionReporter : NSObject
{
    SnsUserBehaviourInfo *_userBehaviourInfoSession;
    SnsAlbumFeedBehaviour *_albumFeedBehaviourSession;
}

+ (id)getAlbumFeedBehaviourSessionWithUsername:(id)arg1 homepageType:(long long)arg2;
+ (void)endAlbumFeedBehaviourSessionWithUsername:(id)arg1 homepageType:(long long)arg2;
+ (void)beginAlbumFeedBehaviourSessionWithUsername:(id)arg1 homepageType:(long long)arg2 dataItem:(id)arg3 isDetailSession:(_Bool)arg4;
+ (id)getBehaviourInfoSessionWithUsername:(id)arg1 homepageType:(long long)arg2;
+ (void)endBehaviourInfoSessionWithUsername:(id)arg1 homepageType:(long long)arg2;
+ (long long)homepageTypeWithBrowseSceneType:(long long)arg1;
+ (long long)browseSceneTypeWithHomepageType:(long long)arg1;
+ (id)albumSessionIDWithUsername:(id)arg1 homepageType:(long long)arg2;
+ (void)beginBehaviourInfoSessionWithUsername:(id)arg1 homepageType:(long long)arg2;
+ (id)reporterKeyWithUsername:(id)arg1 homepageType:(long long)arg2;
+ (id)sharedInstanceWithUsername:(id)arg1 homepageType:(long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) SnsAlbumFeedBehaviour *albumFeedBehaviourSession; // @synthesize albumFeedBehaviourSession=_albumFeedBehaviourSession;
@property(retain, nonatomic) SnsUserBehaviourInfo *userBehaviourInfoSession; // @synthesize userBehaviourInfoSession=_userBehaviourInfoSession;

@end

