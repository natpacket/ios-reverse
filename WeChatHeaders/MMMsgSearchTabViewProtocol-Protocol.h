//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol MMMsgSearchTabViewDelegate;

@protocol MMMsgSearchTabViewProtocol <NSObject>
@property(nonatomic) __weak id <MMMsgSearchTabViewDelegate> delegate;
- (double)getTabUnderLineWidth;
- (double)getMsgSearchType;
- (struct CGRect)getTitleLabelFrame;
- (void)updateForState:(unsigned long long)arg1;
- (void)setTitleText:(NSString *)arg1;
@end

