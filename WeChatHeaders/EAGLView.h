//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol OglViewDelegate;

@interface EaglView : UIView
{
    id <OglViewDelegate> delegate;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(retain, nonatomic) id <OglViewDelegate> delegate; // @synthesize delegate;
- (void)didMoveToWindow;
- (void)onResize:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

