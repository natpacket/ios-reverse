//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderContactExtRelationInfo, FinderContactWxFriendInfo, NSMutableArray, NSString;

@interface FinderGetContactListReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *commentContactList; // @dynamic commentContactList;
@property(retain, nonatomic) NSMutableArray *commentLikeContactList; // @dynamic commentLikeContactList;
@property(nonatomic) unsigned int contactType; // @dynamic contactType;
@property(nonatomic) unsigned int enterType; // @dynamic enterType;
@property(retain, nonatomic) FinderContactExtRelationInfo *extRelInfo; // @dynamic extRelInfo;
@property(retain, nonatomic) NSMutableArray *fansContactList; // @dynamic fansContactList;
@property(retain, nonatomic) NSMutableArray *favContactList; // @dynamic favContactList;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSMutableArray *finderUsernameList; // @dynamic finderUsernameList;
@property(retain, nonatomic) FinderContactWxFriendInfo *friendInfo; // @dynamic friendInfo;
@property(retain, nonatomic) NSMutableArray *msgContactList; // @dynamic msgContactList;
@property(retain, nonatomic) NSMutableArray *strangerInfos; // @dynamic strangerInfos;
@property(retain, nonatomic) NSString *wxUsername; // @dynamic wxUsername;

@end

