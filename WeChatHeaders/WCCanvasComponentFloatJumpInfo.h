//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCoding-Protocol.h"

@class NSString, WCCanvasComponentItem;

@interface WCCanvasComponentFloatJumpInfo : MMObject <NSCoding>
{
    _Bool _autoJump;
    NSString *_title;
    WCCanvasComponentItem *_jumpButton;
    double _swipeJumpOffset;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1 withSizeType:(long long)arg2 basicWidth:(int)arg3 basicRootFontSize:(int)arg4 widthRoundingType:(long long)arg5 heightRoundingType:(long long)arg6;
- (void).cxx_destruct;
@property(nonatomic) double swipeJumpOffset; // @synthesize swipeJumpOffset=_swipeJumpOffset;
@property(nonatomic) _Bool autoJump; // @synthesize autoJump=_autoJump;
@property(retain, nonatomic) WCCanvasComponentItem *jumpButton; // @synthesize jumpButton=_jumpButton;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

