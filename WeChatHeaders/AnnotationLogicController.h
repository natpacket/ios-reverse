//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class MMAddressAnnotation, NSArray, NSMutableDictionary, QMapView;

@interface AnnotationLogicController : MMObject
{
    NSMutableDictionary *_annotationDic;
    QMapView *_mapView;
    MMAddressAnnotation *_addressAnnotation;
}

- (void).cxx_destruct;
- (CDStruct_b7cb895d)getConvexRegion:(_Bool)arg1;
- (void)onlyShowMe;
- (void)removeAllFriendAnnotationCalloutAnimation;
- (void)removeAllHeadAnnotationCalloutAnimation;
- (void)setAllHeadAnnotationShowCallout:(_Bool)arg1 Animated:(_Bool)arg2;
- (void)removeAddressAnnotation;
- (id)getAddressAnnotation;
- (id)addAddressAnnotation:(id)arg1;
- (void)removeMyselfAnnotation;
- (id)getMyselfAnnotation;
- (id)addMyselfAnnotationWithHeading:(double)arg1;
- (id)getUserLocation;
- (void)removeAllFriendAnnoations;
- (void)removeFriendAnnotationWithUsername:(id)arg1;
- (id)getFriendAnnotationWithUsername:(id)arg1;
- (id)addFriendAnnotation:(id)arg1;
@property(readonly, nonatomic) NSArray *allAnnotations;
@property(readonly, nonatomic) NSArray *allUsernames;
- (void)dealloc;
- (id)initWithMapView:(id)arg1;

@end

