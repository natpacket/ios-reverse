//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface QLocationMarkerWrapper : NSObject
{
    int _markerID;
    NSString *_markerInstruction;
    NSString *_compassInstruction;
    NSString *_directionEastInstruction;
    NSString *_directionWestInstruction;
    NSString *_directionNorthInstruction;
    NSString *_directionSouthInstruction;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *directionSouthInstruction; // @synthesize directionSouthInstruction=_directionSouthInstruction;
@property(retain, nonatomic) NSString *directionNorthInstruction; // @synthesize directionNorthInstruction=_directionNorthInstruction;
@property(retain, nonatomic) NSString *directionWestInstruction; // @synthesize directionWestInstruction=_directionWestInstruction;
@property(retain, nonatomic) NSString *directionEastInstruction; // @synthesize directionEastInstruction=_directionEastInstruction;
@property(retain, nonatomic) NSString *compassInstruction; // @synthesize compassInstruction=_compassInstruction;
@property(retain, nonatomic) NSString *markerInstruction; // @synthesize markerInstruction=_markerInstruction;
@property(nonatomic) int markerID; // @synthesize markerID=_markerID;

@end
