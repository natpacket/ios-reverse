//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WeChatTabRedDotStruct : NSObject
{
    _Bool _isBadgeAtTab;
    _Bool _hadNoteInfo;
    unsigned int _tabIndex;
    unsigned long long _unread;
}

@property(nonatomic) _Bool hadNoteInfo; // @synthesize hadNoteInfo=_hadNoteInfo;
@property(nonatomic) unsigned long long unread; // @synthesize unread=_unread;
@property(nonatomic) _Bool isBadgeAtTab; // @synthesize isBadgeAtTab=_isBadgeAtTab;
@property(nonatomic) unsigned int tabIndex; // @synthesize tabIndex=_tabIndex;
- (id)description;
- (id)initWithIndex:(unsigned int)arg1;

@end

