//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderLiveBaseCgi.h"

@class NSData, NSString;

@interface WCFinderLiveCommitGiftCustomizationCgi : WCFinderLiveBaseCgi
{
    _Bool _styleChanged;
    NSData *_liveCookies;
    NSString *_giftProductId;
    NSString *_targetStyleId;
    NSString *_targetCustomText;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSString *targetCustomText; // @synthesize targetCustomText=_targetCustomText;
@property(retain, nonatomic) NSString *targetStyleId; // @synthesize targetStyleId=_targetStyleId;
@property(nonatomic) _Bool styleChanged; // @synthesize styleChanged=_styleChanged;
@property(retain, nonatomic) NSString *giftProductId; // @synthesize giftProductId=_giftProductId;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithTaskId:(id)arg1 liveCookies:(id)arg2 giftProductId:(id)arg3 styleChanged:(_Bool)arg4 styleId:(id)arg5 newCustomText:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failBlock:(CDUnknownBlockType)arg8;

@end

