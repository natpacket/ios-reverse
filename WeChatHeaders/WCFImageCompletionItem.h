//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFImageCompletionItem : NSObject
{
    _Bool _called;
    CDUnknownBlockType _callback;
    NSString *_sizeKey;
    CDStruct_4b68193d _param;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool called; // @synthesize called=_called;
@property(retain, nonatomic) NSString *sizeKey; // @synthesize sizeKey=_sizeKey;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) CDStruct_4b68193d param; // @synthesize param=_param;
- (void)callCompletion:(id)arg1 key:(id)arg2 error:(id)arg3 finished:(_Bool)arg4;
- (struct CGSize)size;
- (_Bool)isValid;
- (id)initWithParam:(CDStruct_4b68193d)arg1 callback:(CDUnknownBlockType)arg2;

@end
