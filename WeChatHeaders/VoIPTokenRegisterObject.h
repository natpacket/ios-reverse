//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@class NSData;
@protocol VoIPTokenRegisterObjectDelegate;

@interface VoIPTokenRegisterObject : NSObject <PBMessageObserverDelegate>
{
    NSData *m_token;
    id <VoIPTokenRegisterObjectDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <VoIPTokenRegisterObjectDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSData *m_token; // @synthesize m_token;
- (void)callOkDelegate;
- (void)callErrorDelegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startRequest;
- (id)initWithToken:(id)arg1;

@end

