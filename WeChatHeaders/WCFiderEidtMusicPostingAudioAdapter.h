//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderEditMusicMediaAudioUrlAdapter-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol WCFiderEidtMusicPostingAudioAdapterDelegate;

@interface WCFiderEidtMusicPostingAudioAdapter : NSObject <WCFinderEditMusicMediaAudioUrlAdapter>
{
    id <WCFiderEidtMusicPostingAudioAdapterDelegate> _delegate;
    NSMutableDictionary *_videoMapAudioUrls;
}

+ (id)adapterWithDelegate:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *videoMapAudioUrls; // @synthesize videoMapAudioUrls=_videoMapAudioUrls;
@property(nonatomic) __weak id <WCFiderEidtMusicPostingAudioAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fetchDataItemMediaAudioUrl:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

