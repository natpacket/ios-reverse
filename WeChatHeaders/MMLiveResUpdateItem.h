//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MMLiveResUpdateItem : NSObject
{
    unsigned int _resType;
    NSArray *_subTypes;
    NSString *_resBaseDir;
    NSString *_manifestFile;
}

+ (id)resItemWithResType:(unsigned int)arg1 resBaseDir:(id)arg2;
+ (id)resItemWithResType:(unsigned int)arg1 subTypes:(id)arg2 resBaseDir:(id)arg3 manifestFile:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *manifestFile; // @synthesize manifestFile=_manifestFile;
@property(retain, nonatomic) NSString *resBaseDir; // @synthesize resBaseDir=_resBaseDir;
@property(retain, nonatomic) NSArray *subTypes; // @synthesize subTypes=_subTypes;
@property(nonatomic) unsigned int resType; // @synthesize resType=_resType;

@end

