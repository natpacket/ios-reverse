//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MultiTalkMemberCell;
@protocol MultiTalkMemberProtocol;

@interface MultiTalkMemberCollectionItem : NSObject
{
    NSObject<MultiTalkMemberProtocol> *_member;
    MultiTalkMemberCell *_memberCell;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MultiTalkMemberCell *memberCell; // @synthesize memberCell=_memberCell;
@property(retain, nonatomic) NSObject<MultiTalkMemberProtocol> *member; // @synthesize member=_member;
- (id)initWithMember:(id)arg1 memberCell:(id)arg2;

@end

