//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMLiveInputToolView, NSString;

@protocol MMLiveInputToolViewDelegate <NSObject>
- (_Bool)didSendLocation:(NSString *)arg1;
- (void)onInputViewShowChange:(_Bool)arg1;
- (double)getVisibleHeight;
- (_Bool)didCommitText:(NSString *)arg1;

@optional
- (_Bool)inputViewShouldDismisAfterCommit:(MMLiveInputToolView *)arg1;
@end

