//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CDNCheckHitFileInfo : NSObject
{
    int _hitType;
    unsigned long long _fileType;
    unsigned long long _fileSize;
    unsigned long long _thumbSize;
    NSString *_fileMD5;
    NSString *_fileID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *fileID; // @synthesize fileID=_fileID;
@property(retain, nonatomic) NSString *fileMD5; // @synthesize fileMD5=_fileMD5;
@property(nonatomic) unsigned long long thumbSize; // @synthesize thumbSize=_thumbSize;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) unsigned long long fileType; // @synthesize fileType=_fileType;
@property(nonatomic) int hitType; // @synthesize hitType=_hitType;

@end

