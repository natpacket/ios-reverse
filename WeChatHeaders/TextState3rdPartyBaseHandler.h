//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TextState3rdPartyHandler-Protocol.h"

@class NSString, TextState3rdPartyContext;

@interface TextState3rdPartyBaseHandler : NSObject <TextState3rdPartyHandler>
{
    TextState3rdPartyContext *context;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TextState3rdPartyContext *context; // @synthesize context;
- (_Bool)isHybrid;
- (void)getSourceInfoForReferWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)canGetSourceInfoForRefer;
- (_Bool)isValid;
- (void)checkValidWithCompletionBlock:(CDUnknownBlockType)arg1 cacheOnly:(_Bool)arg2;
- (id)mediaDescription;
- (_Bool)autoHandleAppLifeCycleEvent;
- (_Bool)allowReferBackground;
- (id)mediaCoverView;
- (id)mediaContentView;
- (id)reportActivityId;
- (_Bool)doHeadImageActionWithViewController:(id)arg1;
- (_Bool)doSourceActionWithViewController:(id)arg1 scene:(unsigned int)arg2;
@property(readonly, nonatomic) _Bool useCoverForContent;
- (id)name;
- (id)customView;
@property(readonly, nonatomic) _Bool preferCustomView;
- (id)headImageView;
- (id)title;
- (id)initWithBuffer:(id)arg1 keyBuffer:(id)arg2;
- (_Bool)supportCustomMedia;
@property(readonly, nonatomic) unsigned int type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

