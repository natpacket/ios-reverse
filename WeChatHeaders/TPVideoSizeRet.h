//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface TPVideoSizeRet : NSObject
{
    NSNumber *_width;
    NSNumber *_height;
}

+ (id)nullableFromMap:(id)arg1;
+ (id)fromMap:(id)arg1;
+ (id)makeWithWidth:(id)arg1 height:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;
- (id)toMap;

@end

