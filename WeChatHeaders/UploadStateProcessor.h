//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MultiMediaUploadProcessController, NSString;

@interface UploadStateProcessor : NSObject
{
    NSString *_identifier;
    MultiMediaUploadProcessController *_context;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MultiMediaUploadProcessController *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)onProcessEndWithFailType:(int)arg1;
- (void)transformToFinalState;
- (id)getStateName;
- (void)stop;
- (void)start;
- (id)initWithContext:(id)arg1;

@end

