//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCDataItem;

@interface WCTimelineDeleteDataItemWrap : NSObject
{
    WCDataItem *_deleteDataItem;
    struct CGPoint _tableViewContentOffset;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGPoint tableViewContentOffset; // @synthesize tableViewContentOffset=_tableViewContentOffset;
@property(readonly, nonatomic) WCDataItem *deleteDataItem; // @synthesize deleteDataItem=_deleteDataItem;
- (id)initWithDeleteDataItem:(id)arg1 tableViewContentOffset:(struct CGPoint)arg2;

@end
