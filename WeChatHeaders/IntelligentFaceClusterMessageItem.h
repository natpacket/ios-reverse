//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface IntelligentFaceClusterMessageItem : MMObject
{
    unsigned int _msgLocalId;
    float _zScore;
    NSString *_userName;
    long long _faceLabelId;
    NSString *_mediaFilePath;
    struct CGRect _faceRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *mediaFilePath; // @synthesize mediaFilePath=_mediaFilePath;
@property(nonatomic) struct CGRect faceRect; // @synthesize faceRect=_faceRect;
@property(nonatomic) float zScore; // @synthesize zScore=_zScore;
@property(nonatomic) long long faceLabelId; // @synthesize faceLabelId=_faceLabelId;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId=_msgLocalId;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void)copyFieldFromDbFaceClusterMessageItem:(id)arg1;

@end

