//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MidasExternalTrackEvent, NSString;

@protocol MidasIAPRuntimeDelegate <NSObject>
- (_Bool)hasClassBeenHooked:(NSString *)arg1 selector:(NSString *)arg2;
- (NSString *)localizedStringOfStringId:(NSString *)arg1;
- (void)onLogOutput:(NSString *)arg1;
- (_Bool)isProductIdShouldIgnoredByMidas:(NSString *)arg1;
- (void)onReprovidingAfterInitialize;

@optional
- (void)trackEventDidInsert:(MidasExternalTrackEvent *)arg1;
@end
