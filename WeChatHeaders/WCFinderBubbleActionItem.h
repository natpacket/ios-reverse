//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCFinderBubbleReadyRequirements;

@interface WCFinderBubbleActionItem : NSObject
{
    CDUnknownBlockType _availableCheckBlock;
    CDUnknownBlockType _prepareAnimationBlock;
    CDUnknownBlockType _showAnimationBlock;
    CDUnknownBlockType _dismissAnimationBlock;
    unsigned long long _itemType;
    WCFinderBubbleReadyRequirements *_requirements;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderBubbleReadyRequirements *requirements; // @synthesize requirements=_requirements;
@property(nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
@property(copy, nonatomic) CDUnknownBlockType dismissAnimationBlock; // @synthesize dismissAnimationBlock=_dismissAnimationBlock;
@property(copy, nonatomic) CDUnknownBlockType showAnimationBlock; // @synthesize showAnimationBlock=_showAnimationBlock;
@property(copy, nonatomic) CDUnknownBlockType prepareAnimationBlock; // @synthesize prepareAnimationBlock=_prepareAnimationBlock;
@property(copy, nonatomic) CDUnknownBlockType availableCheckBlock; // @synthesize availableCheckBlock=_availableCheckBlock;

@end

