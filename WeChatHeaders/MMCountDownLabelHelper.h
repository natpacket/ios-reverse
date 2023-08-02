//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_source;

@interface MMCountDownLabelHelper : NSObject
{
    NSHashTable *_labels;
    NSObject<OS_dispatch_source> *_timer;
}

+ (id)shareInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSHashTable *labels; // @synthesize labels=_labels;
- (void)updateLabels;
- (void)addLabel:(id)arg1;
- (id)init;

@end

