//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface FTSResultActionItem : NSObject
{
    NSString *_keyword;
    unsigned long long _actionType;
    unsigned long long _searchType;
    NSDictionary *_displayInfo;
}

- (void).cxx_destruct;
@property(nonatomic) NSDictionary *displayInfo; // @synthesize displayInfo=_displayInfo;
@property(nonatomic) unsigned long long searchType; // @synthesize searchType=_searchType;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (id)genStatString;
- (unsigned int)displayCountForSection:(unsigned int)arg1;
- (_Bool)hasDisplayForSection:(unsigned int)arg1;

@end

