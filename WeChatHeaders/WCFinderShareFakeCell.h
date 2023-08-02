//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderShareAbstractCell-Protocol.h"

@class NSString, UIImage;

@interface WCFinderShareFakeCell : NSObject <WCFinderShareAbstractCell>
{
    UIImage *_image;
    struct CGRect _mainViewRect;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect mainViewRect; // @synthesize mainViewRect=_mainViewRect;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (struct CGRect)transitionStartImageRectInView:(id)arg1 willPresent:(_Bool)arg2;
- (id)transitionStartImage;
- (void)doShareAnimation;
- (id)initWithImage:(id)arg1 mainViewRect:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

