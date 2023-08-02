//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RTETextAttachment.h"

#import "IQQMailExt-Protocol.h"

@class NSString;

@interface MailRTEAttachment : RTETextAttachment <IQQMailExt>
{
    unsigned int _dataStatus;
    unsigned int _dataSize;
    NSString *_objectId;
    NSString *_objectName;
    NSString *_imagePath;
    NSString *_attachID;
}

+ (id)UIImageWriteToTempFile:(id)arg1;
+ (id)getTempFilePath;
+ (id)DataWriteToTempFile:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int dataSize; // @synthesize dataSize=_dataSize;
@property(retain, nonatomic) NSString *attachID; // @synthesize attachID=_attachID;
@property(retain, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(nonatomic) unsigned int dataStatus; // @synthesize dataStatus=_dataStatus;
@property(retain, nonatomic) NSString *objectName; // @synthesize objectName=_objectName;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (void)OnUploadData:(id)arg1 filename:(id)arg2 errMsg:(id)arg3;
- (double)getHeightOfAttachment;
- (struct _NSRange)rangeInContent:(id)arg1;
- (id)objectString;
- (void)configAttachmentWithAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)configAttachmentWithImage:(id)arg1;
- (void)dealloc;
- (void)configFrameWithWidth:(double)arg1;
- (unsigned int)type;
- (id)init;

@end
