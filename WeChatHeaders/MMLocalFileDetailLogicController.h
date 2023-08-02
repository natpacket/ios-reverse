//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FileDetailLogicController.h"

@class NSURL;

@interface MMLocalFileDetailLogicController : FileDetailLogicController
{
    unsigned long long _fileSize;
    NSURL *_fileURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void)didFail;
- (void)didFinish;
- (_Bool)OnPreviewFile:(unsigned int)arg1;
- (void)stopDownload;
- (void)startDownload;
- (_Bool)forbidOperation;
- (_Bool)isViewBePopedStopDownload;
- (_Bool)autoDownload;
- (_Bool)isDownloading;
- (unsigned long long)GetFileSize;
- (id)GetFilePath;
- (id)GetFileName;
- (unsigned int)GetPreviewType;
- (id)initWithFileURL:(id)arg1;

@end

