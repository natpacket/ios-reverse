//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class CNContactStore, NSArray, NSRecursiveLock;
@protocol WCOutAddressBookLogicDelegate;

@interface WCOutAddressBookLogic : MMObject
{
    CNContactStore *m_cnContactStore;
    _Bool m_isLoadingAddressBook;
    _Bool m_hasLoadAddressBook;
    _Bool m_localAddressBookChanged;
    NSArray *m_phoneContacts;
    double m_lastUpdateAddressBookTime;
    NSRecursiveLock *m_oLock;
    id <WCOutAddressBookLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCOutAddressBookLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool hasLoadPhoneContacts; // @synthesize hasLoadPhoneContacts=m_hasLoadAddressBook;
- (void)applicationWillEnterForeground:(id)arg1;
@property(readonly, nonatomic) unsigned int addressAuthStatus;
- (void)localAddressBookChanged;
- (void)addCacheWithPhoneContacts:(id)arg1;
- (void)loadAsyncNeedUpdate:(_Bool)arg1;
- (void)tryLoad;
- (void)onContactStoreDidChange:(id)arg1;
- (_Bool)canSyncAddressBook;
- (_Bool)addressBookStatusIsDenied;
- (id)getPhoneContacts;
- (void)loadAddressBook;
- (void)requestAccessForContactsDone:(_Bool)arg1;
- (void)refetchAddressBook;
- (id)init;
- (void)dealloc;

@end
