//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "_TtP9WeAppCore14SemverProtocol_-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface WASemver : MMObject <_TtP9WeAppCore14SemverProtocol_>
{
    _Bool _isValid;
    NSString *_originalStr;
    NSNumber *_major;
    NSNumber *_minor;
    NSNumber *_patch;
    NSArray *_arrVersion;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *arrVersion; // @synthesize arrVersion=_arrVersion;
@property(retain, nonatomic) NSNumber *patch; // @synthesize patch=_patch;
@property(retain, nonatomic) NSNumber *minor; // @synthesize minor=_minor;
@property(retain, nonatomic) NSNumber *major; // @synthesize major=_major;
@property(readonly, nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(readonly, nonatomic) NSString *originalStr; // @synthesize originalStr=_originalStr;
- (id)getExtrapolateVersion;
- (_Bool)isGreaterThan:(id)arg1;
- (_Bool)isLessThan:(id)arg1;
- (_Bool)isEqualTo:(id)arg1;
- (long long)compare:(id)arg1;
- (_Bool)isSatisfiedBy:(id)arg1;
- (_Bool)checkIsValid;
- (void)parse:(id)arg1;
- (id)initWithVersionStr:(id)arg1;

@end
