//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MultiMediaUploadBaseState.h"

@class UniversalC2CDataUploader;

@interface MultiMediaCgiUploadDataState : MultiMediaUploadBaseState
{
    UniversalC2CDataUploader *_uploader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UniversalC2CDataUploader *uploader; // @synthesize uploader=_uploader;
- (id)getStateName;
- (void)stop;
- (void)start;
- (long long)getUploaderScene;

@end

