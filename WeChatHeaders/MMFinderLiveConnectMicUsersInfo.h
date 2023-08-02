//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMFinderLiveConnectMicUser, NSArray;

@interface MMFinderLiveConnectMicUsersInfo : NSObject
{
    _Bool _hasFocusedUser;
    _Bool _isGlobalSmallMode;
    unsigned long long _anchorZOrder;
    unsigned long long _anchorFocusState;
    unsigned long long _anchorUIType;
    unsigned long long _anchorHeatValue;
    double _aspectRatio;
    unsigned long long _micLayoutMode;
    unsigned long long _anchorMicIndex;
    unsigned long long _cloudMixBackgroundType;
    NSArray *_micAudienceUsersList;
    MMFinderLiveConnectMicUser *_otherRoomMicAnchor;
    NSArray *_otherRoomMicAudienceUsersList;
    NSArray *_allMicUsersList;
    NSArray *_holeList;
    NSArray *_unoccupiedSeatList;
    struct CGRect _normalizedAnchorFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *unoccupiedSeatList; // @synthesize unoccupiedSeatList=_unoccupiedSeatList;
@property(retain, nonatomic) NSArray *holeList; // @synthesize holeList=_holeList;
@property(retain, nonatomic) NSArray *allMicUsersList; // @synthesize allMicUsersList=_allMicUsersList;
@property(retain, nonatomic) NSArray *otherRoomMicAudienceUsersList; // @synthesize otherRoomMicAudienceUsersList=_otherRoomMicAudienceUsersList;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *otherRoomMicAnchor; // @synthesize otherRoomMicAnchor=_otherRoomMicAnchor;
@property(retain, nonatomic) NSArray *micAudienceUsersList; // @synthesize micAudienceUsersList=_micAudienceUsersList;
@property(nonatomic) unsigned long long cloudMixBackgroundType; // @synthesize cloudMixBackgroundType=_cloudMixBackgroundType;
@property(nonatomic) unsigned long long anchorMicIndex; // @synthesize anchorMicIndex=_anchorMicIndex;
@property(nonatomic) unsigned long long micLayoutMode; // @synthesize micLayoutMode=_micLayoutMode;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) _Bool isGlobalSmallMode; // @synthesize isGlobalSmallMode=_isGlobalSmallMode;
@property(nonatomic) unsigned long long anchorHeatValue; // @synthesize anchorHeatValue=_anchorHeatValue;
@property(nonatomic) unsigned long long anchorUIType; // @synthesize anchorUIType=_anchorUIType;
@property(nonatomic) _Bool hasFocusedUser; // @synthesize hasFocusedUser=_hasFocusedUser;
@property(nonatomic) unsigned long long anchorFocusState; // @synthesize anchorFocusState=_anchorFocusState;
@property(nonatomic) unsigned long long anchorZOrder; // @synthesize anchorZOrder=_anchorZOrder;
@property(nonatomic) struct CGRect normalizedAnchorFrame; // @synthesize normalizedAnchorFrame=_normalizedAnchorFrame;
- (id)fakeAnchorMicUser;
@property(readonly, nonatomic) unsigned long long connectMicSeiMode;
@property(readonly, nonatomic) _Bool isGrabOrLeadMicMode;
@property(readonly, nonatomic) _Bool isInConnectedMicUI;

@end

