//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMUnderlineTabsBaseTabItem;

@interface MMUnderlineTabsInnerTabInfo : NSObject
{
    _Bool _selected;
    MMUnderlineTabsBaseTabItem *_item;
    double _tabViewX;
    double _tabViewWidth;
    double _underLineViewWidth;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) double underLineViewWidth; // @synthesize underLineViewWidth=_underLineViewWidth;
@property(nonatomic) double tabViewWidth; // @synthesize tabViewWidth=_tabViewWidth;
@property(nonatomic) double tabViewX; // @synthesize tabViewX=_tabViewX;
@property(retain, nonatomic) MMUnderlineTabsBaseTabItem *item; // @synthesize item=_item;
- (void)callSelectStateChangeBlock;

@end

