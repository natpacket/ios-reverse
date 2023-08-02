//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCFinderDiscoveryNearbyLiveCollectionViewCellConfig : NSObject
{
    _Bool _canShowVolumeEduView;
    _Bool _canShowDescription;
    double _avatorImageDiameter;
    double _authInfoIconLeftMargin;
    double _authInfoIconHeight;
    double _activityImageViewMargin;
    double _nickNameMargin;
    double _avatarImageDescLabelMargin;
    double _descLabelRecommendReasonMargin;
    double _recommendReasonAvatarMargin;
}

+ (id)bannerLiveConfig;
+ (id)defaultConfig;
@property(nonatomic) double recommendReasonAvatarMargin; // @synthesize recommendReasonAvatarMargin=_recommendReasonAvatarMargin;
@property(nonatomic) double descLabelRecommendReasonMargin; // @synthesize descLabelRecommendReasonMargin=_descLabelRecommendReasonMargin;
@property(nonatomic) double avatarImageDescLabelMargin; // @synthesize avatarImageDescLabelMargin=_avatarImageDescLabelMargin;
@property(nonatomic) double nickNameMargin; // @synthesize nickNameMargin=_nickNameMargin;
@property(nonatomic) double activityImageViewMargin; // @synthesize activityImageViewMargin=_activityImageViewMargin;
@property(nonatomic) double authInfoIconHeight; // @synthesize authInfoIconHeight=_authInfoIconHeight;
@property(nonatomic) double authInfoIconLeftMargin; // @synthesize authInfoIconLeftMargin=_authInfoIconLeftMargin;
@property(nonatomic) double avatorImageDiameter; // @synthesize avatorImageDiameter=_avatorImageDiameter;
@property(nonatomic) _Bool canShowDescription; // @synthesize canShowDescription=_canShowDescription;
@property(nonatomic) _Bool canShowVolumeEduView; // @synthesize canShowVolumeEduView=_canShowVolumeEduView;
- (void)reset;

@end

