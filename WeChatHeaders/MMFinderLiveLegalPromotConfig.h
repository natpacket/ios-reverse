//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveLegalPromotConfig : NSObject
{
    _Bool _needShowLegalPromot;
    unsigned int _legalType;
    unsigned int _version;
    NSString *_dynamicConfigKey;
    NSString *_legalTitle;
    NSString *_legalUrl;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needShowLegalPromot; // @synthesize needShowLegalPromot=_needShowLegalPromot;
@property(retain, nonatomic) NSString *legalUrl; // @synthesize legalUrl=_legalUrl;
@property(retain, nonatomic) NSString *legalTitle; // @synthesize legalTitle=_legalTitle;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) unsigned int legalType; // @synthesize legalType=_legalType;
@property(retain, nonatomic) NSString *dynamicConfigKey; // @synthesize dynamicConfigKey=_dynamicConfigKey;
- (_Bool)isValid;
- (void)markAsRead;
- (void)updateWithDynamicConfigKey:(id)arg1;
- (id)initWithDynamicConfigKey:(id)arg1;

@end

