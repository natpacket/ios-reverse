//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WCFinderTransitionUserInfo : NSObject
{
    _Bool _interaction;
    _Bool _isDraggingAsCard;
    _Bool _isClosureType;
    _Bool _isTransfer;
    NSString *_currentBrowseTid;
    WCFinderTransitionUserInfo *_transferInfo;
    NSMutableDictionary *_datas;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *datas; // @synthesize datas=_datas;
@property(nonatomic) _Bool isTransfer; // @synthesize isTransfer=_isTransfer;
@property(retain, nonatomic) WCFinderTransitionUserInfo *transferInfo; // @synthesize transferInfo=_transferInfo;
@property(retain, nonatomic) NSString *currentBrowseTid; // @synthesize currentBrowseTid=_currentBrowseTid;
@property(nonatomic) _Bool isClosureType; // @synthesize isClosureType=_isClosureType;
@property(nonatomic) _Bool isDraggingAsCard; // @synthesize isDraggingAsCard=_isDraggingAsCard;
@property(nonatomic) _Bool interaction; // @synthesize interaction=_interaction;
- (void)clean;
- (id)objectForKey:(id)arg1;
- (void)setObjectNoRetain:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForClass:(Class)arg1;
- (void)setObject:(id)arg1;
- (id)init;

@end
