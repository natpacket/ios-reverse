//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMLiveSEIConnectMicSeatInfo : NSObject
{
    double _x;
    double _y;
    double _w;
    double _h;
    unsigned long long _i;
}

@property(nonatomic) unsigned long long i; // @synthesize i=_i;
@property(nonatomic) double h; // @synthesize h=_h;
@property(nonatomic) double w; // @synthesize w=_w;
@property(nonatomic) double y; // @synthesize y=_y;
@property(nonatomic) double x; // @synthesize x=_x;
- (struct CGRect)normalizedSeatFrame;
- (void)updateWithMicSeatInfo:(id)arg1;

@end

