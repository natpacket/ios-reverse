//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WASemver;

@interface WASemverRange : NSObject
{
    WASemver *_semver;
    unsigned long long _op;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long op; // @synthesize op=_op;
@property(retain, nonatomic) WASemver *semver; // @synthesize semver=_semver;
- (_Bool)isSatisfiedBy:(id)arg1;
- (id)initWithVersionStr:(id)arg1 op:(unsigned long long)arg2;
- (id)initWithVersion:(id)arg1 op:(unsigned long long)arg2;

@end

