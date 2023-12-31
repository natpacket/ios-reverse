//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSData, NSString;
@protocol WCAppAuthSearchLogicDelegate;

@interface WCAppAuthSearchLogic : MMObject <PBMessageObserverDelegate>
{
    unsigned int _nextPageFlag;
    unsigned int _eventID;
    id <WCAppAuthSearchLogicDelegate> _delegate;
    NSString *_keyword;
    NSData *_nextPageData;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int eventID; // @synthesize eventID=_eventID;
@property(nonatomic) unsigned int nextPageFlag; // @synthesize nextPageFlag=_nextPageFlag;
@property(retain, nonatomic) NSData *nextPageData; // @synthesize nextPageData=_nextPageData;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(nonatomic) __weak id <WCAppAuthSearchLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleSearchResp:(id)arg1;
- (_Bool)isSearchEnd;
- (_Bool)isSearching;
- (void)cancelLastKeyWordSearch;
- (_Bool)search:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

