//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderEncashPrepareInfo, NSString;

@interface LiveFetchMoneyVCRealNameAuthParams : NSObject
{
    _Bool _needRefreshPage;
    unsigned int _businessId;
    NSString *_token;
    FinderEncashPrepareInfo *_targetEncashPrepareInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderEncashPrepareInfo *targetEncashPrepareInfo; // @synthesize targetEncashPrepareInfo=_targetEncashPrepareInfo;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) _Bool needRefreshPage; // @synthesize needRefreshPage=_needRefreshPage;
@property(nonatomic) unsigned int businessId; // @synthesize businessId=_businessId;

@end
