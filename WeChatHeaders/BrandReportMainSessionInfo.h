//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMessageWrap;

@interface BrandReportMainSessionInfo : NSObject
{
    _Bool _isShowRedDot;
    unsigned int _msgNotifyType;
    unsigned int _unreadCount;
    unsigned long long _rowIndexMainFrame;
    CMessageWrap *_sessionMsg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMessageWrap *sessionMsg; // @synthesize sessionMsg=_sessionMsg;
@property(nonatomic) unsigned int unreadCount; // @synthesize unreadCount=_unreadCount;
@property(nonatomic) unsigned int msgNotifyType; // @synthesize msgNotifyType=_msgNotifyType;
@property(nonatomic) _Bool isShowRedDot; // @synthesize isShowRedDot=_isShowRedDot;
@property(nonatomic) unsigned long long rowIndexMainFrame; // @synthesize rowIndexMainFrame=_rowIndexMainFrame;
- (unsigned int)getEnterRedDotMsgType;

@end
