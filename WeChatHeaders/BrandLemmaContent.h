//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface BrandLemmaContent : NSObject
{
    unsigned int _type;
    NSDictionary *_i18n;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *i18n; // @synthesize i18n=_i18n;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (id)getLemmaForLocale:(id)arg1;

@end

