//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayRefuseTransferRequest : NSObject
{
    NSString *m_nsTransferID;
    NSString *m_nsFromUserName;
    unsigned long long m_uiInvalidTime;
    unsigned int _groupType;
    NSString *_group_username;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int groupType; // @synthesize groupType=_groupType;
@property(retain, nonatomic) NSString *group_username; // @synthesize group_username=_group_username;
@property(nonatomic) unsigned long long m_uiInvalidTime; // @synthesize m_uiInvalidTime;
@property(retain, nonatomic) NSString *m_nsFromUserName; // @synthesize m_nsFromUserName;
@property(retain, nonatomic) NSString *m_nsTransferID; // @synthesize m_nsTransferID;
- (void)dealloc;

@end

