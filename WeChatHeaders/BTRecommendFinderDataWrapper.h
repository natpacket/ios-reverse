//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface BTRecommendFinderDataWrapper : NSObject
{
    int _subType;
    NSArray *_finderDataArr;
    NSString *_cardId;
    NSString *_title;
    NSString *_fromSessionIdInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *fromSessionIdInfo; // @synthesize fromSessionIdInfo=_fromSessionIdInfo;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(retain, nonatomic) NSArray *finderDataArr; // @synthesize finderDataArr=_finderDataArr;
@property(nonatomic) int subType; // @synthesize subType=_subType;
- (id)recFinderCardDataArr;
- (_Bool)isValid;

@end

