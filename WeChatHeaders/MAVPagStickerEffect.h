//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAVPagEffect.h"

#import "MAVLayoutInfoEffect-Protocol.h"

@class MAVEffectLayoutInfo;

@interface MAVPagStickerEffect : MAVPagEffect <MAVLayoutInfoEffect>
{
    MAVEffectLayoutInfo *_layoutInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MAVEffectLayoutInfo *layoutInfo; // @synthesize layoutInfo=_layoutInfo;
- (long long)type;

@end

