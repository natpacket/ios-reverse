//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WNAttachmentBaseView.h"

#import "GroupNoticeUploadExt-Protocol.h"
#import "MsgRecordFileDetailDelegate-Protocol.h"
#import "SightIconViewDelegate-Protocol.h"

@class MMUILabel, NSString, SightIconView, UIImageView;

@interface WNAttachmentFileView : WNAttachmentBaseView <GroupNoticeUploadExt, SightIconViewDelegate, MsgRecordFileDetailDelegate>
{
    unsigned char _status;
    UIImageView *_uploadMaskView;
    SightIconView *_uploadingView;
    MMUILabel *_hintLabel;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned char status; // @synthesize status=_status;
@property(retain, nonatomic) MMUILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) SightIconView *uploadingView; // @synthesize uploadingView=_uploadingView;
@property(retain, nonatomic) UIImageView *uploadMaskView; // @synthesize uploadMaskView=_uploadMaskView;
- (void)OpenVideoFileByMsgRecordDataWrap:(id)arg1;
- (void)onProgressEnd;
- (void)onUploadGroupNoticeData:(id)arg1 success:(_Bool)arg2;
- (void)onUploadGroupNoticeData:(id)arg1 finishedLength:(unsigned long long)arg2 totalLength:(unsigned long long)arg3;
- (void)onPreparingUploadGroupNoticeData:(id)arg1;
- (void)updateUploadUI:(unsigned char)arg1 forceUpdate:(_Bool)arg2;
- (void)updateUploadUI:(unsigned char)arg1;
- (void)initUploadMaskView;
- (void)initHintLabel;
- (void)initUploadingView;
- (void)initUploadUI;
- (void)onClickObject;
- (id)getImage;
- (id)getDescription;
- (id)getTitle;
- (void)layoutView;
- (void)dealloc;
- (id)initWithAttachment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

