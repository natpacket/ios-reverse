//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class WCADChainStrengthenInfo, WCAdFinderTopicInfo;

@interface WCAdDynamicCacheInfo : NSObject <NSCoding>
{
    _Bool _adWeAppRelievedBuyFlag;
    int _adLiveStatus;
    WCADChainStrengthenInfo *_adChainStrengthenInfo;
    WCAdFinderTopicInfo *_adFinderTopicInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool adWeAppRelievedBuyFlag; // @synthesize adWeAppRelievedBuyFlag=_adWeAppRelievedBuyFlag;
@property(retain, nonatomic) WCAdFinderTopicInfo *adFinderTopicInfo; // @synthesize adFinderTopicInfo=_adFinderTopicInfo;
@property(retain, nonatomic) WCADChainStrengthenInfo *adChainStrengthenInfo; // @synthesize adChainStrengthenInfo=_adChainStrengthenInfo;
@property(nonatomic) int adLiveStatus; // @synthesize adLiveStatus=_adLiveStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

