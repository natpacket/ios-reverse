//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@protocol ChatMigrationCreateQRCodeDelegate;

@interface ChatMigrationCreateQRCode : MMObject <PBMessageObserverDelegate>
{
    id <ChatMigrationCreateQRCodeDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ChatMigrationCreateQRCodeDelegate> m_delegate; // @synthesize m_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)getQRCodeOfflineWithIP:(id)arg1 Port:(unsigned short)arg2 WifiName:(id)arg3 PcName:(id)arg4 PcacctName:(id)arg5 TotalSize:(unsigned long long)arg6 Ticket:(id)arg7 AESKey:(id)arg8 Uin:(unsigned int)arg9;
- (void)getQRCodeWithIP:(id)arg1 Port:(unsigned short)arg2 WifiName:(id)arg3 PcName:(id)arg4 PcacctName:(id)arg5 TotalSize:(unsigned long long)arg6;
- (void)dealloc;
- (id)init;

@end

