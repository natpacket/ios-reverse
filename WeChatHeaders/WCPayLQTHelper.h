//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCPayLQTHelper : NSObject
{
}

+ (void)openTinyappFromDialogWithUsername:(id)arg1 path:(id)arg2;
+ (void)openH5FromDialogWithUrl:(id)arg1;
+ (void)handleDialogActionWithBtnData:(id)arg1 continueHandler:(CDUnknownBlockType)arg2;
+ (void)showLqtDialog:(id)arg1 continueHandler:(CDUnknownBlockType)arg2;
+ (void)showLqtDialog:(id)arg1;
+ (_Bool)urlForFetch:(id)arg1;
+ (_Bool)urlForSave:(id)arg1;
+ (_Bool)urlForDetail:(id)arg1;
+ (_Bool)validUrl:(id)arg1;
+ (id)traceInfoFromUrl:(id)arg1;
+ (id)operateIdFromUrl:(id)arg1;

@end
