//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VoIPMessageUtils : NSObject
{
}

+ (void)supplementLocalBubbleMessageWrapToUsername:(id)arg1 withWordingType:(int)arg2 isVideo:(_Bool)arg3 roomID:(unsigned long long)arg4 roomKey:(unsigned long long)arg5 inviteID:(unsigned int)arg6 duration:(unsigned int)arg7 isCaller:(_Bool)arg8 needRedDot:(_Bool)arg9 needFixTime:(_Bool)arg10 createTime:(unsigned int)arg11 exceptionType:(unsigned long long)arg12 status:(unsigned int)arg13 isIlink:(_Bool)arg14;
+ (id)wordingWithType:(int)arg1 isSender:(_Bool)arg2 duration:(unsigned int)arg3;

@end
