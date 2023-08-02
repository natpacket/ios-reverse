//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@protocol MMUITextFieldDelegate;

@interface MMUITextField : UITextField
{
    unsigned long long _maxTextLength;
    id <MMUITextFieldDelegate> _mmDelegate;
    struct UIEdgeInsets _contenInsets;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMUITextFieldDelegate> mmDelegate; // @synthesize mmDelegate=_mmDelegate;
@property(nonatomic) unsigned long long maxTextLength; // @synthesize maxTextLength=_maxTextLength;
@property(nonatomic) struct UIEdgeInsets contenInsets; // @synthesize contenInsets=_contenInsets;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (void)textFieldDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
