//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WCMomentsTemplateInfo;

@interface WCMomentsTemplateShareInfo : NSObject
{
    long long _shareSource;
    NSString *_itemID;
    WCMomentsTemplateInfo *_templateInfo;
    NSString *_extInfo;
    NSString *_title;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) WCMomentsTemplateInfo *templateInfo; // @synthesize templateInfo=_templateInfo;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(nonatomic) long long shareSource; // @synthesize shareSource=_shareSource;

@end

