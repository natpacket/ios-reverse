//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface QTrafficStyle : NSObject
{
    int _borderWidth;
    int _lineWidth;
    UIColor *_smoothColor;
    UIColor *_smoothBorderColor;
    UIColor *_slowColor;
    UIColor *_slowBorderColor;
    UIColor *_congestedColor;
    UIColor *_congestedBorderColor;
    UIColor *_seriouseCongestedColor;
    UIColor *_seriouseCongestedBorderColor;
}

- (void).cxx_destruct;
@property(nonatomic) int lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) int borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIColor *seriouseCongestedBorderColor; // @synthesize seriouseCongestedBorderColor=_seriouseCongestedBorderColor;
@property(retain, nonatomic) UIColor *seriouseCongestedColor; // @synthesize seriouseCongestedColor=_seriouseCongestedColor;
@property(retain, nonatomic) UIColor *congestedBorderColor; // @synthesize congestedBorderColor=_congestedBorderColor;
@property(retain, nonatomic) UIColor *congestedColor; // @synthesize congestedColor=_congestedColor;
@property(retain, nonatomic) UIColor *slowBorderColor; // @synthesize slowBorderColor=_slowBorderColor;
@property(retain, nonatomic) UIColor *slowColor; // @synthesize slowColor=_slowColor;
@property(retain, nonatomic) UIColor *smoothBorderColor; // @synthesize smoothBorderColor=_smoothBorderColor;
@property(retain, nonatomic) UIColor *smoothColor; // @synthesize smoothColor=_smoothColor;

@end

