//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WSComplianceChecker : NSObject
{
}

+ (void)ReportPopupWindowForInteraction:(unsigned long long)arg1 scene:(unsigned long long)arg2 action:(unsigned long long)arg3;
- (id)genDialogForInteraction:(unsigned long long)arg1 scene:(unsigned long long)arg2;
- (_Bool)isAuthorizdForInteraction:(unsigned long long)arg1;
- (id)storageKeyForInteraction:(unsigned long long)arg1;
- (void)requestAuthorizationForInteraction:(unsigned long long)arg1 scene:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;

@end

