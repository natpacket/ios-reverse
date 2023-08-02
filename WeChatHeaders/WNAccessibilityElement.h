//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@class NSString, RTEAttachmentView;
@protocol WNAccessibilityElementDelegate;

@interface WNAccessibilityElement : UIAccessibilityElement
{
    id <WNAccessibilityElementDelegate> _delegate;
    NSString *_stationaryAccessibilityLabel;
    unsigned long long _beginLocation;
    unsigned long long _focusLocation;
    unsigned long long _totalLength;
    RTEAttachmentView *_attachmentView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak RTEAttachmentView *attachmentView; // @synthesize attachmentView=_attachmentView;
@property(nonatomic) unsigned long long totalLength; // @synthesize totalLength=_totalLength;
@property(nonatomic) unsigned long long focusLocation; // @synthesize focusLocation=_focusLocation;
@property(nonatomic) unsigned long long beginLocation; // @synthesize beginLocation=_beginLocation;
@property(retain, nonatomic) NSString *stationaryAccessibilityLabel; // @synthesize stationaryAccessibilityLabel=_stationaryAccessibilityLabel;
@property(nonatomic) __weak id <WNAccessibilityElementDelegate> delegate; // @synthesize delegate=_delegate;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)getCurrentFocusCharacter;
- (void)setSelectedLocation;
- (id)accessibilityLabel;
- (_Bool)accessibilityActivate;
- (void)accessibilityElementDidBecomeFocused;

@end

