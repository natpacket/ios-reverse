//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EditImageAnimatedWidgetTool.h"

@class NSString, UIImageView;

@interface EditImageAnimatedEmoticonTool : EditImageAnimatedWidgetTool
{
    UIImageView *m_imageView;
    NSString *m_emoticonMd5;
    double _imageScale;
}

- (void).cxx_destruct;
@property(nonatomic) double imageScale; // @synthesize imageScale=_imageScale;
@property(readonly, nonatomic) NSString *emoticonMd5; // @synthesize emoticonMd5=m_emoticonMd5;
- (id)accessibilityLabel;
- (double)widgetHeight;
- (double)widgetWidth;
- (_Bool)startEditingText;
- (id)exportAnimatedLayerWithTimingObject:(id)arg1;
- (void)resetToFirstFrame;
- (void)didSelectEmoticonMd5:(id)arg1;

@end

