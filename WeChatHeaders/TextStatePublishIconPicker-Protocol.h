//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TextStatePublishIconList;

@protocol TextStatePublishIconPicker <NSObject>
@property(copy, nonatomic) CDUnknownBlockType iconPickHandler;
@property(retain, nonatomic) TextStatePublishIconList *publishIconList;
- (_Bool)enableDragToClose;
- (void)refresh;
- (void)resetToTop;
@end
