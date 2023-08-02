//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface FLTextureInfo : NSObject
{
    NSNumber *_textureId;
    NSNumber *_width;
    NSNumber *_height;
    NSNumber *_quarterTurns;
    NSNumber *_mirror;
}

+ (id)fromMap:(id)arg1;
+ (id)makeWithTextureId:(id)arg1 width:(id)arg2 height:(id)arg3 quarterTurns:(id)arg4 mirror:(id)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *mirror; // @synthesize mirror=_mirror;
@property(retain, nonatomic) NSNumber *quarterTurns; // @synthesize quarterTurns=_quarterTurns;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(retain, nonatomic) NSNumber *textureId; // @synthesize textureId=_textureId;
- (id)toMap;

@end

