//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WaitingInvoke : NSObject
{
    NSString *_name;
    id _arguments;
    CDUnknownBlockType _result;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType result; // @synthesize result=_result;
@property(retain, nonatomic) id arguments; // @synthesize arguments=_arguments;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;

@end
