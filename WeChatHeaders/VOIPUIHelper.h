//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VOIPUIHelper : NSObject
{
}

+ (_Bool)shouldBlockUserRingRecommend;
+ (_Bool)shouldSupportNewSpeakerBtn;
+ (_Bool)shouldSupportToastLocationSame;
+ (_Bool)shouldSupportSlipGesture;
+ (_Bool)shouldDisableCameraTurnOffDesign;
+ (_Bool)shouldDisableVirtualBackground;
+ (id)FormVoipMessageContentWithInviteType:(int)arg1 RoomId:(unsigned long long)arg2 Key:(long long)arg3 UiStatus:(int)arg4 RecvTime:(unsigned int)arg5 WordingType:(unsigned int)arg6 Duration:(unsigned int)arg7;
+ (id)FormVoipMessageWithUsrname:(id)arg1 andInviteType:(int)arg2 CallFromMyself:(_Bool)arg3 WordingType:(unsigned int)arg4 Duration:(unsigned int)arg5 roomID:(unsigned long long)arg6 roomKey:(long long)arg7;
+ (id)FormVoipMessageWithUsrname:(id)arg1 andInviteType:(int)arg2 CallFromMyself:(_Bool)arg3 WordingType:(unsigned int)arg4 Duration:(unsigned int)arg5;

@end
