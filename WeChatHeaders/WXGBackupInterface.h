//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WXGBackupInterface : NSObject
{
}

+ (id)getIDFromVoipIniteMsg:(id)arg1;
+ (id)getIDFromPayMsg:(id)arg1;
+ (_Bool)isTextMessage:(id)arg1;
+ (void)makeupMessageWrap:(id)arg1;
+ (_Bool)isSpecialMsgInRoomContent:(id)arg1;
+ (_Bool)isSpecialMsgMayNotHaveSvrid:(id)arg1;
+ (_Bool)extAppMsgSupportBackup:(id)arg1;
+ (_Bool)extMsgSupportBackup:(id)arg1;
+ (_Bool)isMsgWrapSupportRoam:(id)arg1;
+ (_Bool)isMsgWrapSupportBackup:(id)arg1;
+ (_Bool)isBakChatName:(id)arg1;

@end
