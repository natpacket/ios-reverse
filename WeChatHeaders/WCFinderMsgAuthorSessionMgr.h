//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, WCTDatabase;
@protocol ITableSessionStorageDelegate;

@interface WCFinderMsgAuthorSessionMgr : NSObject
{
    NSMutableDictionary *_authorSessionStorageDict;
    WCTDatabase *_sessionDB;
    WCTDatabase *_greetSessionDB;
    id <ITableSessionStorageDelegate> _delegate;
    NSString *_greetSessionId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *greetSessionId; // @synthesize greetSessionId=_greetSessionId;
@property(nonatomic) __weak id <ITableSessionStorageDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCTDatabase *greetSessionDB; // @synthesize greetSessionDB=_greetSessionDB;
@property(retain, nonatomic) WCTDatabase *sessionDB; // @synthesize sessionDB=_sessionDB;
@property(retain, nonatomic) NSMutableDictionary *authorSessionStorageDict; // @synthesize authorSessionStorageDict=_authorSessionStorageDict;
- (id)storageWithUsername:(id)arg1;
- (void)cleanAuthorSessionWithUsername:(id)arg1;
- (void)checkWithUsernameArray:(id)arg1;
- (id)getStorageForFinderUsername:(id)arg1;
- (id)initWithDelegate:(id)arg1 greetSessionID:(id)arg2;
- (void)dealloc;
- (id)init;

@end
