//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CameraScanGoodsItemViewModel, NSNumber, NSString, UIImage;

@interface CameraScanCombineScanGoodsResultCardViewModel : NSObject
{
    _Bool _isFail;
    unsigned int _reportType;
    UIImage *_image;
    NSString *_title;
    NSString *_reqKey;
    NSNumber *_trackId;
    CameraScanGoodsItemViewModel *_originViewModel;
    struct CGRect _normalizedRect;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int reportType; // @synthesize reportType=_reportType;
@property(nonatomic) struct CGRect normalizedRect; // @synthesize normalizedRect=_normalizedRect;
@property(nonatomic) _Bool isFail; // @synthesize isFail=_isFail;
@property(retain, nonatomic) CameraScanGoodsItemViewModel *originViewModel; // @synthesize originViewModel=_originViewModel;
@property(retain, nonatomic) NSNumber *trackId; // @synthesize trackId=_trackId;
@property(retain, nonatomic) NSString *reqKey; // @synthesize reqKey=_reqKey;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)initWithItemViewModel:(id)arg1;

@end

