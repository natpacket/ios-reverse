//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WAOpenALBuffer : NSObject
{
    unsigned int bufferId;
    int format;
    int size;
    int sampleRate;
    NSString *path;
    NSString *appId;
    float duration;
    struct ALCcontext_struct *_context;
}

+ (id)getAudioDataWithData:(id)arg1 filePath:(id)arg2;
+ (id)cachedBufferWithPath:(id)arg1 decodeInfo:(id)arg2 appId:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) struct ALCcontext_struct *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
@property(readonly) float duration; // @synthesize duration;
@property(readonly) unsigned int bufferId; // @synthesize bufferId;
- (void)dealloc;
- (id)initWithPath:(id)arg1 decodeInfo:(id)arg2;
- (id)description;

@end

