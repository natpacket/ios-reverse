//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MJCameraTemplateReportObject : NSObject
{
    NSString *_filePath;
    unsigned long long _fileCount;
    double _captureFrameInterval;
}

+ (id)cameraTemplateReportObjKey;
- (void).cxx_destruct;
@property(nonatomic) double captureFrameInterval; // @synthesize captureFrameInterval=_captureFrameInterval;
@property(nonatomic) unsigned long long fileCount; // @synthesize fileCount=_fileCount;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
