//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class QLocationCompassPayload, QLocationRedlinePayload, UIColor, UIImage;

@interface QLocationMarkerPayload : NSObject
{
    UIImage *_icon;
    UIColor *_circleFillColor;
    QLocationCompassPayload *_compass;
    QLocationRedlinePayload *_redline;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QLocationRedlinePayload *redline; // @synthesize redline=_redline;
@property(retain, nonatomic) QLocationCompassPayload *compass; // @synthesize compass=_compass;
@property(retain, nonatomic) UIColor *circleFillColor; // @synthesize circleFillColor=_circleFillColor;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;

@end

