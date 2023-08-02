//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString, WCFinderRedDotCtrlInfo;

@interface WCFinderAppendTabDatasModel : NSObject
{
    unsigned long long _scene;
    long long _tabType;
    NSArray *_appendContentVMArray;
    NSArray *_appendDataItemsArray;
    NSString *_scrollToFeedId;
    NSData *_lastBuffer;
    WCFinderRedDotCtrlInfo *_redDotCtrlInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *redDotCtrlInfo; // @synthesize redDotCtrlInfo=_redDotCtrlInfo;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(copy, nonatomic) NSString *scrollToFeedId; // @synthesize scrollToFeedId=_scrollToFeedId;
@property(retain, nonatomic) NSArray *appendDataItemsArray; // @synthesize appendDataItemsArray=_appendDataItemsArray;
@property(retain, nonatomic) NSArray *appendContentVMArray; // @synthesize appendContentVMArray=_appendContentVMArray;
@property(nonatomic) long long tabType; // @synthesize tabType=_tabType;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (_Bool)shouldRefreshTopData;
- (_Bool)hasAppendData;
- (id)description;

@end
