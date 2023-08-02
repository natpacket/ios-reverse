//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface FBSDKErrorRecoveryConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_localizedRecoveryDescription;
    NSArray *_localizedRecoveryOptionDescriptions;
    unsigned long long _errorCategory;
    NSString *_recoveryActionName;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *recoveryActionName; // @synthesize recoveryActionName=_recoveryActionName;
@property(readonly, nonatomic) unsigned long long errorCategory; // @synthesize errorCategory=_errorCategory;
@property(readonly, nonatomic) NSArray *localizedRecoveryOptionDescriptions; // @synthesize localizedRecoveryOptionDescriptions=_localizedRecoveryOptionDescriptions;
@property(readonly, nonatomic) NSString *localizedRecoveryDescription; // @synthesize localizedRecoveryDescription=_localizedRecoveryDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecoveryDescription:(id)arg1 optionDescriptions:(id)arg2 category:(unsigned long long)arg3 recoveryActionName:(id)arg4;

@end

