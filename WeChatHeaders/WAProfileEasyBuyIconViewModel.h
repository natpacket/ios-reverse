//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIFont;

@interface WAProfileEasyBuyIconViewModel : NSObject
{
    unsigned int _iconWidth;
    unsigned int _iconHeight;
    NSString *_desc;
    UIFont *_descFont;
    UIColor *_descColor;
    NSString *_iconUrl;
}

+ (id)createWithRelievedBuyInfo:(id)arg1 position:(long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned int iconHeight; // @synthesize iconHeight=_iconHeight;
@property(nonatomic) unsigned int iconWidth; // @synthesize iconWidth=_iconWidth;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) UIColor *descColor; // @synthesize descColor=_descColor;
@property(retain, nonatomic) UIFont *descFont; // @synthesize descFont=_descFont;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
- (long long)iconViewWidth;
- (long long)descViewWidth;
- (struct CGSize)viewSize;

@end

