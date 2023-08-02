//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMGrowTextViewDelegate-Protocol.h"
#import "MMImagePickerManagerDelegate-Protocol.h"
#import "MMPageSheetAdapterDelegate-Protocol.h"

@class MMGrowTextView, MMPageSheetAdapter, MMUIButton, MMUILabel, NSString, TingCategoryCoverView, TingCoverInfo, UIButton, UIImage, UIScrollView, UIView;

@interface TingCreateAlbumViewController : MMUIViewController <MMPageSheetAdapterDelegate, MMGrowTextViewDelegate, MMImagePickerManagerDelegate>
{
    _Bool _fromMyAlbumEdit;
    _Bool _fromPush;
    _Bool _isFromEdit;
    CDUnknownBlockType _doneHandler;
    CDUnknownBlockType _editDoneHandler;
    NSString *_categoryName;
    NSString *_categoryDesc;
    TingCoverInfo *_categoryCoverInfo;
    MMGrowTextView *_textView;
    MMUILabel *_placeHolderLabel;
    UIView *_textFieldBackgroundView;
    UIButton *_navLeftButon;
    UIButton *_navRightButton;
    MMUILabel *_errorLabel;
    MMPageSheetAdapter *_adapter;
    UIView *_descTextFieldBackgroundView;
    MMGrowTextView *_descTextView;
    MMUILabel *_descPlaceHolderLabel;
    MMUILabel *_nameLabel;
    MMUILabel *_descLabel;
    MMUILabel *_descNumberLabel;
    UIScrollView *_scrollView;
    MMUILabel *_coverLabel;
    UIView *_coverBackgroundView;
    TingCategoryCoverView *_coverImageView;
    MMUIButton *_coverButton;
    NSString *_m_newCoverUrl;
    UIImage *_m_newCoverImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *m_newCoverImage; // @synthesize m_newCoverImage=_m_newCoverImage;
@property(retain, nonatomic) NSString *m_newCoverUrl; // @synthesize m_newCoverUrl=_m_newCoverUrl;
@property(retain, nonatomic) MMUIButton *coverButton; // @synthesize coverButton=_coverButton;
@property(retain, nonatomic) TingCategoryCoverView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIView *coverBackgroundView; // @synthesize coverBackgroundView=_coverBackgroundView;
@property(retain, nonatomic) MMUILabel *coverLabel; // @synthesize coverLabel=_coverLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) MMUILabel *descNumberLabel; // @synthesize descNumberLabel=_descNumberLabel;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMUILabel *descPlaceHolderLabel; // @synthesize descPlaceHolderLabel=_descPlaceHolderLabel;
@property(retain, nonatomic) MMGrowTextView *descTextView; // @synthesize descTextView=_descTextView;
@property(retain, nonatomic) UIView *descTextFieldBackgroundView; // @synthesize descTextFieldBackgroundView=_descTextFieldBackgroundView;
@property(nonatomic) _Bool isFromEdit; // @synthesize isFromEdit=_isFromEdit;
@property(nonatomic) __weak MMPageSheetAdapter *adapter; // @synthesize adapter=_adapter;
@property(nonatomic) _Bool fromPush; // @synthesize fromPush=_fromPush;
@property(retain, nonatomic) MMUILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) UIButton *navRightButton; // @synthesize navRightButton=_navRightButton;
@property(retain, nonatomic) UIButton *navLeftButon; // @synthesize navLeftButon=_navLeftButon;
@property(retain, nonatomic) UIView *textFieldBackgroundView; // @synthesize textFieldBackgroundView=_textFieldBackgroundView;
@property(retain, nonatomic) MMUILabel *placeHolderLabel; // @synthesize placeHolderLabel=_placeHolderLabel;
@property(retain, nonatomic) MMGrowTextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) TingCoverInfo *categoryCoverInfo; // @synthesize categoryCoverInfo=_categoryCoverInfo;
@property(copy, nonatomic) NSString *categoryDesc; // @synthesize categoryDesc=_categoryDesc;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(nonatomic) _Bool fromMyAlbumEdit; // @synthesize fromMyAlbumEdit=_fromMyAlbumEdit;
@property(copy, nonatomic) CDUnknownBlockType editDoneHandler; // @synthesize editDoneHandler=_editDoneHandler;
@property(copy, nonatomic) CDUnknownBlockType doneHandler; // @synthesize doneHandler=_doneHandler;
- (void)setNewCoverImage:(id)arg1;
- (id)resizeImage:(id)arg1 toMaxWidth:(int)arg2 andMaxHeight:(int)arg3;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)didClickCamera;
- (void)refreshTextViewPlaceHolder;
- (void)keyboardWillShow:(double)arg1;
- (void)TextViewDidDeleteToNil;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)TextViewDidEnter:(id)arg1;
- (void)TextViewExceedMaxLength:(id)arg1;
- (void)pageSheetDidAppear:(id)arg1;
- (void)uploadCDNImageWithCompletion:(CDUnknownBlockType)arg1;
- (void)onDoneButtonClicked;
- (void)dismissOrPopMyself;
- (void)onCancelButtonClicked;
- (void)showAsHalfScreen:(id)arg1;
- (void)setPageTitle:(id)arg1;
- (void)initWithCreate;
- (void)initWithEdit;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)cameraBtnClicked;
- (id)cameraImage;
- (long long)overrideUserInterfaceStyle;
- (id)initWithIsFromEdit:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
