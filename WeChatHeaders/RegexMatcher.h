//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableCharacterSet;

@interface RegexMatcher : NSObject
{
    _Bool _overLimited;
    NSMutableArray *_regexNotGreedArray;
    NSMutableArray *_regexGreedArray;
    NSMutableCharacterSet *_identifierSet;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool overLimited; // @synthesize overLimited=_overLimited;
@property(copy, nonatomic) NSMutableCharacterSet *identifierSet; // @synthesize identifierSet=_identifierSet;
@property(copy, nonatomic) NSMutableArray *regexGreedArray; // @synthesize regexGreedArray=_regexGreedArray;
@property(copy, nonatomic) NSMutableArray *regexNotGreedArray; // @synthesize regexNotGreedArray=_regexNotGreedArray;
- (_Bool)isLegalWord:(id)arg1;
- (id)extractWord:(id)arg1 level:(int)arg2;
- (id)extractWord:(id)arg1;
- (id)init;

@end

