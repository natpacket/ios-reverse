//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@protocol WCMallNetworkHelperDelegate;

@interface WCMallNetworkHelper : MMObject <PBMessageObserverDelegate>
{
    id <WCMallNetworkHelperDelegate> m_oWCMallNetworkHelperDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCMallNetworkHelperDelegate> m_oWCMallNetworkHelperDelegate; // @synthesize m_oWCMallNetworkHelperDelegate;
- (void)OnGetWCMallPayChargeProxyReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnGetWCMallFunctionListMessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)GetWCMallPayChargeProxyRequets:(id)arg1;
- (void)GetWCMallFunctionList:(id)arg1;
- (void)dealloc;
- (id)init;

@end

