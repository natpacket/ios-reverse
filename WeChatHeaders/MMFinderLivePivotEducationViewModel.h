//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MMFinderLivePivotEducationViewModelDelegate;

@interface MMFinderLivePivotEducationViewModel : NSObject
{
    double _tipsHeight;
    double _tipsAlpha;
    id <MMFinderLivePivotEducationViewModelDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMFinderLivePivotEducationViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double tipsAlpha; // @synthesize tipsAlpha=_tipsAlpha;
@property(nonatomic) double tipsHeight; // @synthesize tipsHeight=_tipsHeight;
@property(readonly, nonatomic) NSString *tipsString;
@property(readonly, nonatomic) NSString *arrowImageName;
@property(readonly, nonatomic) double tipsTop;
@property(readonly, nonatomic) double arrowIconTop;
- (double)tipsViewDefaultHeight;
- (double)tipsViewMaxHeight;
- (void)onScrollViewDidScroll:(id)arg1;
@property(readonly, nonatomic) double backgroundViewY;

@end
