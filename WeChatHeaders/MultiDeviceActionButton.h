//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

@interface MultiDeviceActionButton : MMUIButton
{
    unsigned long long _action;
}

+ (double)imageSideLength;
+ (id)buttonImageForAction:(unsigned long long)arg1 highlighted:(_Bool)arg2 selected:(_Bool)arg3;
+ (id)buttonTitleForAction:(unsigned long long)arg1 selected:(_Bool)arg2;
+ (_Bool)supportSelectForAction:(unsigned long long)arg1;
+ (id)buttonForAction:(unsigned long long)arg1;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;

@end

