//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderLiveTagListItem : NSObject
{
    long long _itemId;
    NSString *_title;
    id _userInfo;
}

+ (id)itemWithItemId:(long long)arg1 title:(id)arg2 userInfo:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long itemId; // @synthesize itemId=_itemId;
- (id)description;
- (_Bool)isEqual:(id)arg1;

@end
