//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;

@protocol MMQRCodeScannerDelegate
- (void)onQRCodeScanSuccess:(NSString *)arg1 atPoint:(vector_d4107ee0)arg2 originSize:(struct CGSize)arg3;
- (void)onNoQRCode;
@end

