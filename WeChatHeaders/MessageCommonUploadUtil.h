//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MessageCommonUploadUtil : NSObject
{
}

+ (void)convertImgToWxamIn:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (void)generateMidImageForMsg:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (void)generateMidImage:(id)arg1 midPath:(id)arg2 complete:(CDUnknownBlockType)arg3;
+ (_Bool)isMidImageInvalidForMsg:(id)arg1;
+ (unsigned int)maxMiddleImageSize;

@end

