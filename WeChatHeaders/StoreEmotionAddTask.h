//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "StoreEmotionNotifyTask.h"

@class NSString;
@protocol StoreEmotionAddTaskDelegate;

@interface StoreEmotionAddTask : StoreEmotionNotifyTask
{
    NSString *_productID;
    id <StoreEmotionAddTaskDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <StoreEmotionAddTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *productID; // @synthesize productID=_productID;
- (_Bool)resumeLogic;
- (id)initWithProductID:(id)arg1 andDelegate:(id)arg2;

@end
