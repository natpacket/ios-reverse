//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderSearchContactViewModelProtocol-Protocol.h"

@class NSArray, NSData, NSString, WCFinderMentionSearchSection, WCFinderSearchItemReportQueue;
@protocol WCFinderFollowSearchContactViewModelDelegate;

@interface WCFinderFollowSearchContactViewModel : NSObject <WCFinderSearchContactViewModelProtocol>
{
    long long _scene;
    _Bool _queryContinueFlag;
    NSString *_latestQueryText;
    NSString *_latestRequestID;
    NSData *_lastBuffer;
    WCFinderSearchItemReportQueue *_itemReportQueue;
    id <WCFinderFollowSearchContactViewModelDelegate> _delegate;
    WCFinderMentionSearchSection *_followSec;
    WCFinderMentionSearchSection *_moreSec;
    NSArray *_sections;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) WCFinderMentionSearchSection *moreSec; // @synthesize moreSec=_moreSec;
@property(retain, nonatomic) WCFinderMentionSearchSection *followSec; // @synthesize followSec=_followSec;
@property(nonatomic) __weak id <WCFinderFollowSearchContactViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderSearchItemReportQueue *itemReportQueue; // @synthesize itemReportQueue=_itemReportQueue;
@property(nonatomic) _Bool queryContinueFlag; // @synthesize queryContinueFlag=_queryContinueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSString *latestRequestID; // @synthesize latestRequestID=_latestRequestID;
@property(retain, nonatomic) NSString *latestQueryText; // @synthesize latestQueryText=_latestQueryText;
@property(nonatomic) long long scene;
- (id)titleForSection:(id)arg1;
- (_Bool)moreThenOneSection;
- (unsigned long long)mentionTypeForSection:(long long)arg1;
- (id)searchPlaceHolder;
- (_Bool)isFinderContact;
- (unsigned long long)cellActionType;
- (void)reportItemExposeInfo;
- (void)recordResultDisplay:(id)arg1;
- (id)searchInfoAtIndexPath:(id)arg1;
- (unsigned long long)searchRowNumsWithSection:(unsigned long long)arg1;
- (unsigned long long)searchNumsOfSection;
- (void)resetSearchStatus;
- (_Bool)isNoMoreData;
- (id)latestQueryString;
- (void)onQueryNextPageContact;
- (void)queryContactWith:(id)arg1;
- (_Bool)isRepetSearch:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

