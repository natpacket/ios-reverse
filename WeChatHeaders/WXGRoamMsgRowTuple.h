//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMessageWrap;

@interface WXGRoamMsgRowTuple : NSObject
{
    CMessageWrap *_msg;
    unsigned long long _rowId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long rowId; // @synthesize rowId=_rowId;
@property(retain, nonatomic) CMessageWrap *msg; // @synthesize msg=_msg;

@end

