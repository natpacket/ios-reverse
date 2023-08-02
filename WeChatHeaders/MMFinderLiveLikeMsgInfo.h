//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderLiveAppMsg, NSMutableArray;

@interface MMFinderLiveLikeMsgInfo : NSObject
{
    unsigned int _startMsgId;
    unsigned int _endMsgId;
    unsigned int _likeUvNum;
    NSMutableArray *_userInfoList;
    FinderLiveAppMsg *_rootAppMsg;
}

+ (_Bool)checkLikeLiveMsgInfoPBValid:(id)arg1;
+ (id)createLiveLikeMsgInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveAppMsg *rootAppMsg; // @synthesize rootAppMsg=_rootAppMsg;
@property(nonatomic) unsigned int likeUvNum; // @synthesize likeUvNum=_likeUvNum;
@property(retain, nonatomic) NSMutableArray *userInfoList; // @synthesize userInfoList=_userInfoList;
@property(nonatomic) unsigned int endMsgId; // @synthesize endMsgId=_endMsgId;
@property(nonatomic) unsigned int startMsgId; // @synthesize startMsgId=_startMsgId;
- (_Bool)isMsgIdRangeEqual:(id)arg1;
- (id)description;

@end

