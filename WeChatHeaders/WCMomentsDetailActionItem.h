//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCMomentsDetailActionItem : NSObject
{
    long long _actionType;
    CDUnknownBlockType _getActionTitleBlock;
    CDUnknownBlockType _getActionTipsBlock;
    CDUnknownBlockType _actionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(copy, nonatomic) CDUnknownBlockType getActionTipsBlock; // @synthesize getActionTipsBlock=_getActionTipsBlock;
@property(copy, nonatomic) CDUnknownBlockType getActionTitleBlock; // @synthesize getActionTitleBlock=_getActionTitleBlock;
@property(readonly, nonatomic) long long actionType; // @synthesize actionType=_actionType;
- (void)didClickActionItem;
- (id)getActionTips;
- (id)getActionTitle;
- (id)initWithActionType:(long long)arg1;

@end
