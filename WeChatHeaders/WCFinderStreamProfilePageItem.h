//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol WCFinderStreamProfilePageModel;

@interface WCFinderStreamProfilePageItem : NSObject
{
    NSString *_title;
    NSObject<WCFinderStreamProfilePageModel> *_userInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<WCFinderStreamProfilePageModel> *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end
