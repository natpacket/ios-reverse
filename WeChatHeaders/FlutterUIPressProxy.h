//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIEvent, UIPress;

@interface FlutterUIPressProxy : NSObject
{
    UIPress *_press;
    UIEvent *_event;
}

@property(readonly, nonatomic) UIEvent *event; // @synthesize event=_event;
@property(readonly, nonatomic) UIPress *press; // @synthesize press=_press;
- (double)timestamp;
- (long long)type;
- (id)key;
- (long long)phase;
- (id)initWithPress:(id)arg1 withEvent:(id)arg2;

@end
