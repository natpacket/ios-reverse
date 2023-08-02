//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class NSArray;

@interface EditImageCropGridView : MMUIView
{
    _Bool _enableShowGridCorners;
    NSArray *_blLineView;
    NSArray *_brLineView;
    NSArray *_tlLineView;
    NSArray *_trLineView;
    NSArray *_borderGridLines;
    NSArray *_verticalGridLines;
    NSArray *_horizontalGridLines;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableShowGridCorners; // @synthesize enableShowGridCorners=_enableShowGridCorners;
@property(retain, nonatomic) NSArray *_horizontalGridLines; // @synthesize _horizontalGridLines;
@property(retain, nonatomic) NSArray *_verticalGridLines; // @synthesize _verticalGridLines;
@property(retain, nonatomic) NSArray *_borderGridLines; // @synthesize _borderGridLines;
@property(retain, nonatomic) NSArray *_trLineView; // @synthesize _trLineView;
@property(retain, nonatomic) NSArray *_tlLineView; // @synthesize _tlLineView;
@property(retain, nonatomic) NSArray *_brLineView; // @synthesize _brLineView;
@property(retain, nonatomic) NSArray *_blLineView; // @synthesize _blLineView;
- (id)createLineView;
- (void)layoutLines;
- (void)setFrame:(struct CGRect)arg1;
- (void)didMoveToSuperview;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCorners:(_Bool)arg1;

@end

