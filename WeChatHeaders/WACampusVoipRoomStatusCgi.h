//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseCgi.h"

@class NSString;

@interface WACampusVoipRoomStatusCgi : WCBaseCgi
{
    NSString *_groupId;
    long long _roomStatus;
}

+ (void)voipRoom:(id)arg1 syncStatus:(long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long roomStatus; // @synthesize roomStatus=_roomStatus;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (id)init;

@end

