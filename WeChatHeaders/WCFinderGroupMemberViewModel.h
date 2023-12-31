//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString;

@interface WCFinderGroupMemberViewModel : NSObject
{
    _Bool _hasFetchData;
    _Bool _isFetchingData;
    _Bool _continueFlag;
    _Bool _hadJoinedGroup;
    NSMutableArray *_items;
    unsigned long long _authorCount;
    CDUnknownBlockType _dataChangeBlock;
    NSData *_lastBuffer;
    NSString *_finderUsername;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(copy, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(copy, nonatomic) CDUnknownBlockType dataChangeBlock; // @synthesize dataChangeBlock=_dataChangeBlock;
@property(nonatomic) unsigned long long authorCount; // @synthesize authorCount=_authorCount;
@property(nonatomic) _Bool hadJoinedGroup; // @synthesize hadJoinedGroup=_hadJoinedGroup;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(nonatomic) _Bool isFetchingData; // @synthesize isFetchingData=_isFetchingData;
@property(nonatomic) _Bool hasFetchData; // @synthesize hasFetchData=_hasFetchData;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void)fetchMoreData;
- (id)initWithFinderContact:(id)arg1;

@end

