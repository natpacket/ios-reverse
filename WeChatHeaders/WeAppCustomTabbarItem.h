//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, UIImage;

@interface WeAppCustomTabbarItem : NSObject
{
    UIImage *_normalImage;
    UIImage *_selectedImage;
    NSAttributedString *_normalText;
    NSAttributedString *_selectedText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSAttributedString *selectedText; // @synthesize selectedText=_selectedText;
@property(retain, nonatomic) NSAttributedString *normalText; // @synthesize normalText=_normalText;
@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) UIImage *normalImage; // @synthesize normalImage=_normalImage;

@end

