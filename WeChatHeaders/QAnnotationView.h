//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"
#import "TBCalloutViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, QAnnotationContainerView, QMUAnnoViewAnimationMediator, UIImage, UIImageView, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol QAnnotation;

@interface QAnnotationView : UIView <CAAnimationDelegate, UIGestureRecognizerDelegate, TBCalloutViewDelegate>
{
    int _internalZIndex;
    int _internalCollisionType;
    _Bool _selected;
    _Bool _canShowCallout;
    _Bool _draggable;
    _Bool _selectedBeforeStarting;
    _Bool _internalMarkerHidden;
    int _dragState;
    int _internalMarkerID;
    NSString *_reuseIdentifier;
    id <QAnnotation> _annotation;
    UIView *_customCalloutView;
    UIView *_leftCalloutAccessoryView;
    UIView *_rightCalloutAccessoryView;
    QAnnotationContainerView *_containerView;
    UITapGestureRecognizer *_tapGestureGecognizer;
    UITapGestureRecognizer *_tapTwiceGestureGecognizer;
    UILongPressGestureRecognizer *_longPressGestureGecognizer;
    UIImageView *_innerMarkerView;
    UIView *_callout;
    struct CGPoint _centerOffset;
    struct CGPoint _calloutOffset;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(nonatomic) _Bool internalMarkerHidden; // @synthesize internalMarkerHidden=_internalMarkerHidden;
@property(nonatomic) int internalMarkerID; // @synthesize internalMarkerID=_internalMarkerID;
@property(nonatomic) _Bool selectedBeforeStarting; // @synthesize selectedBeforeStarting=_selectedBeforeStarting;
@property(retain, nonatomic) UIView *callout; // @synthesize callout=_callout;
@property(retain, nonatomic) UIImageView *innerMarkerView; // @synthesize innerMarkerView=_innerMarkerView;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureGecognizer; // @synthesize longPressGestureGecognizer=_longPressGestureGecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapTwiceGestureGecognizer; // @synthesize tapTwiceGestureGecognizer=_tapTwiceGestureGecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureGecognizer; // @synthesize tapGestureGecognizer=_tapGestureGecognizer;
@property(nonatomic) __weak QAnnotationContainerView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) int dragState; // @synthesize dragState=_dragState;
@property(nonatomic, getter=isDraggable) _Bool draggable; // @synthesize draggable=_draggable;
@property(retain, nonatomic) UIView *rightCalloutAccessoryView; // @synthesize rightCalloutAccessoryView=_rightCalloutAccessoryView;
@property(retain, nonatomic) UIView *leftCalloutAccessoryView; // @synthesize leftCalloutAccessoryView=_leftCalloutAccessoryView;
@property(retain, nonatomic) UIView *customCalloutView; // @synthesize customCalloutView=_customCalloutView;
@property(nonatomic) _Bool canShowCallout; // @synthesize canShowCallout=_canShowCallout;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) struct CGPoint calloutOffset; // @synthesize calloutOffset=_calloutOffset;
@property(nonatomic) struct CGPoint centerOffset; // @synthesize centerOffset=_centerOffset;
@property(retain, nonatomic) id <QAnnotation> annotation; // @synthesize annotation=_annotation;
@property(copy, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
- (void)dealloc;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)initGestureRecognizers;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setHidden:(_Bool)arg1;
- (void)removeFromSuperview;
- (void)longPressGesture:(id)arg1;
- (void)tapTwiceGesture:(id)arg1;
- (void)tapGesture:(id)arg1;
- (void)makeCalloutView:(id)arg1 appear:(_Bool)arg2 animated:(_Bool)arg3;
- (void)unloadCalloutAnimated:(_Bool)arg1;
- (void)loadCalloutAnimated:(_Bool)arg1;
- (id)obtainCallout;
- (id)constructDefaultCalloutView;
- (void)calloutViewClicked:(id)arg1;
- (double)calloutView:(id)arg1 delayForRepositionWithSize:(struct CGSize)arg2;
- (void)setDragState:(int)arg1 animated:(_Bool)arg2;
- (_Bool)supportDragOperation;
@property(nonatomic) int collisionType;
@property(nonatomic) int zIndex;
- (void)udpateCenterWithCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)updateCenter;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)prepareForReuse;
@property(retain, nonatomic) UIImage *image;
- (void)calloutAccessoryAction:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)hasIndoorInfo;
- (void)notifyContainerUpdateMarker;
- (void)notifyContainerAdjustOrder;
- (void)removeObserverForAnnotation:(id)arg1;
- (void)addObserverForAnnotation:(id)arg1;
- (void)removeTargetForControl:(id)arg1;
- (void)addTargetForControl:(id)arg1;
@property(retain, nonatomic) QMUAnnoViewAnimationMediator *mediator;
- (void)animationWithDuration:(double)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 completion:(CDUnknownBlockType)arg3;
- (void)animationWithDuration:(double)arg1 coordinates:(struct CLLocationCoordinate2D *)arg2 coordinatesCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)tb_executeAnimation:(id)arg1 destinationCoordinate:(struct CLLocationCoordinate2D)arg2 completion:(CDUnknownBlockType)arg3;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)tb_constructKeyframeAnimationWithCoordinates:(struct CLLocationCoordinate2D *)arg1 coordinateCount:(unsigned long long)arg2 duration:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

