//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface TextStatePublishIconList : NSObject
{
    NSMutableArray *_groupArray;
    NSMutableDictionary *_descriptionToIconDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *descriptionToIconDict; // @synthesize descriptionToIconDict=_descriptionToIconDict;
@property(retain, nonatomic) NSMutableArray *groupArray; // @synthesize groupArray=_groupArray;
- (void)removeCustomIcon;
- (void)insertGroup:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)iconForDescription:(id)arg1;
- (id)initWithStorage:(id)arg1 maxShowCount:(unsigned long long)arg2;

@end

