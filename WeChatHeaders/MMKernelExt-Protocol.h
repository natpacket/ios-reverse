//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, NSURL;

@protocol MMKernelExt

@optional
- (void)onHandleOpenURL:(NSURL *)arg1 bundleID:(NSString *)arg2;
- (void)onAuthOKWithPlistVesionChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)onAuthOKWithVersionChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)onForceAuthJustForShort:(_Bool *)arg1;
- (void)onInitOK;
- (void)onPostQuit;
- (void)onPreQuit;
- (void)onKickQuit;
- (void)onMainControllStart;
- (void)onLaunchOpenFirstView;
- (void)onManulLogOut;
- (void)onGetUpdateInfoOk;
- (void)onNewRegOK;
- (void)onLoginOK;
- (void)onManulLoginOK;
- (void)onAuthOK;
@end

