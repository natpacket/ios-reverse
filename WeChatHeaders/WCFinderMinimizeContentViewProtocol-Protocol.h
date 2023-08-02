//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage, UIView;
@protocol WCFinderMinimizeContentViewDelegate;

@protocol WCFinderMinimizeContentViewProtocol <NSObject>
@property(retain, nonatomic) UIImage *tmpSnapCoverImage;
- (void)keepHandlePlayer;
- (void)cleanUp;
- (void)beforeRestore;
- (struct CGSize)contentSize;
- (UIView *)animatingSnapView;
- (void)resumePlay;
- (void)pausePlay;

@optional
- (void)onMinimizeFloatingViewDidDisplay;
- (double)playPosition;
- (NSString *)controlCenterDisplayTitle;
- (void)setDelegate:(id <WCFinderMinimizeContentViewDelegate>)arg1;
- (id <WCFinderMinimizeContentViewDelegate>)delegate;
- (_Bool)beTakeOverAudioModel;
- (_Bool)setMutePlay:(_Bool)arg1;
@end
