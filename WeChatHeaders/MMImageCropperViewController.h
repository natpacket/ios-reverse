//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EditImageInitialViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class EditImageIntialView, NSString, UIImage;
@protocol MMImageCropperDelegate;

@interface MMImageCropperViewController : MMUIViewController <UIScrollViewDelegate, EditImageInitialViewDelegate>
{
    EditImageIntialView *_editImageInitialView;
    id <MMImageCropperDelegate> _delegate;
    UIImage *_originalImage;
    long long _cropperViewStyle;
    struct CGSize _rectRatioSize;
}

- (void).cxx_destruct;
@property(nonatomic) long long cropperViewStyle; // @synthesize cropperViewStyle=_cropperViewStyle;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
@property(nonatomic) struct CGSize rectRatioSize; // @synthesize rectRatioSize=_rectRatioSize;
@property(nonatomic) __weak id <MMImageCropperDelegate> delegate; // @synthesize delegate=_delegate;
- (id)currentViewController;
- (void)getOriginalImage:(CDUnknownBlockType)arg1;
- (void)getDisplayImage:(CDUnknownBlockType)arg1;
- (void)OnClickEditImageDoneBarButton;
- (void)OnClickEditImageBackBarButton;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initView;
- (void)viewDidLoad;
- (_Bool)shouldInteractivePop;
- (id)initWithImage:(id)arg1 andScene:(long long)arg2;
- (id)initWithImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

