//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CContact, VoipMonoMsg;

@interface VoIPInvitationInfo : NSObject
{
    _Bool _isVideo;
    VoipMonoMsg *_monoMsg;
    CContact *_contact;
}

+ (id)infoWithMonoMsg:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) VoipMonoMsg *monoMsg; // @synthesize monoMsg=_monoMsg;
- (_Bool)isCancelletionWithMonoMsg:(id)arg1;
- (id)newInfoWithIsVideo:(_Bool)arg1;
- (id)initWithMonoMsg:(id)arg1 contact:(id)arg2 isVideo:(_Bool)arg3;

@end

