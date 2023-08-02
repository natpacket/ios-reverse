//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TXICustomProcessConverter-Protocol.h"

@class NSMutableData, NSString;

@interface TXCCustomProcessBgraDataConverter : NSObject <TXICustomProcessConverter>
{
    NSMutableData *_srcData;
    NSMutableData *_dstData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableData *dstData; // @synthesize dstData=_dstData;
@property(retain, nonatomic) NSMutableData *srcData; // @synthesize srcData=_srcData;
- (id)srcDataFromVideoFrame:(id)arg1;
- (id)outputVideoFrameFromDstVideoFrame:(id)arg1 withTexture:(id)arg2;
- (id)dstVideoFrameFromTexture:(id)arg1 pts:(unsigned int)arg2;
- (id)srcVideoFrameFromVideoFrame:(id)arg1;
- (_Bool)needsYuvInput;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
