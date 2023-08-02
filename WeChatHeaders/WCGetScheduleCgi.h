//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseCgi.h"

@class NSData, NSMutableArray;
@protocol WCGetScheduleCgiDelegate;

@interface WCGetScheduleCgi : WCBaseCgi
{
    _Bool _firstPageOnly;
    _Bool _isRunning;
    _Bool _isCancel;
    id <WCGetScheduleCgiDelegate> _delegate;
    NSData *_pageContext;
    NSMutableArray *_scheduleItems;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isCancel; // @synthesize isCancel=_isCancel;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(retain, nonatomic) NSMutableArray *scheduleItems; // @synthesize scheduleItems=_scheduleItems;
@property(nonatomic) _Bool firstPageOnly; // @synthesize firstPageOnly=_firstPageOnly;
@property(retain, nonatomic) NSData *pageContext; // @synthesize pageContext=_pageContext;
@property(nonatomic) __weak id <WCGetScheduleCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)requestScheduleItemsWithPage:(id)arg1;
- (void)requestAllScheduleItemsWithPageContext:(id)arg1;
- (void)requestAllScheduleItems;
- (void)requestFirstPageItems;
- (id)init;

@end
