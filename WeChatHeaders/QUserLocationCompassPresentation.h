//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

@interface QUserLocationCompassPresentation : NSObject
{
    UIImage *_compassImage;
    UIImage *_directionNorth;
    UIImage *_directionSouth;
    UIImage *_directionEast;
    UIImage *_directionWest;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *directionWest; // @synthesize directionWest=_directionWest;
@property(retain, nonatomic) UIImage *directionEast; // @synthesize directionEast=_directionEast;
@property(retain, nonatomic) UIImage *directionSouth; // @synthesize directionSouth=_directionSouth;
@property(retain, nonatomic) UIImage *directionNorth; // @synthesize directionNorth=_directionNorth;
@property(retain, nonatomic) UIImage *compassImage; // @synthesize compassImage=_compassImage;

@end

