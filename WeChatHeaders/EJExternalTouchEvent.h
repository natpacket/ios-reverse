//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface EJExternalTouchEvent : NSObject
{
    unsigned char _length;
    unsigned char _changed;
    unsigned long long _timestamp;
    NSArray *_touches;
    long long _action;
}

@property(nonatomic) unsigned char changed; // @synthesize changed=_changed;
@property(nonatomic) long long action; // @synthesize action=_action;
@property(nonatomic) unsigned char length; // @synthesize length=_length;
@property(retain, nonatomic) NSArray *touches; // @synthesize touches=_touches;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

@end

