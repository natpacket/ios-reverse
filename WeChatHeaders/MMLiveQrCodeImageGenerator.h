//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMLiveQrCodeImageGenerator : NSObject
{
}

+ (id)bulletsStyleQrCodeImageWithEncodedQrCode:(struct QBAR_IMAGE)arg1 minimumDimension:(double)arg2 paddingRatio:(double)arg3 backgroundColor:(id)arg4 foregroundColor:(id)arg5;
+ (id)standardStyleQrCodeImageWithEncodedQrCode:(struct QBAR_IMAGE)arg1 minimumDimension:(double)arg2 paddingRatio:(double)arg3 backgroundColor:(id)arg4 foregroundColor:(id)arg5;
+ (id)qrCodeImageWithContent:(id)arg1 errorCorrectionLevel:(unsigned long long)arg2 minimumDimension:(double)arg3 paddingRatio:(double)arg4 backgroundColor:(id)arg5 foregroundColor:(id)arg6 style:(unsigned long long)arg7;
+ (id)qrCodeImageWithContent:(id)arg1 errorCorrectionLevel:(unsigned long long)arg2 minimumDimension:(double)arg3;

@end

