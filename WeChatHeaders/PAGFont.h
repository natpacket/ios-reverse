//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PAGFont : NSObject
{
    NSString *fontFamily;
    NSString *fontStyle;
}

+ (void)UnregisterFont:(id)arg1;
+ (id)RegisterFont:(void *)arg1 size:(unsigned long long)arg2 family:(id)arg3 style:(id)arg4;
+ (id)RegisterFont:(void *)arg1 size:(unsigned long long)arg2;
+ (id)RegisterFont:(id)arg1 family:(id)arg2 style:(id)arg3;
+ (id)RegisterFont:(id)arg1;
@property(copy, nonatomic) NSString *fontStyle; // @synthesize fontStyle;
@property(copy, nonatomic) NSString *fontFamily; // @synthesize fontFamily;
- (void)dealloc;

@end

