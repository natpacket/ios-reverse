//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCDragToCloseViewController.h"

#import "MultiImageScrollViewDelegate-Protocol.h"

@class ImageBrowseButton, MultiImageScrollView, NSMutableArray, NSString;
@protocol CardImageBrowseViewControllerDelegate;

@interface CardImageBrowseViewController : WCDragToCloseViewController <MultiImageScrollViewDelegate>
{
    unsigned int _startIndex;
    NSMutableArray *_imageList;
    id <CardImageBrowseViewControllerDelegate> _delegate;
    MultiImageScrollView *_multiImageScrollView;
    ImageBrowseButton *_saveButton;
    ImageBrowseButton *_favButton;
    ImageBrowseButton *_deleteButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ImageBrowseButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) ImageBrowseButton *favButton; // @synthesize favButton=_favButton;
@property(retain, nonatomic) ImageBrowseButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) MultiImageScrollView *multiImageScrollView; // @synthesize multiImageScrollView=_multiImageScrollView;
@property(nonatomic) __weak id <CardImageBrowseViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int startIndex; // @synthesize startIndex=_startIndex;
@property(retain, nonatomic) NSMutableArray *imageList; // @synthesize imageList=_imageList;
- (void)onSingleTap:(id)arg1;
- (id)viewAtPage:(unsigned int)arg1 frame:(struct CGRect)arg2;
- (id)imageAtPage:(unsigned int)arg1;
- (id)currentImage;
- (void)deleteCardImage;
- (void)addFavItem;
- (void)savePhotoToAlbum;
- (void)onTapDelete;
- (void)viewWillBeInteractivePoped;
- (void)hideVCAnimation;
- (_Bool)shouldInteractivePop;
- (_Bool)navigationBarBlurEffect;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
