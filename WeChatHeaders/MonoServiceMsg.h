//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@protocol MonoServiceMsgDelegate;

@interface MonoServiceMsg : NSObject <NSCopying>
{
    id <MonoServiceMsgDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MonoServiceMsgDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)localNotificationInfo;
- (_Bool)isParaVaild;
- (_Bool)isTheSameToMsg:(id)arg1;
- (id)msgKey;
- (id)serviceType;
- (_Bool)isCancelMsg;
- (_Bool)isOutOfDate;
- (id)init;

@end

