//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMFinderLiveStickerReviewSubmissionItem-Protocol.h"

@class NSString, UIImage;

@interface MMFinderLiveImageStickerReviewSubmissionItem : NSObject <MMFinderLiveStickerReviewSubmissionItem>
{
    NSString *_submissionId;
    UIImage *_image;
    NSString *_imageUri;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *imageUri; // @synthesize imageUri=_imageUri;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *submissionId; // @synthesize submissionId=_submissionId;
- (id)createSubmissionEntity;
- (void)prepareForSubmissionWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool readyForSubmission;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

