//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSData, NSString;

@interface MMResSignatureInfo : MMObject <PBCoding>
{
    unsigned int _version;
    NSData *_signatureData;
}

+ (void)initialize;
+ (void)PBArrayAdd_signatureData;
+ (void)PBArrayAdd_version;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *signatureData; // @synthesize signatureData=_signatureData;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)dealloc;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
