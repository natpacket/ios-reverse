//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface WCCanvasRadarChartItemInfo : MMObject <NSCoding>
{
    NSString *_label;
    NSString *_score;
    double _value;
}

- (void).cxx_destruct;
@property(nonatomic) double value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *score; // @synthesize score=_score;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

