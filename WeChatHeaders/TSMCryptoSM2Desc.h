//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSMCryptoSM2Desc : NSObject
{
}

+ (_Bool)verify:(int)arg1 desc:(id)arg2 msg:(id)arg3 uid:(id)arg4 sig:(id)arg5 error:(id *)arg6;
+ (id)sign:(int)arg1 desc:(id)arg2 msg:(id)arg3 uid:(id)arg4 error:(id *)arg5;
+ (id)decrypt:(int)arg1 desc:(id)arg2 cipher:(id)arg3 error:(id *)arg4;
+ (id)encrypt:(int)arg1 desc:(id)arg2 plain:(id)arg3 error:(id *)arg4;

@end
