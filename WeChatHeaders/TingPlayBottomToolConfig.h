//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class MMUIButton, NSString;

@interface TingPlayBottomToolConfig : MMObject
{
    unsigned long long _tool;
    NSString *_imgName;
    NSString *_imgSelectedName;
    NSString *_accLabel;
    MMUIButton *_customButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *customButton; // @synthesize customButton=_customButton;
@property(copy, nonatomic) NSString *accLabel; // @synthesize accLabel=_accLabel;
@property(copy, nonatomic) NSString *imgSelectedName; // @synthesize imgSelectedName=_imgSelectedName;
@property(copy, nonatomic) NSString *imgName; // @synthesize imgName=_imgName;
@property(nonatomic) unsigned long long tool; // @synthesize tool=_tool;
- (id)initWithTool:(unsigned long long)arg1 imgName:(id)arg2 imgSelectedName:(id)arg3 accLabel:(id)arg4 customButton:(id)arg5;

@end

