//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface MMFinderLiveAudioBuffer : NSObject
{
    unsigned long long _clearLength;
    unsigned long long _read;
    NSMutableData *_data;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(nonatomic) unsigned long long read; // @synthesize read=_read;
@property(nonatomic) unsigned long long clearLength; // @synthesize clearLength=_clearLength;
- (void)append:(id)arg1;
- (unsigned long long)length;
- (id)output:(unsigned long long)arg1;

@end
