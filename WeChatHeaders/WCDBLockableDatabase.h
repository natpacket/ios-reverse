//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCTDatabase.h"

#import "WCDBLockable-Protocol.h"

@interface WCDBLockableDatabase : WCTDatabase <WCDBLockable>
{
    struct WCDBLockGuard _lockGuard;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)lockGuard:(void *)arg1;
- (id)initWithDatabase:(id)arg1;

@end

