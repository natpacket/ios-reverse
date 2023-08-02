//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WNAttachmentBaseView.h"

#import "GroupNoticeUploadExt-Protocol.h"
#import "SightIconViewDelegate-Protocol.h"
#import "WNImageViewDelegate-Protocol.h"

@class MMUILabel, NSString, SightIconView, UIGestureRecognizer, WNImageView;

@interface WNAttachmentImageView : WNAttachmentBaseView <WNImageViewDelegate, GroupNoticeUploadExt, SightIconViewDelegate>
{
    unsigned char _status;
    SightIconView *_loadingView;
    UIGestureRecognizer *_tapGesture;
    MMUILabel *_hintLabel;
    WNImageView *_imageView;
    NSString *_localImagePath;
}

+ (double)getHeightOfAttachment:(id)arg1 withWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *localImagePath; // @synthesize localImagePath=_localImagePath;
@property(retain, nonatomic) WNImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) unsigned char status; // @synthesize status=_status;
@property(retain, nonatomic) MMUILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UIGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) SightIconView *loadingView; // @synthesize loadingView=_loadingView;
- (void)onProgressEnd;
- (void)onUploadGroupNoticeData:(id)arg1 success:(_Bool)arg2;
- (void)onUploadGroupNoticeData:(id)arg1 finishedLength:(unsigned long long)arg2 totalLength:(unsigned long long)arg3;
- (void)onPreparingUploadGroupNoticeData:(id)arg1;
- (void)updateUploadUI:(unsigned char)arg1 forceUpdate:(_Bool)arg2;
- (void)updateUploadUI:(unsigned char)arg1;
- (void)retryUpload;
- (void)onEdit:(id)arg1;
- (void)onClickObject;
- (void)onLoadComplete:(id)arg1 SourcePath:(id)arg2;
- (void)layoutView;
- (void)dealloc;
- (id)initWithAttachment:(id)arg1;
- (void)forceLoadImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
