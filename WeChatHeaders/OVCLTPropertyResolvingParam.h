//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface OVCLTPropertyResolvingParam : NSObject
{
    int _layerID;
    unsigned long long _lowerThirdProperty;
    NSString *_lowerThirdID;
    NSString *_segmentID;
    NSString *_textTemplate;
    NSDictionary *_context;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSString *textTemplate; // @synthesize textTemplate=_textTemplate;
@property(readonly, nonatomic) int layerID; // @synthesize layerID=_layerID;
@property(readonly, nonatomic) NSString *segmentID; // @synthesize segmentID=_segmentID;
@property(readonly, nonatomic) NSString *lowerThirdID; // @synthesize lowerThirdID=_lowerThirdID;
@property(readonly, nonatomic) unsigned long long lowerThirdProperty; // @synthesize lowerThirdProperty=_lowerThirdProperty;
- (id)initWithLowerThirdProperty:(unsigned long long)arg1 LowerThirdID:(id)arg2 segmentID:(id)arg3 layerID:(int)arg4 textTemplate:(id)arg5 context:(id)arg6;

@end
