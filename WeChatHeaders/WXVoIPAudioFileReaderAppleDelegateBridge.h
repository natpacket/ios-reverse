//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AudioFileReaderAppleImplDelegate-Protocol.h"

@interface WXVoIPAudioFileReaderAppleDelegateBridge : NSObject <AudioFileReaderAppleImplDelegate>
{
    struct AudioDecodeCallback *_callback;
}

@property(nonatomic) struct AudioDecodeCallback *callback; // @synthesize callback=_callback;
- (void)audioFileReaderDidComplete:(id)arg1;
- (void)audioFileReader:(id)arg1 onError:(id)arg2;
- (void)audioFileReader:(id)arg1 didGetAudioData:(struct AudioFrame *)arg2;
- (void)dealloc;

@end

