//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WCPayPaidDetailJumpInfo, WCPayPaidDetailLogoViewData;

@interface WCPayPaidDetailLeadTailViewData : NSObject
{
    WCPayPaidDetailLogoViewData *_unsettled_logo;
    WCPayPaidDetailLogoViewData *_settled_logo;
    NSString *_desc;
    WCPayPaidDetailJumpInfo *_jump_info;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayPaidDetailJumpInfo *jump_info; // @synthesize jump_info=_jump_info;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) WCPayPaidDetailLogoViewData *settled_logo; // @synthesize settled_logo=_settled_logo;
@property(retain, nonatomic) WCPayPaidDetailLogoViewData *unsettled_logo; // @synthesize unsettled_logo=_unsettled_logo;

@end

