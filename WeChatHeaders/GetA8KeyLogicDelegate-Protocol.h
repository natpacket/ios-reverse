//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GetA8KeyResp, NSDictionary, NSMutableDictionary, NSString, NSURL;

@protocol GetA8KeyLogicDelegate <NSObject>

@optional
- (void)onGetWeWorkKFInfo:(NSString *)arg1;
- (unsigned long long)getSourceType;
- (NSString *)sourceWeAppAppid;
- (void)onPresentToOtherVC;
- (void)onNeedStartScan;
- (NSMutableDictionary *)onGetA8KeyWillOpenFinder;
- (void)onGetA8KeyWillOpenWeApp:(NSDictionary *)arg1;
- (void)onGetA8KeyOneClickLoginWithURL:(NSURL *)arg1 extraInfo:(NSDictionary *)arg2;
- (void)onGetProductInfoHandleEnd;
- (void)onGetProductInfoEnd;
- (void)onGetProductInfoStart;
- (void)onSearchContactHandleEnd;
- (void)onSearchContactGetResult;
- (void)onSearchContactFail;
- (void)onSearchContactEnd;
- (void)onSearchContactStart;
- (void)onGetA8KeyFail;
- (void)onGetA8KeyEnd;
- (void)onGetA8KeyResult:(GetA8KeyResp *)arg1;
- (void)onGetA8KeyResultType:(unsigned int)arg1;
- (void)onGetA8KeyStart;
@end

