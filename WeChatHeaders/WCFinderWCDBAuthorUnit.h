//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCTTable;

@interface WCFinderWCDBAuthorUnit : NSObject
{
    WCTTable *_blackListTable;
    WCTTable *_fansTable;
    WCTTable *_finderAuthorMentionTable;
    WCTTable *_authorFeedLikeList;
    WCTTable *_authorFeedFavList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *authorFeedFavList; // @synthesize authorFeedFavList=_authorFeedFavList;
@property(retain, nonatomic) WCTTable *authorFeedLikeList; // @synthesize authorFeedLikeList=_authorFeedLikeList;
@property(retain, nonatomic) WCTTable *finderAuthorMentionTable; // @synthesize finderAuthorMentionTable=_finderAuthorMentionTable;
@property(retain, nonatomic) WCTTable *fansTable; // @synthesize fansTable=_fansTable;
@property(retain, nonatomic) WCTTable *blackListTable; // @synthesize blackListTable=_blackListTable;

@end

