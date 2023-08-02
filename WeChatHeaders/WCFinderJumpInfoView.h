//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WCFinderJumpInfoViewProtocol-Protocol.h"

@class FinderJumpInfo_Style, WCFinderJumpInfo;
@protocol WCFinderJumpInfoViewBaseDelegate;

@interface WCFinderJumpInfoView : UIView <WCFinderJumpInfoViewProtocol>
{
    id <WCFinderJumpInfoViewBaseDelegate> _delegate;
    WCFinderJumpInfo *_jumpInfo;
    FinderJumpInfo_Style *_style;
    long long _showPosition;
}

+ (_Bool)shouldHiddenJumpInfoView:(id)arg1 playPos:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long showPosition; // @synthesize showPosition=_showPosition;
@property(retain, nonatomic) FinderJumpInfo_Style *style; // @synthesize style=_style;
@property(retain, nonatomic) WCFinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(nonatomic) __weak id <WCFinderJumpInfoViewBaseDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(long long)arg2;

@end
