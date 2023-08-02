//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CommonPlayerDelegate;

@interface CommonPlayer : NSObject
{
    id <CommonPlayerDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CommonPlayerDelegate> m_delegate; // @synthesize m_delegate;
- (void)setNumberOfLoops:(long long)arg1;
- (double)duration;
- (_Bool)isPlaying;
- (void)setVolume:(float)arg1;
- (void)start;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)updateData:(id)arg1;
- (void)updatePath:(id)arg1;

@end

