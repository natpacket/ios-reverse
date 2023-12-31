//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMFinderProfileLiveNoticeContext : NSObject
{
    _Bool _showsMoreNoticesAutomatically;
    _Bool _profileHasTakenActions;
    _Bool _profileHasCheckedMoreNoticesAutomatically;
    _Bool _profileHasShowedMoreNotices;
    double _timeoutIntervalForShowingMoreNoticesAutomatically;
    double _profileLoadTime;
}

@property(readonly, nonatomic) _Bool profileHasShowedMoreNotices; // @synthesize profileHasShowedMoreNotices=_profileHasShowedMoreNotices;
@property(readonly, nonatomic) _Bool profileHasCheckedMoreNoticesAutomatically; // @synthesize profileHasCheckedMoreNoticesAutomatically=_profileHasCheckedMoreNoticesAutomatically;
@property(readonly, nonatomic) _Bool profileHasTakenActions; // @synthesize profileHasTakenActions=_profileHasTakenActions;
@property(readonly, nonatomic) double profileLoadTime; // @synthesize profileLoadTime=_profileLoadTime;
@property(nonatomic) double timeoutIntervalForShowingMoreNoticesAutomatically; // @synthesize timeoutIntervalForShowingMoreNoticesAutomatically=_timeoutIntervalForShowingMoreNoticesAutomatically;
@property(nonatomic) _Bool showsMoreNoticesAutomatically; // @synthesize showsMoreNoticesAutomatically=_showsMoreNoticesAutomatically;
- (_Bool)canShowMoreNoticesAutomatically;
- (void)recordProfileDidShowMoreNotices;
- (void)recordProfileDidCheckMoreNoticesAutomatically;
- (void)recordProfileDidTakeActions;
- (void)recordProfileDidLoad;

@end

