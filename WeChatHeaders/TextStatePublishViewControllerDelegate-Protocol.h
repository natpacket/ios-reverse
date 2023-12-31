//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString, TextStateModel;

@protocol TextStatePublishViewControllerDelegate <NSObject>

@optional
- (void)onTextStatePublishCancelled;
- (void)onTextStatePublishedWithTextState:(TextStateModel *)arg1 thumbImageData:(NSData *)arg2;
- (void)onTextStatePublishedWithIconId:(NSString *)arg1 iconDescription:(NSString *)arg2;
- (void)onTextStatePublished;
@end

