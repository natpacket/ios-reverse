//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIView;
@protocol TextStateFriendSquareTransitionCardList, TextStateFriendSquareTransitionFriendSquare;

@interface _TtC6WeChat31TextStateFriendSquareTransition : NSObject
{
    // Error parsing type: , name: friendSquare
    // Error parsing type: , name: cardList
    // Error parsing type: , name: username
    // Error parsing type: , name: dismissUsername
}

- (void).cxx_destruct;
- (id)init;
- (void)onDidCancelInternalDismiss;
- (void)onWillEndInternalDismiss;
- (void)onWillBeginInternalDismiss;
@property(nonatomic, readonly) UIView *internalDismissHeadImage;
@property(nonatomic, copy) NSString *dismissUsername;
@property(nonatomic, copy) NSString *username;
- (id)initWithFriendSquare:(id)arg1 cardList:(id)arg2;
@property(nonatomic) __weak id <TextStateFriendSquareTransitionCardList> cardList; // @synthesize cardList;
@property(nonatomic) __weak id <TextStateFriendSquareTransitionFriendSquare> friendSquare; // @synthesize friendSquare;

@end

