//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMFinderLiveStickerContentPicking-Protocol.h"

@class MMFinderLiveImageStickerItem, NSString, UIViewController;
@protocol MMFinderLiveStickerContentPickerDelegate;

@interface MMFinderLiveStickerImagePicker : NSObject <MMFinderLiveStickerContentPicking>
{
    id <MMFinderLiveStickerContentPickerDelegate> _delegate;
    MMFinderLiveImageStickerItem *_stickerItem;
    UIViewController *_hostingVc;
    double _targetDimension;
}

- (void).cxx_destruct;
@property(nonatomic) double targetDimension; // @synthesize targetDimension=_targetDimension;
@property(nonatomic) __weak UIViewController *hostingVc; // @synthesize hostingVc=_hostingVc;
@property(retain, nonatomic) MMFinderLiveImageStickerItem *stickerItem; // @synthesize stickerItem=_stickerItem;
@property(nonatomic) __weak id <MMFinderLiveStickerContentPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)imageResizedToTargetDimension:(id)arg1;
- (void)MMImagePickerManagerDidPopOrDismiss:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)showWithStickerItem:(id)arg1 inViewController:(id)arg2;
- (id)initWithTargetDimension:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
