//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WAAuthorizationItemData, WAContact;

@interface WAOverallAuthListCellDataModel : NSObject
{
    WAAuthorizationItemData *_authItem;
    WAContact *_contact;
}

+ (id)createByAuthItem:(id)arg1 contact:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WAContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) WAAuthorizationItemData *authItem; // @synthesize authItem=_authItem;

@end

