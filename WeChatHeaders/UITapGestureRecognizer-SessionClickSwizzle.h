//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITapGestureRecognizer.h>

@interface UITapGestureRecognizer (SessionClickSwizzle)
+ (_Bool)hookRemoveTargetAction;
+ (_Bool)hookAddTargetAction;
+ (_Bool)hookInitWithTargetAction;
+ (void)hookUIGestureRecognizer;
+ (void)load;
- (void)sf_removeTarget:(id)arg1 action:(SEL)arg2;
- (void)sf_addTarget:(id)arg1 action:(SEL)arg2;
- (id)sf_initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)trackTapGestureAction:(id)arg1;
- (void)hookUITapGestureRecognizer:(id)arg1 action:(SEL)arg2;
- (void)setScTargetActionDic:(id)arg1;
- (id)scTargetActionDic;
@end

