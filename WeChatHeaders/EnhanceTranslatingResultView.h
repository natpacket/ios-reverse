//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImage, UIImageView;

@interface EnhanceTranslatingResultView : UIView
{
    UIButton *_cancelButton;
    UIImageView *_contentImageView;
    UIImage *_originCaptureImage;
    UIImage *_originEnhanceImage;
    CDUnknownBlockType _cancelHandler;
    CDUnknownBlockType _imageClickHandler;
    CDUnknownBlockType _autoTranslatingFinishedHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType autoTranslatingFinishedHandler; // @synthesize autoTranslatingFinishedHandler=_autoTranslatingFinishedHandler;
@property(copy, nonatomic) CDUnknownBlockType imageClickHandler; // @synthesize imageClickHandler=_imageClickHandler;
@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(retain, nonatomic) UIImage *originEnhanceImage; // @synthesize originEnhanceImage=_originEnhanceImage;
@property(retain, nonatomic) UIImage *originCaptureImage; // @synthesize originCaptureImage=_originCaptureImage;
@property(retain, nonatomic) UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
- (void)translateImageClicked;
- (void)cancelButtonClicked;
- (void)setDisplayImage:(id)arg1 imgSize:(struct CGSize)arg2;
- (void)initSubviews;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

