//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OAKImageRequestEntity : NSObject
{
    unsigned int _taskID;
    int _phRequestID;
    CDUnknownBlockType _imageDataCompletionHandler;
    CDUnknownBlockType _assetCompletionHandler;
}

+ (id)entityWithTaskID:(unsigned int)arg1 assetCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)entityWithTaskID:(unsigned int)arg1 imageDataCompletionHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType assetCompletionHandler; // @synthesize assetCompletionHandler=_assetCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType imageDataCompletionHandler; // @synthesize imageDataCompletionHandler=_imageDataCompletionHandler;
@property(nonatomic) int phRequestID; // @synthesize phRequestID=_phRequestID;
@property(nonatomic) unsigned int taskID; // @synthesize taskID=_taskID;

@end

