//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MMAuthorizeGameInfoHalfScreenViewModel : NSObject
{
    unsigned long long _indexOfOuterTableView;
    NSString *_title;
    NSArray *_itemStatusList;
    unsigned long long _selectedIndex;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *itemStatusList; // @synthesize itemStatusList=_itemStatusList;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long indexOfOuterTableView; // @synthesize indexOfOuterTableView=_indexOfOuterTableView;

@end
