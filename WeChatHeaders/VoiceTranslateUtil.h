//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VoiceTranslateUtil : NSObject
{
}

+ (unsigned int)getEmojiContentLength:(id)arg1;
+ (id)mergeVoiceSlice:(id)arg1;
+ (id)getVoiceIDFromMsg:(id)arg1;
- (id)getTranslateString:(id)arg1;
- (_Bool)isLocalTransResultExist:(id)arg1;
- (id)pathForOriginVoice:(id)arg1;
- (id)pathForTranslateResult:(id)arg1;
- (id)getUserTranslateRootDir;
- (id)getSessionInfoPathWithUserName:(id)arg1;
- (id)getTransInfoIDFromMsg:(id)arg1;
- (id)getTransSessionInfoWithChatName:(id)arg1;
- (void)asyncWriteSessionInfoToPBFile:(id)arg1;

@end

