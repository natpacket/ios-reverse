//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TingCollectionViewAutoSizeProvider : NSObject
{
    NSMutableDictionary *_cache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
- (void)clear;
- (void)setCellSize:(struct CGSize)arg1 atIndexPath:(id)arg2;
- (struct CGSize)cellSizeAtIndexPath:(id)arg1;

@end
