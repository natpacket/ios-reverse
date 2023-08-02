//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TextStatePublishIconGroup, TextStatePublishIconList, TextStateRecentIconList;
@protocol TextStateEmojiBoardModelDelegate;

@interface TextStateEmojiBoardModel : NSObject
{
    id <TextStateEmojiBoardModelDelegate> _delegate;
    TextStatePublishIconList *_publishIconList;
    TextStatePublishIconGroup *_recentIconGroup;
    TextStateRecentIconList *_recentIconList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TextStateRecentIconList *recentIconList; // @synthesize recentIconList=_recentIconList;
@property(retain, nonatomic) TextStatePublishIconGroup *recentIconGroup; // @synthesize recentIconGroup=_recentIconGroup;
@property(retain, nonatomic) TextStatePublishIconList *publishIconList; // @synthesize publishIconList=_publishIconList;
@property(nonatomic) __weak id <TextStateEmojiBoardModelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)mmkvKey;
@property(readonly, nonatomic) TextStatePublishIconList *iconList;
- (void)appendRecentUsedIcon:(id)arg1;
- (id)initWithPublishIconList:(id)arg1;

@end
