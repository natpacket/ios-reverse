//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCFinderLongPressModel : NSObject
{
    unsigned long long _menuItemType;
    id _target;
    SEL _selector;
}

- (void).cxx_destruct;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) unsigned long long menuItemType; // @synthesize menuItemType=_menuItemType;
- (id)initWithType:(unsigned long long)arg1 target:(id)arg2 selector:(SEL)arg3;

@end

