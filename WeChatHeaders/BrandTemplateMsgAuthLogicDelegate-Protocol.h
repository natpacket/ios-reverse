//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BrandTemplateMsgAuthLogic, NSDictionary, NSString, UIViewController;

@protocol BrandTemplateMsgAuthLogicDelegate <NSObject>
- (UIViewController *)viewControllerToShowPageSheet;
- (void)onSubscriptionMessageLogicWillDismissPageSheet:(BrandTemplateMsgAuthLogic *)arg1;
- (void)onSubscriptionMessageLogicWillShowPageSheet:(BrandTemplateMsgAuthLogic *)arg1;
- (void)onSubscriptionMessageLogic:(BrandTemplateMsgAuthLogic *)arg1 finishedWithResult:(NSDictionary *)arg2 extInfo:(NSString *)arg3 success:(_Bool)arg4 errorCode:(long long)arg5 errorMessage:(NSString *)arg6;
@end

