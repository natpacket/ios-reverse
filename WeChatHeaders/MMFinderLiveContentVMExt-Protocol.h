//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMFinderLiveContentVM, NSMutableArray;

@protocol MMFinderLiveContentVMExt <NSObject>

@optional
- (void)onFinishPublishingTextState:(MMFinderLiveContentVM *)arg1;
- (void)onForwardMessageCancelWithContentVM:(MMFinderLiveContentVM *)arg1 andUserArray:(NSMutableArray *)arg2;
- (void)onCancelForwardForForwardViewWithContentVM:(MMFinderLiveContentVM *)arg1;
- (void)onForwardSharePreConfirmSend:(MMFinderLiveContentVM *)arg1 wxUsernameArray:(NSMutableArray *)arg2;
- (void)onDoneForwardMessageWithContentVM:(MMFinderLiveContentVM *)arg1 andUserArray:(NSMutableArray *)arg2 isCertificateType:(_Bool)arg3;
- (void)onDoneForwardForForwardViewWithContentVM:(MMFinderLiveContentVM *)arg1 isCertificateType:(_Bool)arg2;
@end

