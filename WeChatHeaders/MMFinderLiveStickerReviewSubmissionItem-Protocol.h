//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FinderLiveSticker, NSString;

@protocol MMFinderLiveStickerReviewSubmissionItem <NSObject>
@property(readonly, nonatomic) _Bool readyForSubmission;
@property(readonly, nonatomic) NSString *submissionId;
- (FinderLiveSticker *)createSubmissionEntity;
- (void)prepareForSubmissionWithCompletionBlock:(void (^)(_Bool))arg1;
@end
