//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSNumber, NSString;

@protocol UserDefaultsApi
- (void)clearWithError:(id *)arg1;
- (NSDictionary *)getAllWithError:(id *)arg1;
- (void)setValueKey:(NSString *)arg1 value:(id)arg2 error:(id *)arg3;
- (void)setDoubleKey:(NSString *)arg1 value:(NSNumber *)arg2 error:(id *)arg3;
- (void)setBoolKey:(NSString *)arg1 value:(NSNumber *)arg2 error:(id *)arg3;
- (void)removeKey:(NSString *)arg1 error:(id *)arg2;
@end

