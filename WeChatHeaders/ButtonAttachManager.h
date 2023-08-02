//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface ButtonAttachManager : NSObject
{
    NSHashTable *_attachedButtons;
    double _maxButtonWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double maxButtonWidth; // @synthesize maxButtonWidth=_maxButtonWidth;
@property(retain, nonatomic) NSHashTable *attachedButtons; // @synthesize attachedButtons=_attachedButtons;
- (void)trigger;
- (void)forceTrigger;
- (void)setNeedsTrigger;
- (void)detachButton:(id)arg1;
- (void)attachButton:(id)arg1;
- (id)init;

@end

