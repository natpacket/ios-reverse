//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MiniTaskItemBatchActionInfo : NSObject
{
    unsigned long long _action;
    long long _itemCount;
    NSString *_detail;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(nonatomic) long long itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;

@end
