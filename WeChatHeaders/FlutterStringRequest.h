//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FlutterStringRequest : NSObject
{
    NSString *_name;
    NSString *_key;
    NSString *_value;
}

+ (id)fromMap:(id)arg1;
+ (id)makeWithName:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)toMap;

@end

