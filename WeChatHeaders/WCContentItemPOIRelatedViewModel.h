//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCContentItem, WCFinderSharePOIRelatedItem;

@interface WCContentItemPOIRelatedViewModel : NSObject
{
    WCFinderSharePOIRelatedItem *_shareItem;
    WCContentItem *_contentItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCContentItem *contentItem; // @synthesize contentItem=_contentItem;
@property(retain, nonatomic) WCFinderSharePOIRelatedItem *shareItem; // @synthesize shareItem=_shareItem;
- (id)initWithContentItem:(id)arg1;

@end

